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
    return [key = move(key)](const string& name, const json& snip) -> bool {
        return name.find(key) != string::npos;
    };
}

FilterType prefix_filter(const string& key) {
    return [key = move(key)](const string& name, const json& snip) -> bool {
        if (!snip.contains("prefix")) return false;
        return snip["prefix"].get<string>().find(key) != string::npos;
    };
}

FilterType tags_filter(const vector<string>& key) {
    unordered_set<string> tags(key.begin(), key.end());
    return [tags = move(tags)](const string& name, const json& snip) -> bool {
        if (!snip.contains("tags")) return false;
        for (auto& t : snip["tags"]) {
            if (tags.count(t.get<string>())) return true;
        }
        return false;
    };
}

FilterType filter_and(const vector<FilterType>& fs) {
    if (fs.empty()) return no_filter();
    return [fs = move(fs)](const string& name, const json& snip) -> bool {
        for (auto& f : fs) {
            if (!f(name, snip)) return false;
        }
        return true;
    };
}

FilterType filter_or(const vector<FilterType>& fs) {
    if (fs.empty()) return [](const string& name, const json& snip) { return false; };
    return [fs = move(fs)](const string& name, const json& snip) -> bool {
        for (auto& f : fs) {
            if (f(name, snip)) return true;
        }
        return false;
    };
}

vector<FilterType> build(const string& name, const string& prefix, const vector<string>& tags) {
    vector<FilterType> fs;
    if (!name.empty()) fs.push_back(name_filter(name));
    if (!prefix.empty()) fs.push_back(prefix_filter(prefix));
    if (!tags.empty()) fs.push_back(tags_filter(tags));
    return fs;
}

FilterType build_or(const string& name, const string& prefix, const vector<string>& tags) {
    auto fs = build(name, prefix, tags);
    return filter_or(fs);
}

FilterType build_and(const string& name, const string& prefix, const vector<string>& tags) {
    auto fs = build(name, prefix, tags);
    return filter_and(fs);
}