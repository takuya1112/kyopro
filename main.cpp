#include <bits/stdc++.h>
#include <CLI/CLI.hpp>
using namespace std;

int main(int argc, char** argv) {
    CLI::App app{"Snippet maker"};

    string name, prefix, file, body;
    app.add_option("-n,--name", name, "Snippet name")->required();
    app.add_option("-p, --prefix", prefix, "Prefix")->required();
    app.add_option("-f, --file", file, "File");
    
    CLI11_PARSE(app, argc, argv);
    if (file.empty()) {
        cerr << "Error: --file is required\n";
        return 1;
    }

    ifstream ifs(file);
    if (!ifs) {
        cerr << "Error: cannot open file: " << file << "\n";
        return 1;
    }

    stringstream ss;
    ss << ifs.rdbuf();
    body = ss.str();

    cout << "Name: " << name << "\n";
    cout << "Prefix: " << prefix << "\n";
    cout << "Body:\n" << body << "\n";
}