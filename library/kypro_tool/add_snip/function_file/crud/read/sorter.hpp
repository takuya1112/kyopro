#pragma once
#include <string>
#include <vector>
#include <functional>
#include <nlohmann/json.hpp>

using json = nlohmann::json;
using namespace std;

bool sorter_naem(const pair<string, json>& a, const pair<string, json>& b) {
    return a.first < b.first;
}