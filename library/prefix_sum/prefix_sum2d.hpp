// 2次元配列aの累積和をとってそれを返す
// 求めたい長方形領域の和がO(1)で求まる
// sum = S[x2][y2] - S[x1 - 1][y2] - S[x2][y1 - 1] + S[x1 - 1][y1 - 1]
//  (0,0)、(x2, y2)までの長方形の総和 - (0, 0)、(x1 - 1, y2)までの長方形の総和　
// -(0, 0)、(x2, y1 - 1)までの長方形の総和 + (0, 0)、(x1 - 1, y1 - 1) までの引きすぎた左上の長方形

#pragma once
#include <vector>

template<class T>
std::vector<std::vector<T>> prefix_sum2d(const std::vector<std::vector<T>>& a) {
    int H = a.size();
    int W = a[0].size();
    std::vector<std::vector<T>> ps(H + 1, std::vector<T>(W + 1, 0));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            ps[i + 1][j + 1] = a[i][j] + ps[i][j + 1] + ps[i + 1][j] - ps[i][j];
        }
    }
    return ps;
}