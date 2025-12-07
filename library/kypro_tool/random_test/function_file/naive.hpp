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
    vector<int> query = tc.queries;
    
    vector<int> ans;
    for (int i = 0; i < Q; i++) {
        int it = upper_bound(v.begin(), v.end(), query[i]) - v.begin();
        ans.push_back(v[it]);
    }
    return ans;
}
