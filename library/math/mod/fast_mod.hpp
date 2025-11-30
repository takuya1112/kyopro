// (long long) a**n乗をO(log n)で返す

#pragma once
long long fast_mod(long long a, long long n) {
    long long res = 1;
    while (n) {
        if (n & 1) res *= a;
        a *= a;
        n >>= 1;
    }
    return res;
}