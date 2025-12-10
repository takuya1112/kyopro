// modinv(a, mod) の形で使用し
// 拡張ユークリッドの互除法を使って逆元を計算する

#pragma once
#include <utility>

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