// 試したいコード

#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "data.hpp"


template <long long MOD>
struct mymodint {
    long long v;

    mymodint (long long v = 0) {
        if (v >= 0) this->v = v % MOD;
        else this->v = (v % MOD + MOD) % MOD;
    }

    mymodint operator+(const mymodint& other) const {
        long long r = v + other.v;
        if (r >= MOD) r -= MOD;
        return mymodint(r); 
    }

    mymodint operator-(const mymodint& other) const {
        long long r = v - other.v;
        if (r < 0) r += MOD;
        return mymodint(r);
    }

    mymodint operator*(const mymodint& other) const {
        return mymodint(v * other.v % MOD);
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

    mymodint inv() const {
        return mymodint(inv_ll(v));
    }

    mymodint operator/(const mymodint& other) const {
        return *this * other.inv();
    }

    mymodint pow(long long n) const {
        if (n < 0) return inv().pow(-n);
        mymodint res = 1, a = *this;
        while (n) {
            if (n & 1) res = res * a;
            a = a * a;
            n >>= 1;
        }
        return res;
    }

    mymodint& operator+=(const mymodint& o) { return *this = *this + o; }
    mymodint& operator-=(const mymodint& o) { return *this = *this - o; }
    mymodint& operator*=(const mymodint& o) { return *this = *this * o; }
    mymodint& operator/=(const mymodint& o) { return *this = *this / o; }

    friend std::ostream& operator<<(std::ostream& os, const mymodint& m) {
        return os << m.v;
    }
};

using mint = mymodint<998244353>;

long long fast(const TestCase &tc) {
    mint x = tc.n;
    for (int i = 0; i < tc.q; i++) {
        auto [op, v] = tc.queries[i];
        if (op == 0) {
            x += v;
        } else if (op == 1) {
            x -= v;
        } else if (op == 2) {
            x *= v;
        } else if (op == 3) {
            x /= v;
        } else if (op == 4) {
            x.pow(v);
        }
    }
    long long l = x.v;
    return l;
}