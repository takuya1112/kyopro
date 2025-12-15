// ナイーブ(愚直解法)のコード

#pragma once
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#include "data.hpp"

Result naive(const TestCase &tc) {
    Result out;
    int H = tc.H, W = tc.W, Q = tc.Q;
    vector<tuple<int, int, int, int, int>> idx = tc.idx;
    vector<vector<int>> ans(H + 1, vector<int>(W + 1, 0));
    for (auto& [x1, y1, x2, y2, w] : idx) {
        for (int i = x1+1; i <= x2; i++) {
            for (int j = y1+1; j <= y2; j++) {
                ans[i][j] += w;
            }
        }
    }
    out.ans = ans;
    return out;
}
