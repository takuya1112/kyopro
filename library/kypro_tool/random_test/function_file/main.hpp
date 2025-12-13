// 試したいコード

#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "data.hpp"


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

Result fast(const TestCase &tc) {
    Result out;
    int H = tc.h, W = tc.w, Q = tc.q;
    vector<vector<int>> vv = tc.vv;
    vector<vector<int>> ps = prefix_sum2d(vv);

    for (int i = 0; i < Q; i++) {
        auto [idx1, idx2] = tc.queries[i];
        auto [x1, y1] = idx1;
        auto [x2, y2] = idx2;
        x1++; y1++; x2++; y2++;
        cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
        cout << ps[x1][y1] << " " << ps[x2][y2] << endl;
        int sum = ps[x2][y2] - ps[x1 - 1][y2] - ps[x2][y1 - 1] + ps[x1 - 1][y1 - 1];
        out.ans.push_back(sum);
    }
    return out;
}