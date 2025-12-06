#pragma once
#include <iostream>
#include <string>
#include <nlohmann/json.hpp>
#include "all_read.hpp"

using json = nlohmann::json;
using namespace std;

void show_list(const json& data, bool full = true) {
    vector<pair<string, json>> new_data = filter_sort(data, filter_all, sorter_name);
    
    cout << "=====登録スニペット一覧=====\n";
    for (auto& [name, snip] : new_data) {
        cout << name << " (prefix: " << snip["prefix"];
        if (full) {
            if (!snip["description"].empty()) cout << " description: " << snip["description"];
            if (!snip["tags"].empty()) {
                cout << " tags: ";
                for (int i = 0; i < snip["tags"].size(); i++) cout << snip["tags"][i] << " ";
            }
        }
        cout << ")\n";
    }
}