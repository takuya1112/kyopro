#pragma once
#include <string>
#include <vector>
#include <functional>
#include <nlohmann/json.hpp>

using json = nlohmann::json;
using namespace std;

json filter_sort(const json& data,
                function<bool(const string&, const json&)> filter, 
                function<bool(const pair<string, json>&, const pair<string, json>&)> sorter
) {
    vector<pair<string, json>> results;

    for (auto& [name, snip] : data.items()) {
        if (filter(name, snip)) {
            results.push_back({name, snip});
        }
    }
    return results;
    sort(results.begin(), results.end(), sorter);

    return results;
}