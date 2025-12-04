#pragma once
#include <iostream>
#include <filesystem>
#include <fstream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;
using namespace std;

void show_list(const json& data) {
    cout << "=====登録スニペット一覧=====\n";
    for (auto& [name, value] : data.items()) {
        string prefix = value.contains("prefix") ? value["prefix"].get<string>() : "";
        cout << "- " << name << " (prefix: " << prefix << ")\n";
    }
}