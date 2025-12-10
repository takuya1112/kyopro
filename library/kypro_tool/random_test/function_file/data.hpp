#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "random_gen.hpp"

// 入力データの型を定義する
struct TestCase {
    long long n;
    int q;
    vector<pair<int, long long>> queries;
};

// WAの時の入力データを出力する関数
void print_in(const TestCase& in) {
    cout << in.n << " " << in.q << endl;
    for (int i = 0; i < in.q; i++) {
        auto [op, v] = in.queries[i];
        cout << op << " " << v << endl;
    }
}

// WAの時の出力データを出力する関数
void print_out(const vector<long long>& out) {
    for (int i = 0; i < out.size(); i++) {
        cout << out[i] << ' ';
    } cout << endl;
}

// 入力データのランダム生成する関数
RandomGen gen;
TestCase random_case() {
    TestCase in;
    in.n = gen.rll(1, 10);
    in.q = gen.ri(1, 10);
    for (int i = 0; i < in.q; i++) {
        int op = gen.ri(0, 4);
        long long v = gen.rll(1, 10);
        in.queries.push_back({op, v});
    }
    return in;
}
