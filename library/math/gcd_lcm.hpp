// gcd_ll(a, b)の形で使用しaとbの最大公約数を返す
// lcm_ll(a, b)の形で使用しaとbの最小公倍数を返す
// a * b の値は gcd(a, b) * lcm(a, b)と等しい
#pragma once

long long gcd_ll(long long a, long long b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}

long long lcm_ll(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
    return a / gcd_ll(a, b) * b;
}