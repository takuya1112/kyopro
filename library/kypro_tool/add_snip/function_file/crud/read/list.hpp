#pragma once
#include <iostream>
#include <string>
#include <nlohmann/json.hpp>
#include "all_read.hpp"

using json = nlohmann::json;
using namespace std;

void show_list(const json& data) {
    vector<pair<string, json>> new_data = filter_sort(data, filter_all, sorter_naem);
    
    cout << "=====登録スニペット一覧=====\n";
    for (auto& [name, snip] : new_data) {
        cout << name << ' ' << snip["prefix"] << endl;
    }
}