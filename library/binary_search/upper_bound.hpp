// upper_bound_idx(a, x)の形で使用し
// return right でｘより大きい値が現れる最初の位置を返す
// aはソートしてある配列のみ使用可能

#pragma once
#include <vector>
#include <cmath>

template<class T>
int upper_bound_idx(const std::vector<T>& a, T x) {
    int left = -1, right = (int)a.size();
    while (abs(right - left) > 1) {
        int mid = (left + right) / 2;
        if (a[mid] <= x) left = mid;
        else right = mid;
    }
    return right;
}