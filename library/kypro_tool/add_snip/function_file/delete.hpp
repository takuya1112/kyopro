#pragma once
#include <iostream>
#include <filesystem>
#include <fstream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;
using namespace std;

void delete_snippet(const string& name, const filesystem::path& path, json& data) {
    if (!data.contains(name)) {
        cout << "スニペット '" << name << "' は存在しません\n";
        return;
    }

    data.erase(name);
    cout << "削除しました: " << name << "\n";

    ofstream ofs(path);
    ofs << data.dump(4);
}