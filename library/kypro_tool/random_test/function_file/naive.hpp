// ナイーブ(愚直解法)のコード

#pragma once
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#include "data.hpp"

const long long MOD = 11;

long long modpow(long long a, long long n, long long mod) {
    long long res = 1;
    while (n) {
        if (n & 1) res = (long long)((__int128)res * a % mod);
        a = (long long)((__int128)a * a % mod);
        n >>= 1;
    }
    return res;
}

long long modinv(long long a, long long mod) {
    return modpow(a, mod - 2, mod);
}

vector<long long> naive(const TestCase &tc) {
    long long x = tc.n;
    vector<long long> ans;
    for (int i = 0; i < tc.q; i++) {
        auto [op, v] = tc.queries[i];
        if (op == 0) {
            x += v;
            x %= MOD;
        } else if (op == 1) {
            x -= v;
            if (x < 0) x += MOD;
        } else if (op == 2) {
            x = (__int128)x * v % MOD;
        } else if (op == 3) {
            x *= modinv(v, MOD);
            x %= MOD;
        } else if (op == 4) {
            x = modpow(x, v, MOD);
        }
        ans.push_back(x);
    }
    return ans;
}
