// bsf(x)の形で使用し
// 2進数で見たとき1番下にある,1の位置を返す

#pragma once

int bsf(int x) { return __builtin_ctz(x); }
int bsf(unsigned int x) { return __builtin_ctz(x); }
int bsf(long long x) { return __builtin_ctzll(x); }
int bsf(unsigned long long x) { return __builtin_ctzll(x); }