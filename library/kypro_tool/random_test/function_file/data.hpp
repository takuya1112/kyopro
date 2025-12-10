#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "random_gen.hpp"

// 入力データの型を定義する
struct TestCase {
    int n;
    vector<long long> a, m;
};

// WAの時の入力データを出力する関数
void print_in(const TestCase& in) {
    for (int i = 0; i < (int)in.a.size(); i++) cout << in.a[i] << ' ' << in.m[i] << endl;
}

// WAの時の出力データを出力する関数
void print_out(const pair<long long, long long>& out) {
    auto [a, m] = out;
    cout << a << " " << m << endl;
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
    return in;
}
