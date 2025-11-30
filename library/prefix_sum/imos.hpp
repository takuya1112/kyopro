// imos_1d(n, operations)の形で使用し
// lに+v,r+1に-v, することでそれぞれの区間の区間和が求まる
// 重みがないならtupleの３個目要に１を入れる

#pragma once
#include <vector>
#include <tuple>
template<class T>
std::vector<T> imos_1d(int n, const std::vector<std::tuple<int, int, T>>& operations) {
    std::vector<T> imos(n + 1, 0);
    
    for (auto &[l, r, v] : operations) {
        imos[l] += v;
        imos[r + 1] -= v;
    }

    for (int i = 1; i <= n; i++) {
        imos[i] += imos[i - 1];
    }

    imos.pop_back();
    return imos;
}