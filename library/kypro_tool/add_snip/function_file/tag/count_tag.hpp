#pragma once
#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <nlohmann/json.hpp>

using json = nlohmann::json;
using namespace std;

void count_tag(json& data) {
    unordered_map<string, int> mp;
    for (auto& [name, snip] : data.items()) {
        json tags = snip.value("tags", json::array());
        if (tags.is_array() && !tags.empty()) {
            for (auto& t : tags) {
                mp[t.get<string>()]++;
            }
        }
    }

    for (auto [name, cnt] : mp) {
        cout << name << " (" << cnt << ")\n";
    }
}