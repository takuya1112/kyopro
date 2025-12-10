// ナイーブ(愚直解法)のコード

#pragma once
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#include "data.hpp"


using mint = modint998244353;

long long naive(const TestCase &tc) {
    mint x = tc.n;
    for (int i = 0; i < tc.q; i++) {
        auto [op, v] = tc.queries[i];
        if (op == 0) {
            x += v;
        } else if (op == 1) {
            x -= v;
        } else if (op == 2) {
            x *= v;
        } else if (op == 3) {
            x /= v;
        } else if (op == 4) {
            x.pow(v);
        }
    }
    long long l;
    return l;
}
