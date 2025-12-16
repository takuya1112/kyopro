// rle(a)の形で使用し
// ランレングス圧縮をしてその結果を返す

#pragma once
#include <vector>
#include <string>

template <class T>
std::vector<std::pair<T, long long>> rle(const std::vector<T>& a) {
    std::vector<std::pair<T, long long>> res;

    for (const T& c : a) {
        if (res.size() && res.back().first == c) res.back().second++;
        else res.emplace_back(c, 1);
    }

    return res;
}

std::vector<std::pair<char, long long>> rle(const std::string& s) {
    return rle(std::vector<char>(s.begin(), s.end()));
}