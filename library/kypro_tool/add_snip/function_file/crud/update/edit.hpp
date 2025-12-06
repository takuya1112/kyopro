#pragma once
#include <iostream>
#include <filesystem>
#include <fstream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;
using namespace std;

string edit_with_editor(const string& initial_body) {
    string tmp = "/tmp/snippet_edit.txt";

    {
        ofstream ofs(tmp);
        ofs << initial_body;
    }

    const char* editor = getenv("EDITOR");
    if (!editor) editor = "code";

    string cmd = string(editor) + " " + tmp;

    if (string(editor).find("code") != string::npos && 
        string(editor).find("--wait") == string::npos) {
            cmd = "code --wait " + tmp;
        } 

    system(cmd.c_str());

    ifstream ifs(tmp);
    stringstream ss;
    ss << ifs.rdbuf();
    return ss.str();
}


void edit_snippet(const string& name, const filesystem::path& path, json& data) {
    if (!data.contains(name)) {
        cout << "スニペット '" << name << "' は存在しません\n";
        return;
    }

    json& snippet = data[name];
    string old_prefix = snippet["prefix"];
    string old_body = "";
    for (const auto& line : snippet["body"]) old_body += line.get<string>() + '\n';
    string old_description = snippet.value("description", "");

    string prefix, description;

    cout << "Prefix [" << old_prefix << "]: ";
    getline(cin, prefix);
    if (prefix.empty()) prefix = old_prefix;

    cout << "Description [" << old_description << "]: ";
    getline(cin, description);
    if (description.empty()) description = old_description;

    cout << "Body を外部エディタで編集しますか？ (y/N): ";
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

    data[name] = new_snippet;

    ofstream ofs(path);
    ofs << data.dump(4);

    cout << "編集を保存しました\n";
}