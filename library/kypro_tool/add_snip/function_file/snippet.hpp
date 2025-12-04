#pragma once
#include <iostream>
#include <filesystem>
#include <fstream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;
using namespace std;

void save_snippet(const string& name, const string& prefix, const string& body, const string& description, const filesystem::path& path) {
    json snippet;
    if (filesystem::exists(path)) {
        ifstream ifs(path);
        ifs >> snippet;
    }
    
    vector<string> body_lines;

    ifstream ifs(body);
    stringstream ss;
    ss << ifs.rdbuf();

    string line;

    while (getline(ss, line, '\n')) {
        body_lines.push_back(line);
    }

    snippet[name] = json::object();
    snippet[name]["prefix"] = prefix;
    snippet[name]["body"] = body_lines;
    if (description != "") snippet[name]["description"] = description;

    ofstream ofs(path);
    ofs << snippet.dump(4);
    cout << "スニペットを追加しました\n";
}   