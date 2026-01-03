#pragma once
#include <iostream>
#include <string>
#include <nlohmann/json.hpp>
#include "./all_read.hpp"

using json = nlohmann::json;
using namespace std;

void list_name(const json& data, bool full = false) {
    Filter_Sorter fs(no_filter(), name_sorter());
    fs.print_data(data, full);
}

void list_prefix(const json& data, bool full = false) {
    Filter_Sorter fs(no_filter(), prefix_sorter());
    fs.print_data(data, full);
}
