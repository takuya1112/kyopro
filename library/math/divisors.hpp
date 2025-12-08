// divisors(n) の形で使用し
// 整数Nの約数を全列挙する

#pragma once
#include <vector>
#include <algorithm>

std::vector<long long> divisors(long long n) {
    std::vector<long long> ds;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ds.push_back(i);
            if (i * i != n) ds.push_back(n / i);
        }
    }
    sort(ds.begin(), ds.end());
    return ds;
}