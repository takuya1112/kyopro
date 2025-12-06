#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "random_gen.hpp"

// 入力データの型を定義する
struct TestCase {
    int n;
};

// WAの時の入力データを出力する関数
void print_in(const TestCase& in) {
    cout << in.n << endl;
}

// WAの時の出力データを出力する関数
void print_out(const bool& out) {
    if (out) cout << 1 << endl;
    else cout << 0 << endl;
}

// 入力データのランダム生成する関数
RandomGen gen;
TestCase random_case() {
    TestCase in;
    in.n = gen.ri(0, 20);
    return in;
}
