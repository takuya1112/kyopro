#pragma once
#include <string>
#include <vector>
#include <functional>
#include <nlohmann/json.hpp>

using json = nlohmann::json;
using namespace std;

bool filter_all(const string& a, const json& b) {
    return true;
}

