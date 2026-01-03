#pragma once
#include <iostream>
#include <unordered_set>
#include <vector>
#include <filesystem>
#include <fstream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;
using namespace std;

void add_tags(const string& name, const vector<string>& tags, const filesystem::path& path, json& data) { 
    if (!data.contains(name)) {
        cout << "スニペット '" << name << "' は存在しません\n";
        return;
    }

    auto& target = data[name];
    if (!target.contains("tags")) target["tags"] = json::array();

    unordered_set<string> seen;
    for (auto& tag : target["tags"]) seen.insert(tag);

    for (auto& tag : tags) {
        if (seen.insert(tag).second) {
            target["tags"].push_back(tag);
        } 
    }

    ofstream ofs(path);
    ofs << data.dump(4);
    cout << "タグを追加しました\n";
}