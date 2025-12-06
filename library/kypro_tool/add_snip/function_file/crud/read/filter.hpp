#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <functional>
#include <nlohmann/json.hpp>

using json = nlohmann::json;
using namespace std;

using FilterType = function<bool(const string&, const json&)>;

FilterType no_filter() {
    return [](const string& name, const json& snip) -> bool {
        return true;
    };
}

FilterType name_filter(const string& key) {
    return [key](const string& name, const json& snip) -> bool {
        if (key.empty()) return true;
        return name.find(key) != string::npos;
    };
}

FilterType prefix_filter(const string& key) {
    return [key](const string& name, const json& snip) -> bool {
        if (key.empty()) return true;
        if (!snip.contains("prefix")) return false;
        return snip["prefix"].get<string>().find(key) != string::npos;
    };
}

FilterType tags_filter(const vector<string>& key) {
    return [key](const string& name, const json& snip) -> bool {
        if (!key.size()) return true;
        if (!snip.contains("tags")) return false;
        unordered_set<string> tags(key.begin(), key.end());
        for (auto& t : snip["tags"]) {
            if (tags.count(t.get<string>())) return true;
        }
        return false;
    };
}

FilterType filter_and(const vector<FilterType>& fs) {
    return [fs](const string& name, const json& snip) -> bool {
        for (auto& f : fs) {
            if (!f(name, snip)) return false;
        }
        return true;
    };
}

FilterType filter_or(const vector<FilterType>& fs) {
    return [fs](const string& name, const json& snip) -> bool {
        for (auto& f : fs) {
            if (f(name, snip)) return true;
        }
        return false;
    };
}