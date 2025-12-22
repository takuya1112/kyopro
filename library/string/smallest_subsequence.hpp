// ss(S, N, K)の形で使用し
// 長さNの文字列Sから長さKの最小の部分列を返す

#pragma once
#include <vector>
#include <string>

std::vector<std::vector<int>> calc_next(const std::string &S) {
    int N = (int)S.size();

    std::vector<std::vector<int>> res(N + 1, std::vector<int>(26, N));

    for (int i = N - 1; i >= 0; i--) {
        for (int j = 0; j < 26; j++) res[i][j] = res[i + 1][j];
        res[i][S[i] - 'a'] = i;
    }
    return res;
}

std::string ss(const std::string& S, const int& N, const int& K) {
    std::string res = "";
    auto next = calc_next(S);

    int j = -1;
    for(int i = 0; i < K; i++) {
        for (char c = 'a'; c <= 'z'; c++) {
            int k = next[j + 1][c - 'a'];

            if (N - k >= K - i) {
                res += c;
                j = k;
                break;
            }
        }
    }
    return res;
}