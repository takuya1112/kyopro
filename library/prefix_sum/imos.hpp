// imos_1d(n, operations)の形で使用し
// lに+v,r+1に-v, することでそれぞれの区間の区間和が求まる
// 重みがないならtupleの３個目要に１を入れる

#pragma once
#include <vector>

template <class T>
struct imos1d {
    int n;
    std::vector<T> imos;

    imos1d(const int& n_) : n(n_), imos(n + 1, 0) {}

    void add(const int& l, const int& r, const T& v) {
        imos[l] += v;
        imos[r + 1] -= v;
    }

    std::vector<T> build() {
        std::vector<T> res(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            res[i] += imos[i - 1];
        }
        return res;
    }
};