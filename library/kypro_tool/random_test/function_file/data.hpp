#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "random_gen.hpp"
#include "debug_print.hpp"

// 入力データの型を定義する
struct TestCase {
    int h, w, q;
    vector<vector<int>> vv;
    vector<pair<pair<int, int>, pair<int, int>>> queries;
    
    auto tie() const { return std::tie(h, w, q, vv, queries); }
};

struct Result {
    vector<int> ans;

    auto tie() const { return std::tie(ans); }
};

inline bool operator == (const Result& a, const Result& b) {
    return a.tie() == b.tie();
}

// WAの時の入力データを出力する関数
void print_in(const TestCase& in) {
    cout << in << "\n";
}

// WAの時の出力データを出力する関数
void print_out(const Result& out) {
    cout << out << "\n";
}

// 入力データのランダム生成する関数
RandomGen gen;
TestCase random_case() {
    TestCase in;
    in.h = gen.ri(5, 10);
    in.w = gen.ri(5, 10);
    in.q = gen.ri(5, 10);

    in.vv = gen.random_array2d(in.h, in.w, 0, 10);
    in.queries = gen.random_array2d_pair(in.q, 0, in.h, 0, in.w);

    return in;
}
