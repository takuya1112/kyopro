// 使う場所に合わせて型を変えて使用してください

#pragma once
#include "segtree.hpp"
#include <climits>
#include <algorithm>
#include <numeric>

// RMQ Range_Minimum_Query
int op_min(int a, int b) { return std::min(a, b); }
int e_min() { return INT_MAX; }

using SegRMQ = segtree<int, op_min, e_min>;

// RMQ Range_Maximum_Query
int op_max(int a, int b) { return std::max(a, b); }
int e_max() { return INT_MIN; }

using SegRMax = segtree<int, op_max, e_max>;

// RSQ Range_Sum_Query
long long op_sum(long long a, long long b) { return a + b; }
long long e_sum() { return 0LL; }

using SegRSQ = segtree<long long, op_sum, e_sum>;

// GCD
int op_gcd(int a, int b) { return std::gcd(a, b); }
int e_gcd() { return 0; }

using SegGCD = segtree<int, op_gcd, e_gcd>;

// OR
int op_or(int a, int b) { return a | b; }
int e_or() { return 0; }

using SegOR = segtree<int, op_or, e_or>;

// AND
int op_and(int a, int b) { return a & b; }
int e_and() { return 0; }

using SegAND = segtree<int, op_and, e_and>;

// XOR
int op_xor(int a, int b) { return a ^ b; }
int e_xor() { return 0; }

using SegXOR = segtree<int, op_xor, e_xor>;

