#pragma once
#include <iostream>
#include <nlohmann/json.hpp>
#include "all_read.hpp"

using json = nlohmann::json;
using namespace std;

string to_lower(string s) {
    transform(s.begin(), s.end(), s.begin(), [](unsigned char c){ return tolower(c); });
    return s;
}

void search_snippet(const string& key, const json& data) {
    string key_lower = to_lower(key);
    bool found = false;
    cout << "=======検索結果(" << key << ")=======" << endl;
    for (auto& [name, value] : data.items()) {
        string nm = name;
        string prefix = value.contains("prefix") ? value["prefix"].get<string>() : "";
        string description = value.contains("description") ? value["description"].get<string>() : "";

        string all = nm + " " + prefix + " " + description;
        if (to_lower(all).find(key_lower) != string::npos) {
            found = true;
            cout << "- " << name << " (prefix: " << prefix << ")\n";
        }
    }
    if (!found) {
        cout << "該当するスニペットは見つかりませんでした\n";
    }
}   