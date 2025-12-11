#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "random_gen.hpp"
#include "debug_print.hpp"

// 入力データの型を定義する
struct TestCase {
    int n;
    vector<long long> a, m;
    vector<vector<int>> v;

    auto tie() const { return std::tie(n, a, m, v); }
};

struct Output {
    pair<long long, long long> p;

    auto tie() const { return std::tie(p); }
};

inline bool operator == (const Output& a, const Output& b) {
    return a.tie() == b.tie();
}

// WAの時の入力データを出力する関数
void print_in(const TestCase& in) {
    cout << in << "\n";
}

// WAの時の出力データを出力する関数
void print_out(const Output& out) {
    cout << out << "\n";
}

// 入力データのランダム生成する関数
RandomGen gen;
TestCase random_case() {
    TestCase in;
    in.n = gen.ri(1, 10);
    for (int i = 0; i < in.n; i++) {
        long long a = gen.rll(1, 5);
        in.a.push_back(a);
        in.m.push_back(gen.rll(a, 10));
    }
    in.v = gen.random_array2d(5, 5, 0, 10);
    return in;
}
