#pragma once
#include <string>
#include <vector>
#include <functional>
#include <nlohmann/json.hpp>

using json = nlohmann::json;
using namespace std;

using SorterType = function<bool(const pair<string, json>&, const pair<string, json>&)>;

SorterType name_sorter() {
    return [](const pair<string, json>& a, const pair<string, json>& b) -> bool {
        string A = a.first;
        string B = b.first;
        transform(A.begin(), A.end(), A.begin(), [](unsigned char c){ return tolower(c); });
        transform(B.begin(), B.end(), B.begin(), [](unsigned char c){ return tolower(c); });
        if (A.empty() || B.empty()) return B.empty();
        return A < B;
    };
}

SorterType prefix_sorter() {
    return [](const pair<string, json>& a, const pair<string, json>& b) -> bool {
        string A = a.second.contains("prefix") ? a.second["prefix"].get<string>() : "";
        string B = b.second.contains("prefix") ? b.second["prefix"].get<string>() : "";
        if (A.empty() || B.empty()) return B.empty();
        return A < B;
    };
}