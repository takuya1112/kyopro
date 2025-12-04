#include <iostream>
#include <filesystem>
#include <CLI/CLI.hpp>
#include <nlohmann/json.hpp>
#include "function_file/snippet.hpp"
#include "function_file/list.hpp"
#include "function_file/search.hpp"
#include "function_file/load_json.hpp"
#include "function_file/delete.hpp"

using json = nlohmann::json;

filesystem::path getSnippetPath() {
    return "/mnt/c/Users/Owner/AppData/Roaming/Code/User/snippets/cpp.json";
}

int main(int argc, char** argv) {
    filesystem::path path = getSnippetPath();
    if (!filesystem::exists(path)) {
        cout << "スニペットのファイルが存在しません\n";
        return 1;
    }

    CLI::App app{"Snippet maker"};

    bool list = false;
    string name, prefix, body, description, search_key, del_name;
    app.add_flag("-l, --list", list, "List all snippets");
    app.add_option("-s, --search", search_key, "Search snippet");
    app.add_option("--delete", del_name, "Delete snippets");
    app.add_option("-n,--name", name, "Snippet name");
    app.add_option("-p, --prefix", prefix, "Prefix");
    app.add_option("-f, --body", body, "Body");
    app.add_option("-d, --desc", description, "Description");
    CLI11_PARSE(app, argc, argv);

    if (list) {
        json data = load_json(path);
        if (data.empty()) return 1;
        show_list(data);
    } else if (!search_key.empty()) {
        json data = load_json(path);
        if (data.empty()) return 1;
        search_snippet(search_key, data);
    } else if (!del_name.empty()) {
        json data = load_json(path);
        if (data.empty()) return 1;
        delete_snippet(del_name, path, data);
    } else if (!name.empty()) {
        save_snippet(name, prefix, body, description, path);
    }
    return 0;
}