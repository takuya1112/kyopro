#pragma once
#include <filesystem>

using namespace std;

filesystem::path getSnippetPath() {
    return "/mnt/c/Users/Owner/AppData/Roaming/Code/User/snippets/cpp.json";
}

filesystem::path getDBPath() {
    return "/mnt/c/Users/Owner/.snippetDB/snippets.json";
}