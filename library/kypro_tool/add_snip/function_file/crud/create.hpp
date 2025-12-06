#pragma once
#include <iostream>
#include <unordered_set>
#include <vector>
#include <filesystem>
#include <fstream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;
using namespace std;

void save_snippet(const string& name, const string& prefix, const string& body, const string& description, 
                const vector<string>& tags, const filesystem::path& path
) {
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

    while (getline(ss, line)) {
        body_lines.push_back(line);
    }

    unordered_set<string> seen;
    vector<string> unique;
    for (auto& tag : tags) {
        if (seen.insert(tag).second) {
            unique.push_back(tag);
        }
    }

    snippet[name] = json::object();
    snippet[name]["prefix"] = prefix;
    snippet[name]["body"] = body_lines;
    if (!description.empty()) snippet[name]["description"] = description;
    snippet[name]["tags"] = unique;

    ofstream ofs(path);
    ofs << snippet.dump(4);
    cout << "スニペットを追加しました\n";
}   