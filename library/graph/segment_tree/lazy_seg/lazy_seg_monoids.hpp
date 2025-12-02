// 使う場所に合わせて型を変えて使用してください

#pragma once
#include "lazy_segtree.hpp"
#include <climits>
#include <algorithm>
#include <numeric>


// RSQ + RAQ 区間和 + 区間加算
// 最初初期化でvector<T>の値を渡すとき葉のサイズを上に持って行くためにa[i].size = 1にして渡す
// struct T { long long sum; int size; };
// struct F { long long add; };

// T op(T a, T b) { return {a.sum + b.sum, a.size + b.size}; }
// T e() { return {0, 0}; }

// T mapping(F a, T b) { return {b.sum + a.add * b.size, b.size}; }
// F composition(F a, F b) { return {a.add + b.add}; }
// F id() { return {0}; }

// using LazySA = lazy_segtree<T, op, e, F, mapping, composition, id>;


// RMQ + RUQ 区間最小値 + 区間更新
// 更新でFを渡すときvalidをtrueにする
// struct T { long long mn; };
// struct F { long long x; bool valid; };

// T op(T a, T b) { return {std::min(a.mn, b.mn)}; }
// T e() { return {LONG_LONG_MAX}; }

// T mapping(F a, T b) {
//     if (!a.valid) return b;
//     return {a.x};
// }
// F composition(F a, F b) { 
//     if (a.valid) return a;
//     return b;
// }
// F id() { return {0, false}; }

// using LazyMU = lazy_segtree<T, op, e, F, mapping, composition, id>;


// RSQ + RUQ 区間和 + 区間更新
// struct T { long long sum; int size; };
// struct F { long long x; bool valid; };

// T op(T a, T b) { return {a.sum + b.sum, a.size + b.size}; }
// T e() { return {0, 0}; }

// T mapping(F a, T b) {
//     if (!a.valid) return b;
//     return {a.x * b.size, b.size};
// }
// F composition(F a, F b) {
//     if (a.valid) return a;
//     return b;
// }
// F id() { return {0, false}; }

// using LazySU = lazy_segtree<T, op, e, F, mapping, composition, id>;


// RMQ + RAQ 区間最大 + 区間加算
struct T { long long mx; };
struct F { long long add; };

T op(T a, T b) { return {std::max(a.mx, b.mx)}; }
T e() { return {LONG_LONG_MIN}; }

T mapping(F a, T b) { return {b.mx + a.add}; }
F composition(F a, F b) { return {a.add + b.add}; }
F id() { return {0}; }

using LazyMA = lazy_segtree<T, op, e, F, mapping, composition, id>;