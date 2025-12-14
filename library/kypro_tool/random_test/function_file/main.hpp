// 試したいコード

#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "data.hpp"

template <class T>
struct imos1d {
    int n;
    std::vector<T> imos;

    imos1d(const int& n_) : n(n_), imos(n + 1, 0) {}

    void add(const int& l, const int& r, const T& v) {
        imos[l] += v;
        imos[r + 1] -= v;
    }

    std::vector<T> build() {
        std::vector<T> res(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            res[i] += imos[i - 1];
        }
        return res;
    }
};


Result fast(const TestCase &tc) {
    Result out;
    int N = tc.n, M = tc.m, Q = tc.q;
    vector<tuple<int, int, int>> idx = tc.idx;
    imos1d<int> imos(N);
    for (int i = 0; i < M; i++) {
        auto [l, r, w] = idx[i];
        imos.add(l, r, w); 
    }
    out.ans = imos.build();
    return out;
}