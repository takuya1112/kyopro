// 試したいコード

#pragma once
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#include "data.hpp"


template<class T>
int upper_bound_idx(const std::vector<T>& a, T x) {
    int left = -1, right = (int)a.size();
    while (abs(right - left) > 1) {
        int mid = (left + right) / 2;
        if (a[mid] <= x) left = mid;
        else right = mid;
    }
    return right;
}


vector<int> fast(const TestCase &tc) {
    int N = tc.n, Q = tc.q;
    vector<int> v = tc.v;
    vector<int> query = tc.queries;

    vector<int> ans;
    for (int qi = 0; qi < Q; qi++) {
        ans.push_back(v[upper_bound_idx(v, query[qi])]);
    }
    return ans;
}