#pragma once
#include <iostream>
#include <vector>

const int MOD = 1000000007;
struct mint {
    long long v;

    mint (long long v = 0) {
        if (v >= 0) this->v = v % MOD;
        else this->v = (v % MOD + MOD) % MOD;
    }

    mint operator+(const mint& other) const {
        long long r = v + other.v;
        if (r >= MOD) r -= MOD;
        return mint(r); 
    }

    mint operator-(const mint& other) const {
        long long r = v - other.v;
        if (r < 0) r += MOD;
        return mint(r);
    }

    mint operator*(const mint& other) const {
        return mint((__int128)v * other.v % MOD);
    }

    mint pow(long long n) const {
        if (n < 0) return inv().pow(-n);
        mint res = 1, a = *this;
        while (n) {
            if (n & 1) res *= a;
            a *= a;
            n >>= 1;
        }
        return res;
    }

    mint inv() const {
        return pow(MOD - 2);
    }

    mint operator/(const mint& other) const {
        return *this * other.inv();
    }

    mint& operator+=(const mint& o) { return *this = *this + o; }
    mint& operator-=(const mint& o) { return *this = *this - o; }
    mint& operator*=(const mint& o) { return *this = *this * o; }
    mint& operator/=(const mint& o) { return *this = *this / o; }

    friend std::ostream& operator<<(std::ostream& os, const mint& m) {
        return os << m.v;
    }
};

std::vector<mint> fact, inv_fact;

void init(int n) {
    fact.resize(n + 1);
    inv_fact.resize(n + 1);

    fact[0] = 1;
    for (int i = 1; i <= n; i++) fact[i] = fact[i - 1] * mint(i);

    inv_fact[n] = fact[n].inv();
    for (int i = n; i >= 1; i--) inv_fact[i - 1] = inv_fact[i] * mint(i);
}

mint comb(int n, int k) {
    if (k < 0 || k > n) return 0;
    return fact[n] * fact[k] * fact[n - k];
}