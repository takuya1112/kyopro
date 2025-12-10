// using mint = modint<998244353>;
// mint xで使用し
// 計算をmodで割った余りを返す
// 拡張ユークリッドの互除法を使って逆元を計算してるのでmodは素数でなくてもいい

#pragma once
#include <iostream>

template <long long MOD>
struct modint {
    long long v;

    modint (long long v = 0) {
        if (v >= 0) this->v = v % MOD;
        else this->v = (v % MOD + MOD) % MOD;
    }

    modint operator+(const modint& other) const {
        long long r = v + other.v;
        if (r >= MOD) r -= MOD;
        return modint(r); 
    }

    modint operator-(const modint& other) const {
        long long r = v - other.v;
        if (r < 0) r += MOD;
        return modint(r);
    }

    modint operator*(const modint& other) const {
        return modint((__int128)v * other.v % MOD);
    }

    static long long inv_ll(long long a) {
        long long b = MOD, u = 1, v = 0;
        while (b) {
            long long t = a / b;
            a -= t * b; std::swap(a, b);
            u -= t * v; std::swap(u, v);
        }
        u %= MOD;
        if (u < 0) u += MOD;
        return u;
    }

    modint inv() const {
        return modint(inv_ll(v));
    }

    modint operator/(const modint& other) const {
        return *this * other.inv();
    }

    modint pow(long long n) const {
        if (n < 0) return inv().pow(-n);
        modint res = 1, a = *this;
        while (n) {
            if (n & 1) res *= a;
            a *= a;
            n >>= 1;
        }
        return res;
    }

    modint& operator+=(const modint& o) { return *this = *this + o; }
    modint& operator-=(const modint& o) { return *this = *this - o; }
    modint& operator*=(const modint& o) { return *this = *this * o; }
    modint& operator/=(const modint& o) { return *this = *this / o; }

    friend std::ostream& operator<<(std::ostream& os, const modint& m) {
        return os << m.v;
    }
};