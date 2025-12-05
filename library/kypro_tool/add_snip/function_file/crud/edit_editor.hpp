#pragma once
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

string edit_with_editor(const string& initial_body) {
    string tmp = "/tmp/snippet_edit.txt";

    {
        ofstream ofs(tmp);
        ofs << initial_body;
    }

    const char* editor = getenv("EDITOR");
    if (!editor) editor = "code";

    string cmd = string(editor) + " " + tmp;

    if (string(editor).find("code") != string::npos && 
        string(editor).find("--wait") == string::npos) {
            cmd = "code --wait " + tmp;
        } 

    system(cmd.c_str());

    ifstream ifs(tmp);
    stringstream ss;
    ss << ifs.rdbuf();
    return ss.str();
}