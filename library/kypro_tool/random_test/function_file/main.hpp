// 試したいコード

#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "data.hpp"

template<class T>
struct prefix_sum {
    int n;
    std::vector<T> ps;

    prefix_sum(const std::vector<T>& a) {
        n = a.size();
        ps.assign(n + 1, 0);
        for (int i = 0; i < n; i++) ps[i + 1] = ps[i] + a[i];
    }

    T sum(int l, int r) {
        return ps[r] - ps[l];
    }
};



Result fast(const TestCase &tc) {
    Result out;
    int n = tc.n, Q = tc.q;
    vector<int> v = tc.v;
    prefix_sum ps(v);

    for (int i = 0; i < Q; i++) {
        auto [l, r] = tc.queries[i];
        out.ans.push_back(ps.sum(l, r));
    }
    return out;
}