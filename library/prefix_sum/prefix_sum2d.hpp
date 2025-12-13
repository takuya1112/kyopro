// prefix_sum2d ps(a)で初期化し
// ps.sum(x1, y1, x2, y2) で半開区間[x1, x2) * [y1, y2)の総和を求める

#pragma once
#include <vector>

template <class T>
struct prefix_sum2d {
    int H, W;
    std::vector<std::vector<T>> ps;

    prefix_sum2d(const std::vector<std::vector<T>>& a) {
        H = a.size();
        W = a[0].size();
        ps.assign(H + 1, std::vector<T>(W + 1, 0));
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                ps[i + 1][j + 1] = a[i][j] + ps[i][j + 1] + ps[i + 1][j] - ps[i][j];
            }
        }
    }

    T sum(int x1, int y1, int x2, int y2) {
        return ps[x2][y2] - ps[x1][y2] - ps[x2][y1] + ps[x1][y1];
    }
};
