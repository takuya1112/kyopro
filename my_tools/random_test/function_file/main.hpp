// 試したいコード

#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "./data.hpp"

template<class T>
struct imos2d {
    int H, W;
    std::vector<std::vector<T>> imos;
    
    imos2d (int h, int w) : H(h), W(w), imos(H + 1, std::vector<T>(W + 1, 0)) {}

    void add(int x1, int y1, int x2, int y2, T w) {
        imos[x1][y1] += w;
        imos[x1][y2] -= w;
        imos[x2][y1] -= w;
        imos[x2][y2] += w;
    }

    std::vector<std::vector<T>> build() {
        std::vector<std::vector<T>> ps(H + 1, std::vector<T>(W + 1, 0));
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                ps[i + 1][j + 1] = imos[i][j] + ps[i][j + 1] + ps[i + 1][j] - ps[i][j];
            }
        }
        return ps;
    }
};

Result fast(const TestCase &tc) {
    Result out;
    int H = tc.H, W = tc.W, Q = tc.Q;
    vector<tuple<int, int, int, int, int>> idx = tc.idx;

    imos2d<int> imos(H, W);
    for (auto& [x1, y1, x2, y2, w] : idx) {
        imos.add(x1, y1, x2, y2, w);
    }
    out.ans = imos.build();
    return out;
}