// sigma_n(n)の形で使用し1~Nまでの総和をO(1)で計算する

#pragma once
long long sigma_n(long long n) {
    return n * (n + 1) / 2;
}