#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "random_gen.hpp"
#include "debug_print.hpp"

// 入力データの型を定義する
struct TestCase {
    int n, m, q;
    vector<tuple<int, int, int>> idx;
    
    auto tie() const { return std::tie(n, m, q, idx); }
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
    in.n = gen.ri(1, 10);
    in.m = gen.ri(1, 10);
    in.q = gen.ri(1, 10);

    in.idx = gen.random_array_tuple(in.m, 0, in.n, 100);
    return in;
}
