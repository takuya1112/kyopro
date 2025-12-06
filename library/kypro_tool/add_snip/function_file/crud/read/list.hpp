#pragma once
#include <iostream>
#include <string>
#include <nlohmann/json.hpp>
#include "all_read.hpp"

using json = nlohmann::json;
using namespace std;

void list_name(const json& data, bool full = false) {
    Filter_Sorter fs;
    fs.filter = filter_all;
    fs.sorter = sorter_name;
    fs.print_data(data, full);
}

void list_prefix(const json& data, bool full = false) {
    Filter_Sorter fs;
    fs.filter = filter_all;
    fs.sorter = sorter_prefix;
    fs.print_data(data, full);
}
