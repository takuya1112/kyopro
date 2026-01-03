#pragma once
#include <iostream>
#include <filesystem>
#include <fstream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;
using ord_json = nlohmann::ordered_json;
using namespace std;


void sync_vs(const json& data, const filesystem::path vs_path) {
    ord_json out;

    for (auto& [name, snip] : data.items()) {
        ord_json item;
        item["prefix"] = snip["prefix"];
        item["body"] = snip["body"];
        if (snip.contains("description")) item["description"] = snip["description"];
        out[name] = item;
    }

    ofstream ofs(vs_path);
    ofs << out.dump(4);

    cout << "スニペットを同期しました\n";
}