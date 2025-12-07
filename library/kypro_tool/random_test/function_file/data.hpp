#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "random_gen.hpp"

// 入力データの型を定義する
struct TestCase {
    int n, q;
    vector<int> v;
    vector<int> queries;
};

// WAの時の入力データを出力する関数
void print_in(const TestCase& in) {
    cout << in.n << " " << in.q << endl;
    cout << "v: ";
    for (int i = 0; i < in.n; i++) {
        cout << in.v[i] << ' ';
    } cout << endl;
    cout << "q: ";
    for (int i = 0; i < in.q; i++) {
        cout << in.queries[i] << ' ';
    } cout << endl;
}

// WAの時の出力データを出力する関数
void print_out(const vector<int>& out) {
    for (int i = 0; i < out.size(); i++) {
        cout << out[i] << ' ';
    } cout << endl;
}

// 入力データのランダム生成する関数
RandomGen gen;
TestCase random_case() {
    TestCase in;
    in.n = gen.ri(5, 20);
    in.q = gen.ri(1, 5);
    in.v = gen.random_array(in.n, 0, 50);
    sort(in.v.begin(), in.v.end());
    in.queries = gen.random_array(in.q, 0, 50);
    return in;
}
