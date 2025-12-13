// 配列aの累積和をとってそれを返す
// ps[r] - ps[l]でl以上ｒ未満(半開区間)までの総和がO(1)で求まる [l, r)

#pragma once
#include <vector>

template<class T>
std::vector<T> prefix_sum(const std::vector<T>& a) {
    int n = a.size();
    std::vector<T> ps(n + 1, 0);
    for (int i = 0; i < n; i++) ps[i + 1] = ps[i] + a[i];
    return ps;
}