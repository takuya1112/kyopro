// 使う場所に合わせて型を変えて使用してください

#pragma once
#include "segtree.hpp"
#include <climits>
#include <algorithm>
#include <numeric>

// RMQ Range_Minimum_Query
// using S = int;
// S op_min(S a, S b) { return std::min(a, b); }
// S e_min() { return INT_MAX; }

// using SegRMQ = segtree<S, op_min, e_min>;

// RMQ Range_Maximum_Query
// using S = int;
// S op_max(S a, S b) { return std::max(a, b); }
// S e_max() { return INT_MIN; }

// using SegRMax = segtree<S, op_max, e_max>;

// RSQ Range_Sum_Query
// using S = long long;
// S op_sum(S a, S b) { return a + b; }
// S e_sum() { return 0LL; }

// using SegRSQ = segtree<S, op_sum, e_sum>;

// GCD
// using S = int;
// S op_gcd(S a, S b) { return std::gcd(a, b); }
// S e_gcd() { return 0; }

// using SegGCD = segtree<S, op_gcd, e_gcd>;

// OR
// using S = int;
// S op_or(S a, S b) { return a | b; }
// S e_or() { return 0; }

// using SegOR = segtree<S, op_or, e_or>;

// AND
// using S = int;
// S op_and(S a, S b) { return a & b; }
// S e_and() { return 0; }

// using SegAND = segtree<S, op_and, e_and>;

// XOR
// using S = int;
// S op_xor(S a, S b) { return a ^ b; }
// S e_xor() { return 0; }

// using SegXOR = segtree<S, op_xor, e_xor>;

