// lower_bound_idx(a, x)の形で使用し
// return right でｘ以上が現れる最初の位置を返す
// aはソートしてある配列のみ使用可能

#pragma once
#include <vector>

template<class T>
int lower_bound_idx(const std::vector<T>& a, T x) {
    int left = 0, right = a.size();
    while (right - left > 1) {
        int mid = (left + right) / 2;
        if (a[mid] < x) left = mid;
        else right = mid;
    }
    return right;
}