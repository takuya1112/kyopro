// ナイーブ(愚直解法)のコード

#pragma once
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#include "data.hpp"

long long MOD = 998244353;

long long modpow(long long a, long long n, long long mod) {
    long long res = 1;
    while (n) {
        if (n & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        n >>= 1;
    }
    return res;
}

long long modinv(long long a, long long mod) {
    return modpow(a, mod - 2, mod);
}

long long naive(const TestCase &tc) {
    long long x = tc.n;
    for (int i = 0; i < tc.q; i++) {
        auto [op, v] = tc.queries[i];
        if (op == 0) {
            x += v;
            x %= MOD;
        } else if (op == 1) {
            x -= v;
            if (x < 0) x += MOD;
        } else if (op == 2) {
            x *= v;
            x %= MOD;
        } else if (op == 3) {
            x *= modinv(v, MOD);
            x %= MOD;
        } else if (op == 4) {
            x = modpow(x, v, MOD);
        }
    }
    return x;
}
