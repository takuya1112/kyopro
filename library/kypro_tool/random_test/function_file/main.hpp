// 試したいコード

#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "data.hpp"

long long gcd_ll(long long a, long long b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}

long long modinv(long long a, long long mod) {
    long long b = mod, u = 1, v = 0;
    while (b) {
        long long t = a / b;
        a -= t * b; std::swap(a, b);
        u -= t * v; std::swap(u, v);
    } 
    u %= mod;
    if (u < 0) u += mod;
    return u;
}

std::pair<long long, long long> crt_merge(long long a1, long long m1,
                                    long long a2, long long m2) 
{ 
    long long g = gcd_ll(m1, m2);
    long long diff = a2 - a1;

    if (diff % g != 0) return {0, -1};

    long long m1_ = m1 / g;
    long long m2_ = m2 / g;

    long long t = (diff / g) % m2_;
    long long inv = modinv(m1_ % m2_, m2_);
    t = (t * inv) % m2_;

    long long r = a1 + m1 * t;
    long long mod = m1 * m2_;

    r = (r % mod + mod) % mod;
    return {r, mod};
}

std::pair<long long, long long> crt_(const std::vector<long long>& a, const std::vector<long long>& m) {
    long long r = 0, mod = 1;
    int n = a.size();
    for (int i = 0; i < n; i++) {
        auto res = crt_merge(r, mod, a[i], m[i]);
        if (res.second == -1) return {0, -1};
        r = res.first, mod = res.second;
    }
    return {r, mod + 1};
}

pair<long long, long long> fast(const TestCase &tc) {
    return crt_(tc.a, tc.m);
}