#pragma once
#include <iostream>
#include <filesystem>
#include <fstream>
#include <nlohmann/json.hpp>
#include "edit_editor.hpp"

using json = nlohmann::json;
using namespace std;

void edit_snippet(const string& target, const filesystem::path& path, json& data) {
    if (!data.contains(target)) {
        cout << "スニペット '" << target << "' は存在しません\n";
        return;
    }

    json& snippet = data[target];
    string old_name = target;
    string old_prefix = snippet["prefix"];
    string old_body = "";
    for (const auto& line : snippet["body"]) old_body += line.get<string>() + '\n';
    string old_description = snippet.value("description", "");

    string name, prefix, description;

    cout << "Name [" << old_name << "]: ";
    getline(cin, name);
    if (name.empty()) name = old_name;

    cout << "Prefix [" << old_prefix << "]: ";
    getline(cin, prefix);
    if (prefix.empty()) prefix = old_prefix;

    cout << "Description [" << old_description << "]: ";
    getline(cin, description);
    if (description.empty()) description = old_description;

    cout << "Body を外部エディタで編集しますか？ (y/N)\n";
    string yn;
    getline(cin, yn);
    
    string new_body = old_body;
    if (yn == "y" || yn == "Y") {
        new_body = edit_with_editor(old_body);
    }

    vector<string> body_lines;
    {
        stringstream ss(new_body);
        string line;
        while (getline(ss, line)) body_lines.push_back(line);   
    }

    json new_snippet;
    new_snippet["prefix"] = prefix;
    new_snippet["body"] = body_lines;
    if (!description.empty()) new_snippet["description"] = description;

    if (name != old_name) {
        data.erase(old_name);
    }

    data[name] = new_snippet;

    ofstream ofs(path);
    ofs << data.dump(4);

    cout << "編集を保存しました\n";
}