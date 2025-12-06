#pragma once
#include <iostream>
#include <filesystem>
#include <fstream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;
using namespace std;

void rename_snippet(const string& old_name, const string& new_name, filesystem::path path, json& data) {
    if (!data.contains(old_name)) {
        cout << "スニペット '" << old_name << "' は存在しません\n";
        return;
    }

    if (data.contains(new_name)) {
        cout << "スニペット '" << new_name << "' は既に存在します\n";
        return;
    }

    data[new_name] = data[old_name];

    data.erase(old_name);

    ofstream ofs(path);
    ofs << data.dump(4);
    cout << "スニペット名を '" << old_name << "' から '" << new_name << "' に変更しました\n";
}