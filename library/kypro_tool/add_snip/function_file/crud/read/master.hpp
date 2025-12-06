#pragma once
#include <string>
#include <vector>
#include <functional>
#include <nlohmann/json.hpp>

using json = nlohmann::json;
using namespace std;

struct Filter_Sorter {
    using FilterType =  function<bool(const string&, const json&)>;
    using SorterType = function<bool(const pair<string, json>&, const pair<string, json>&)>;

    FilterType filter;
    SorterType sorter;

    vector<pair<string, json>> make_newdata(const json& data) {
        vector<pair<string, json>> results;

        for (auto& [name, snip] : data.items()) {
            if (filter(name, snip)) {
                results.push_back({name, snip});
            }
        }

        sort(results.begin(), results.end(), sorter);

        return results;
    }

    void print_data(const json& data, const bool& full) {
        vector<pair<string, json>> new_data = make_newdata(data);
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
};
