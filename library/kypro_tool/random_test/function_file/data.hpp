#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "random_gen.hpp"

// 入力データの型を定義する

struct TestCase {
    int n, m;
    vector<Edge> edges;
};

// WAの時の入力データを出力する関数
void print_in(const TestCase& in) {
    cout << in.n << " " << in.m << endl;
}

// WAの時の出力データを出力する関数
void print_out(const long long& out) {
    cout << out << endl;
}

// 入力データのランダム生成する関数
RandomGen gen;
TestCase random_case() {
    TestCase in;
    in.n = gen.ri(1, 20);
    in.m = gen.ri(in.n, in.n * 2);
    in.edges = gen.random_mst(in.n, in.m, 1, 100);
    return in;
}
