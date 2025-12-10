// ナイーブ(愚直解法)のコード

#pragma once
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#include "data.hpp"

#pragma once
#include <iostream>

template <long long MOD>
struct nmodint {
    long long v;

    nmodint (long long v = 0) {
        if (v >= 0) this->v = v % MOD;
        else this->v = (v % MOD + MOD) % MOD;
    }

    nmodint operator+(const nmodint& other) const {
        long long r = v + other.v;
        if (r >= MOD) r -= MOD;
        return nmodint(r); 
    }

    nmodint operator-(const nmodint& other) const {
        long long r = v - other.v;
        if (r < 0) r += MOD;
        return nmodint(r);
    }

    nmodint operator*(const nmodint& other) const {
        return nmodint((__int128)v * other.v % MOD);
    }

    nmodint pow(long long n) const {
        if (n < 0) return inv().pow(-n);
        nmodint res = 1, a = *this;
        while (n) {
            if (n & 1) res *= a;
            a *= a;
            n >>= 1;
        }
        return res;
    }

    nmodint inv() const {
        return pow(MOD - 2);
    }

    nmodint operator/(const nmodint& other) const {
        return *this * other.inv();
    }

    nmodint& operator+=(const nmodint& o) { return *this = *this + o; }
    nmodint& operator-=(const nmodint& o) { return *this = *this - o; }
    nmodint& operator*=(const nmodint& o) { return *this = *this * o; }
    nmodint& operator/=(const nmodint& o) { return *this = *this / o; }

    friend std::ostream& operator<<(std::ostream& os, const nmodint& m) {
        return os << m.v;
    }
};

using mt = nmodint<998244353>;

vector<long long> naive(const TestCase &tc) {
    mt x = tc.n;
    vector<long long> ans;
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
            x = x.pow(v);
        }
        ans.push_back(x.v);
    }
    return ans;
}
