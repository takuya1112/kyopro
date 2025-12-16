// lis(a) の形で使用し
// 最長増加部分列の長さを返す
// dpに入ってる値は実際のLISではない,長さだけ欲しいとに使う

#pragma once
#include <vector>
#include <algorithm>

template<class T>
int lis(const std::vector<T>& a) {
    std::vector<T>dp;
    dp.reserve(a.size());
    for (const T& x : a) {
        auto it = std::lower_bound(dp.begin(), dp.end(), x);
        if (it == dp.end()) dp.push_back(x);
        else *it = x;
    }
    return (int)dp.size();
}