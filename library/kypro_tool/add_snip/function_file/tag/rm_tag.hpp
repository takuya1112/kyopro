#pragma once
#include <iostream>
#include <unordered_set>
#include <vector>
#include <filesystem>
#include <fstream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;
using namespace std;

void remove_tags(const string& name, const vector<string>& tags, const filesystem::path& path, json& data) {
    if (!data.contains(name)) {
        cout << "スニペット '" << name << "' は存在しません\n";
        return;
    }

    if (!data[name].contains("tags")) {
        cout << "タグがありません\n";
        return;
    }

    auto& target = data[name]["tags"];

    unordered_set<string> remove_set(tags.begin(), tags.end());
    vector<string> new_tags;
    new_tags.reserve(target.size());

    for (auto& t : target) {
        if (!remove_set.count(t)) {
            new_tags.push_back(t);
        }
    }

    target = move(new_tags);

    ofstream ofs(path);
    ofs << data.dump(4);
    cout << "タグを消去しました\n";
}