// popcnt(x) の形で使用し
// 整数Nを2進数で表した時の1の個数を返す

#pragma once

int popcnt(int x) { return __builtin_popcount(x); }
int popcnt(unsigned int x) { return __builtin_popcount(x); }
int popcnt(long long x) { return __builtin_popcountll(x); }
int popcnt(unsigned long long x) { return __builtin_popcountll(x); }