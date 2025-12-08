#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "random_gen.hpp"

// 入力データの型を定義する

struct TestCase {
    int h, w;
    vector<string> grid;
};

// WAの時の入力データを出力する関数
void print_in(const TestCase& in) {
    cout << in.h << " " << in.w << endl;
    for (int i = 0; i < in.h; i++) {
        cout << in.grid[i] << endl;
    }
}

// WAの時の出力データを出力する関数
void print_out(const int& out) {
    cout << out << endl;
}

// 入力データのランダム生成する関数
RandomGen gen;
TestCase random_case() {
    TestCase in;
    in.h = gen.ri(2, 10);
    in.w = gen.ri(2, 10);
    in.grid = gen.random_gird_s(in.h, in.w);
    return in;
}
