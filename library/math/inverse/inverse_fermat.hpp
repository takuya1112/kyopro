// modinv(a, mod) の形で使用し
// フェルマーの小定理を使って逆元を計算する
// mod は素数でないといけない

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

long long modinv(long long a, long long mod) {
    return modpow(a, mod - 2, mod);
}