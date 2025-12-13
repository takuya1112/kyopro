#define CLI11_HEADER_ONLY
#include <CLI/CLI.hpp>
#include <iostream>
#include <vector>
#include <filesystem>
#include <CLI/CLI.hpp>
#include <nlohmann/json.hpp>
#include "all.hpp"

using json = nlohmann::json;

int main(int argc, char** argv) {
    CLI::App app{"Snippet maker"};

    bool full = false, is_or = false;
    vector<string> tags;
    string name, new_name, prefix, body, description, sort_key;

    auto list = app.add_subcommand("list", "List all snippets");
    list->add_flag("-f, --full", full);
    list->add_option("-k, --key", sort_key);


    auto search = app.add_subcommand("search", "Search snippet");
    search->add_option("-n, --name", name);
    search->add_option("-p, --prefix", prefix);
    search->add_option("-t, --tags", tags);
    search->add_option("-k, --key", sort_key);
    search->add_flag("-f, --full", full);
    search->add_flag("-o, --or", is_or);


    auto add_tag = app.add_subcommand("add_tag", "Add tags");
    add_tag->add_option("-n, --name", name)->required();
    add_tag->add_option("-t, --tag", tags)->required()->expected(1, -1);


    auto remove_tag = app.add_subcommand("rm_tag", "Remove tags");
    remove_tag->add_option("-n, --name", name)->required();
    remove_tag->add_option("-t, --tag", tags)->required()->expected(1, -1);


    auto count_tags = app.add_subcommand("cnt_tag", "Count tags");


    auto del = app.add_subcommand("del", "Delete a snippet");
    del->add_option("-n, --name", name)->required();


    auto rename = app.add_subcommand("rename", "Rename a snippet");
    rename->add_option("-o, --old", name)->required();
    rename->add_option("-n, --new", new_name)->required();


    auto edit = app.add_subcommand("edit", "Edit a snippet");
    edit->add_option("-n, --name", name)->required();


    auto add = app.add_subcommand("add", "Add a snippet");
    add->add_option("-n,--name", name)->required();
    add->add_option("-p, --prefix", prefix)->required();
    add->add_option("-b, --body", body)->required();
    add->add_option("-d, --desc", description);
    add->add_option("-t, --tag", tags);


    auto sync = app.add_subcommand("sync", "Sync with vscode snippet");


    CLI11_PARSE(app, argc, argv);

    filesystem::path path = getDBPath();
    json data = load_json(path);

    if (app.got_subcommand(list)) {
        if (sort_key == "prefix") list_prefix(data, full);
        else list_name(data, full);
    } 
    else if (app.got_subcommand(search)) {
        if (is_or) {
            if (sort_key == "prefix") search_or_psort(name, prefix, tags, data, full);
            else search_or_nsort(name, prefix, tags, data, full);
        } else {
            if (sort_key == "prefix") search_and_psort(name, prefix, tags, data, full);
            else search_and_nsort(name, prefix, tags, data, full);
        }
    } 
    else if (app.got_subcommand(del)) {
        delete_snippet(name, path, data);
    } 
    else if (app.got_subcommand(add_tag)) {
        add_tags(name, tags, path, data); 
    }
    else if (app.got_subcommand(remove_tag)) {
        remove_tags(name, tags, path, data);
    }
    else if (app.got_subcommand(count_tags)) {
        count_tag(data);
    }
    else if (app.got_subcommand(rename)) {
        rename_snippet(name, new_name, path, data);
    }
    else if (app.got_subcommand(edit)) {
        edit_snippet(name, path, data);
    } 
    else if (app.got_subcommand(add)) {
        save_snippet(name, prefix, body, description, tags, path);
    }
    else if (app.got_subcommand(sync)) {
        filesystem::path vs_path = getSnippetPath();
        sync_vs(data, vs_path);
    }
    return 0;
}