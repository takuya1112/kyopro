#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "random_gen.hpp"

// 入力データの型を定義する
struct TestCase {
    long long n, k;
    int MOD = 1000000007;
};

// WAの時の入力データを出力する関数
void print_in(const TestCase& in) {
    cout << in.n << " " << in.k << endl;
}

// WAの時の出力データを出力する関数
void print_out(const long long& out) {
    cout << out << endl;
}

// 入力データのランダム生成する関数
RandomGen gen;
TestCase random_case() {
    TestCase in;
    in.n = gen.ri(0, 10);
    in.k = gen.ri(0, in.n);
    return in;
}
