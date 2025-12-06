#pragma once
#include <iostream>
#include <string>
#include <nlohmann/json.hpp>
#include "all_read.hpp"

using json = nlohmann::json;
using namespace std;

void list_name(const json& data, bool full = false) {
    vector<pair<string, json>> new_data = filter_sort(data, filter_all, sorter_name);
    
    cout << "=====登録スニペット一覧=====\n";
    for (auto& [name, snip] : new_data) {
        cout << "name: " << name << "\n";
        cout << "prefix: " << snip["prefix"].get<string>() << "\n";
        if (full) {
            if (snip.contains("description") && !snip["description"].empty()) {
                cout << "description: " << snip["description"].get<string>() << "\n";
            } 

            if (snip.contains("tags") && !snip["tags"].empty()) {
                cout << "tags: ";
                for (auto& t : snip["tags"].get<vector<string>>()) cout << t << " ";
                cout << "\n";
            }
        }
        cout << "----------------------------\n";
    }
}


void list_prefix(const json& data, bool full = false) {
    vector<pair<string, json>> new_data = filter_sort(data, filter_all, sorter_prefix);
    
    cout << "=====登録スニペット一覧=====\n";
    for (auto& [name, snip] : new_data) {
        cout << "name: " << name << "\n";
        cout << "prefix: " << snip["prefix"].get<string>() << "\n";
        if (full) {
            if (snip.contains("description") && !snip["description"].empty()) {
                cout << "description: " << snip["description"].get<string>() << "\n";
            } 

            if (snip.contains("tags") && !snip["tags"].empty()) {
                cout << "tags: ";
                for (auto& t : snip["tags"].get<vector<string>>()) cout << t << " ";
                cout << "\n";
            }
        }
        cout << "----------------------------\n";
    }
}
