// prime_factorize(n) の形で使用し整数Nに対して素因数分解をする
// vector<pair>の形で{素因数, その指数}が返ってくる

#pragma once
#include <vector>

std::vector<std::pair<long long, long long>> prime_factorize(long long n) {
    std::vector<std::pair<long long, long long >> res;

    for (long long i = 2; i * i <= n; i++) {
        if (n % i != 0) continue;
        long long cnt = 0;
        while (n % i == 0) {
            n /= i;
            cnt++;
        }
        res.push_back({i, cnt});
    }

    if (n > 1) res.push_back({n, 1});
    return res;
} 