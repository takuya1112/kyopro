// prefix_sum ps(a)で初期化し
// ps.sum(l, r)で半開区間[l, r)の総和を求める

#pragma once
#include <vector>

template<class T>
struct prefix_sum {
    int n;
    std::vector<T> ps;

    prefix_sum(const std::vector<T>& a) {
        n = a.size();
        ps.assign(n + 1, 0);
        for (int i = 0; i < n; i++) ps[i + 1] = ps[i] + a[i];
    }

    T sum(int l, int r) {
        return ps[r] - ps[l];
    }
};
