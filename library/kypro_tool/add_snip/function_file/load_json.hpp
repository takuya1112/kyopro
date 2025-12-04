#pragma once
#include <iostream>
#include <filesystem>
#include <fstream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;
using namespace std;

json load_json(const string& path) {
    json data;
    ifstream ifs(path);

    try {
        ifs >> data;
    } catch(json::parse_error& e) {
        cerr << "JSONの読み込みに失敗しました\n";
        cerr << e.what() << '\n';
        return json{};
    }
    return data;
}