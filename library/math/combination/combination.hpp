// nCkをO(k)で計算する

#pragma once
long long comb(long long n, long long k) {
    long long res = 1;
    for (long long i = 1; i <= k; i++) {
        res = res * (n - i + 1) / i;
    }
    return res;
}