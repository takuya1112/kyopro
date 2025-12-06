// 試したいコード

#pragma once
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#include "data.hpp"


std::vector<int> sieve(int n) {
    std::vector<int> is_prime(n + 1, 1);
    is_prime[0] = is_prime[1] = 0;

    for (int i = 2; i * i <= n; i++) {
        if (!is_prime[i]) continue;
        for (int j = i * i; j <= n; j += i) {
            is_prime[j] = 0;
        }
    }
    return is_prime;
} 

bool fast(const TestCase &tc) {
    vector<int> a = sieve(tc.n);
    return a[tc.n];
}