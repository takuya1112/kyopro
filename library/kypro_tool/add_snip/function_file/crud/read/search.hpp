#pragma once
#include <iostream>
#include <nlohmann/json.hpp>
#include "all_read.hpp"

using json = nlohmann::json;
using namespace std;

using FilterType = function<bool(const string&, const json&)>;

void search_and_nsort(const string& name, const string& prefix, const vector<string>& tags,  const json& data, bool full = false) {
    FilterType f = filter_and(build(name, prefix, tags)); 
    Filter_Sorter fs(f, name_sorter());
    fs.print_data(data, full);
} 

void search_and_psort(const string& name, const string& prefix, const vector<string>& tags,  const json& data, bool full = false) {
    FilterType f = filter_and(build(name, prefix, tags));
    Filter_Sorter fs(f, prefix_sorter());
    fs.print_data(data, full);
}

void search_or_nsort(const string& name, const string& prefix, const vector<string>& tags,  const json& data, bool full = false) {
    auto f = filter_or(build(name, prefix, tags));
    Filter_Sorter fs(f, name_sorter());
    fs.print_data(data, full);
}

void search_or_psort(const string& name, const string& prefix, const vector<string>& tags,  const json& data, bool full = false) {
    auto f = filter_or(build(name, prefix, tags));
    Filter_Sorter fs(f, prefix_sorter());
    fs.print_data(data, full);
}