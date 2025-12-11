// ナイーブ(愚直解法)のコード

#pragma once
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#include "data.hpp"

long long gcd_(long long a, long long b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}

long long lcm_(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
    return a / gcd_(a, b) * b;
}


pair<long long, long long> solve(long long a1, long long m1,
                                    long long a2, long long m2) 
{
    long long start = a1;

    long long lcm = lcm_(m1, m2);

    for (long long x = start; x < start + lcm; x++) {
        if (x % m1 == a1 % m1 && x % m2 == a2 % m2) {
            return {x, lcm};
        }
    }
    return {0LL, -1LL};
}

std::pair<long long, long long> sol(const std::vector<long long>& a, const std::vector<long long>& m) {
    long long r = 0, mod = 1;
    int n = a.size();
    for (int i = 0; i < n; i++) {
        auto res = solve(r, mod, a[i], m[i]);
        if (res.second == -1) return {0, -1};
        r = res.first, mod = res.second;
    }
    return {r, mod};
}

Output naive(const TestCase &tc) {
    Output out;
    out.p = sol(tc.a, tc.m);
    return out;
}
