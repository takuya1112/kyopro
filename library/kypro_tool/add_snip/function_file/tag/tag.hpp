#pragma once
#include <iostream>
#include <vector>
#include <filesystem>
#include <fstream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;
using namespace std;

void add_tags(const string& name, const vector<string>& tags, json& data) { 
    if (!data.contains(name)) {
        cout << "スニペット '" << name << "' は存在しません\n";
        return;
    }

    auto& target = data[name];
    if (!target.contains("tags")) target["tags"] = json::array();

    for (auto& tag : tags) {
        bool exsist = false;
        for (auto& e : target["tags"]) {
            if (e == tag) { exsist = true; break; }
        }
        if (!exsist) cout << "HI" << endl;
        if (!exsist) target["tags"].push_back(tag);
    }

    cout << "タグを追加しました\n";
}