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

    auto list  = app.add_subcommand("list", "List all snippets");

    string search_key;
    auto search = app.add_subcommand("search", "Search snippet");
    search->add_option("-s, --search", search_key)->required();

    string del_name;
    auto del = app.add_subcommand("delete", "Delete a snipet");
    del->add_option("-n, --name", del_name)->required();

    string name, prefix, body, description;
    auto add = app.add_subcommand("add", "Add a snipet");
    add->add_option("-n,--name", name)->required();
    add->add_option("-p, --prefix", prefix)->required();
    add->add_option("-b, --body", body)->required();
    add->add_option("-d, --desc", description);

    CLI11_PARSE(app, argc, argv);

    if (app.got_subcommand(list)) {
        json data = load_json(path);
        if (data.empty()) return 1;
        show_list(data);
    } else if (app.got_subcommand(search)) {
        json data = load_json(path);
        if (data.empty()) return 1;
        search_snippet(search_key, data);
    } else if (app.got_subcommand(del)) {
        json data = load_json(path);
        if (data.empty()) return 1;
        delete_snippet(del_name, path, data);
    } else if (app.got_subcommand(add)) {
        save_snippet(name, prefix, body, description, path);
    }
    return 0;
}