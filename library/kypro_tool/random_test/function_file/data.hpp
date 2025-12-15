#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "random_gen.hpp"
#include "debug_print.hpp"

// 入力データの型を定義する
struct TestCase {
    int H, W, Q;
    vector<tuple<int, int, int, int, int>> idx;
};

struct Result {
    vector<vector<int>> ans;
};

inline bool operator == (const Result& a, const Result& b) {
    return a.ans == b.ans;
}

// WAの時の入力データを出力する関数
void print_in(const TestCase& in) {
    cout << in.H << " " << in.H << " " << in.Q << endl;
    cout << in.idx << endl;
}

// WAの時の出力データを出力する関数
void print_out(const Result& out) {
    cout << out.ans << "\n";
}

// 入力データのランダム生成する関数
RandomGen gen;
TestCase random_case() {
    TestCase in;
    in.H = gen.ri(1, 10);
    in.W = gen.ri(1, 10);
    in.Q = gen.ri(1, 10);

    in.idx = gen.random_array2d_tuple(in.Q, in.H, in.W, 100);
    return in;
}
