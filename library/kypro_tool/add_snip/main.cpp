#include <iostream>
#include <vector>
#include <filesystem>
#include <CLI/CLI.hpp>
#include <nlohmann/json.hpp>
#include "function_file/all.hpp"

using json = nlohmann::json;

int main(int argc, char** argv) {
    CLI::App app{"Snippet maker"};

    vector<string> tags;
    string name, prefix, body, description;

    auto list  = app.add_subcommand("list", "List all snippets");


    auto add_tag = app.add_subcommand("add_tag", "Add tags");
    add_tag->add_option("-n, --name", name)->required();
    add_tag->add_option("-t, --tag", tags)->required()->expected(1, -1);


    auto search = app.add_subcommand("search", "Search snippet");
    search->add_option("-n, --name", name)->required();


    auto del = app.add_subcommand("delete", "Delete a snippet");
    del->add_option("-n, --name", name)->required();


    auto edit = app.add_subcommand("edit", "Edit a snippet");
    edit->add_option("-n, --name", name)->required();


    auto add = app.add_subcommand("add", "Add a snippet");
    add->add_option("-n,--name", name)->required();
    add->add_option("-p, --prefix", prefix)->required();
    add->add_option("-b, --body", body)->required();
    add->add_option("-d, --desc", description);

    CLI11_PARSE(app, argc, argv);

    filesystem::path path = getDBPath();
    json data = load_json(path);

    if (app.got_subcommand(list)) {
        show_list(data);
    } 
    else if (app.got_subcommand(search)) {
        search_snippet(name, data);
    } 
    else if (app.got_subcommand(del)) {
        delete_snippet(name, path, data);
    } 
    else if (app.got_subcommand(add_tag)) {
        add_tags(name, tags, data); 
    }
    else if (app.got_subcommand(edit)) {
        edit_snippet(name, path, data);
    } 
    else if (app.got_subcommand(add)) {
        save_snippet(name, prefix, body, description, path);
    }
    return 0;
}