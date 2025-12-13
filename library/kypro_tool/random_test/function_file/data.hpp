#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "random_gen.hpp"
#include "debug_print.hpp"

// 入力データの型を定義する
struct TestCase {
    int n, q;
    vector<int> v;
    vector<pair<int, int>> queries;
    
    auto tie() const { return std::tie(n, q, v, queries); }
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
    in.n = gen.ri(100, 1000);
    in.q = gen.ri(100, 1000);

    in.v = gen.random_array(in.n, 0, 100);
    in.queries = gen.random_arry_pair(in.q, 0, in.n);
    return in;
}
