// ナイーブ(愚直解法)のコード

#pragma once
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#include "data.hpp"


vector<int> naive(const TestCase &tc) {
    int N = tc.n, Q = tc.q;
    vector<int> v = tc.v;
    vector<Query> queries = tc.queries;

    vector<int> res;
    for (int qi = 0; qi < Q; qi++) {
        Query q = queries[qi];
        if (q.cmd == 0) {
            for (int l = q.l; l < q.r; l++) {
                v[l] = q.x;
            }
        } else {
            int ans = 1e9;
            for (int l = q.l; l < q.r; l++) {
                ans = min(ans, v[l]);
            }
            if (ans == 1e9) res.push_back(-1);
            else res.push_back(ans);
        }
    }
    return res;
}
