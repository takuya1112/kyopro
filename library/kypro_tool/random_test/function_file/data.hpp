#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "random_gen.hpp"

// 入力データの型を定義する

struct Query {
    int cmd, l, r, x;
};

struct TestCase {
    int n, q;
    vector<int> v;
    vector<Query> queries;
};

// WAの時の入力データを出力する関数
void print_in(const TestCase& in) {
    int N = in.n, Q = in.q;
    vector<int> v = in.v;
    vector<Query> queries = in.queries;

    cout << N << ' ' << Q << endl;
    for (int i = 0; i < N; i++) cout << v[i] << ' ';
    cout << endl;

    for (int i = 0; i < Q; i++) {
        int cmd = queries[i].cmd;
        if (cmd == 0) {
            cout << cmd << ": " << queries[i].l << " " << queries[i].r << " " << queries[i].x << endl;
        } else {
            cout << cmd << ": " << queries[i].l << " " << queries[i].r << endl;
        }
    }
}

// WAの時の出力データを出力する関数
void print_out(const vector<int>& out) {
    for (int i = 0; i < (int)out.size(); i++) {
        cout << out[i] << " ";
    } cout << endl;
}

// 入力データのランダム生成する関数
RandomGen gen;
TestCase random_case() {
    TestCase in;
    in.n = gen.ri(1, 10);
    in.q = gen.ri(1, 10);
    in.v = gen.random_array(in.n, 0, 100);

    for (int i = 0; i < in.q; i++) {
        Query q;
        q.cmd = gen.ri(0, 1);
        if (q.cmd == 0) { 
            q.l = gen.ri(0, in.n);
            q.r = gen.ri(q.l, in.n);
            q.x = gen.ri(0, 100);
        } else {
            q.l = gen.ri(0, in.n);
            q.r = gen.ri(q.l, in.n);
        }
        in.queries.push_back(q);
    }
    return in;
}
