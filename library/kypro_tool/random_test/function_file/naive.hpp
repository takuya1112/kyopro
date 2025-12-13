// ナイーブ(愚直解法)のコード

#pragma once
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#include "data.hpp"


Result naive(const TestCase &tc) {
    Result out;
    int N = tc.n, Q = tc.q;
    vector<int> v = tc.v;
    for (int i = 0; i < Q; i++) {
        auto [left, right] = tc.queries[i];
        int sum = 0;
        for (int l = left; l < right; l++) sum += v[l];
        out.ans.push_back(sum);
    }
    return out;
}
