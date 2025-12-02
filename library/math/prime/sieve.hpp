// sieve(n) の形で使用し1~nまでの素数を判定する(エラトステネスのふるい)

#pragma once
#include <vector>

std::vector<int> sieve(int n) {
    std::vector<int> is_prime(n + 1, 1);
    is_prime[0] = is_prime[1] = 0;

    for (int i = 2; i * i <= n; i++) {
        if (!is_prime[i]) continue;
        for (int j = i * i; j <= n; j += i) {
            is_prime[j] = 0;
        }
    }
    return is_prime;
} 
