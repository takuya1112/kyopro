#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "random_gen.hpp"
#include "debug_print.hpp"

// 入力データの型を定義する
struct TestCase {
    int n, m;
    vector<Edge> graph;

    auto tie() const { return std::tie(n, m, graph); }
};

struct Result {
    long long res;

    auto tie() const { return res; }
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
    in.n = gen.ri(2, 10);
    in.m = gen.ri(in.n - 1, in.n * (in.n - 1) / 2);
    in.graph = gen.random_mst(in.n, in.m, 10, 100);
    return in;
}
