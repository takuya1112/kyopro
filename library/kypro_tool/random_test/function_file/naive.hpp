// ナイーブ(愚直解法)のコード

#pragma once
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#include "data.hpp"

#pragma once
#include <iostream>


long long comb(long long n, long long k, int mod) {
    long long res = 1;
    for (long long i = 1; i <= k; i++) {
        res = (res * (n - i + 1) / i) % MOD;
    }
    return res;
}

long long naive(const TestCase &tc) {
    long long ans = comb(tc.n, tc.k, tc.MOD);
    return ans;
}
