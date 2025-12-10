// using mint = modint<998244353>;
// mint xで使用し
// 計算をmodで割った余りを返す
// フェルマーの小定理を使って逆元を計算しているのでmodは素数だけ

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

    modint inv() const {
        return pow(MOD - 2);
    }

    modint operator/(const modint& other) const {
        return *this * other.inv();
    }

    modint& operator+=(const modint& o) { return *this = *this + o; }
    modint& operator-=(const modint& o) { return *this = *this - o; }
    modint& operator*=(const modint& o) { return *this = *this * o; }
    modint& operator/=(const modint& o) { return *this = *this / o; }

    friend std::ostream& operator<<(std::ostream& os, const modint& m) {
        return os << m.v;
    }
};