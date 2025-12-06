#pragma once
#include <string>
#include <vector>
#include <functional>
#include <nlohmann/json.hpp>

using json = nlohmann::json;
using namespace std;

struct Filter_Sorter {
    using FilterType = function<bool(const string&, const json&)>;
    using SorterType = function<bool(const pair<string, json>&, const pair<string, json>&)>;

    FilterType filter;
    SorterType sorter;

    Filter_Sorter(FilterType f, SorterType s) : filter(f), sorter(s){}
    
    vector<pair<string, json>> make_new_data(const json& data) {
        vector<pair<string, json>> results;

        for (auto& [name, snip] : data.items()) {
            if (filter(name, snip)) {
                results.push_back({name, snip});
            }
        }

        sort(results.begin(), results.end(), sorter);

        return results;
    }

    void print_one(const string& name, const json& snip, bool full) const {
        cout << "name: " << name << "\n";
        cout << "prefix: " << snip.value("prefix", "") << "\n";
        if (full) {
            string desc = snip.value("description", "");
            if (!desc.empty()) {
                cout << "description: " << desc << "\n";
            }
            
            json tags = snip.value("tags", json::array());
            if (tags.is_array() && !tags.empty()) {
                cout << "tags: ";
                for (auto& t : tags) cout << t.get<string>() << " ";
                cout << "\n";
            }
        }
        cout << "============================\n";
    }

    void print_data(const json& data, bool full) {
        cout << "========= 結果一覧 =========\n";
        vector<pair<string, json>> new_data = make_new_data(data);
        for (auto& [name, snip] : new_data) {
            print_one(name, snip, full);
        }
    }
};
