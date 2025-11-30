// imos_2d(H, W, operations)の形で使用し
// 長方形(x1, y1)、(x2, y2)の左上に+v ([x1][y1] += v)、
// 右上+1 に-v ([x1][y2 + 1] -= v), 左下+1 に -v ([x2 + 1][y1] -= v),
// 最後にマイナスの被ってる右下+1　に + v ([x2 + 1][y2 + 1] += v),
// することで長方形のそれぞれの区間の区間和が求まる
// 重みがないならtupleの５個目の要素に１を入れる

#pragma once
#include <vector>
#include <tuple>
template<class T>
std::vector<std::vector<T>> imos_2d(int H, int W, const std::vector<std::tuple<int, int, int, int, T>>& operations) {
    std::vector<std::vector<T>> imos(H + 1, std::vector<T>(W + 1, 0));
    
    for (auto &[x1, y1, x2, y2, v] : operations) {
        imos[x1][y1] += v;
        imos[x1][y2 + 1] -= v;
        imos[x2 + 1][y1] -= v;
        imos[x2 + 1][y2 + 1] += v;
    }

    for (int i = 0; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            imos[i][j] += imos[i][j - 1];
        }
    }

    for (int j = 0; j <= W; j++) {
        for (int i = 1; i <= H; i++) {
            imos[i][j] += imos[i - 1][j];
        }
    }

    imos.resize(H);
    for (auto &row : imos) row.resize(W);
    return imos;
}