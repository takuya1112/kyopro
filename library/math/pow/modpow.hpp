// (long long) a**n乗 % mod をO(log n)で返す

#pragma once
long long modpow(long long a, long long n, long long mod) {
    long long res = 1;
    while (n) {
        if (n & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        n >>= 1;
    }
    return res;
}