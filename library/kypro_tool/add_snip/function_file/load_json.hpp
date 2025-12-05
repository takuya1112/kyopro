#pragma once
#include <filesystem>
#include <fstream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;
using namespace std;

json load_json(const filesystem::path& path) {
    auto dir = path.parent_path();
    filesystem::create_directories(dir);

    if (!filesystem::exists(path)) {
        json empty = json::object();
        ofstream ofs(path);
        ofs << empty.dump(4);
        return empty;
    }

    json data;
    ifstream ifs(path);
    ifs >> data;
    return data;
}

