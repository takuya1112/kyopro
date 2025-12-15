// imos1d<int> imos(n)の形で初期化し
// imos.add(l, r, w) 半開区間[l, r)に+wをする
// imos.build() で累積和を返す
// l に+ w, r に- wして累積和をとることで半開区間[l, r)への区間加算の総和を高速に求める

#pragma once
#include <vector>

template <class T>
struct imos1d {
    int n;
    std::vector<T> imos;

    imos1d(const int& n_) : n(n_), imos(n + 1, 0) {}

    void add(const int& l, const int& r, const T& w) {
        imos[l] += w;
        imos[r] -= w;
    }

    std::vector<T> build() {
        std::vector<T> ps(n + 1, 0);
        T cur = T{};
        for (int i = 0; i < n; i++) {
            cur += imos[i];
            ps[i] = cur;
        }
        return ps;
    }
};