// fenwick_tree bit(n)の形で使用し
// メイン側でadd(i, x)して初期化する
// sum(i)で半開区間[0, i)の区間和をO(long n)で求められて
// sum(l, r) で半開[l, r)の区間和も求められる

#pragma once
#include <vector>

template<class T>
struct fenwick_tree {
    int N;
    std::vector<T> bit;

    fenwick_tree(int n) {
        N = n;
        bit.assign(N + 1, 0);
    }

    void add(int i, T x) {
        i += 1;
        while (i <= N) {
            bit[i] += x;
            i += i & -i;
        }
    }

    T sum(int i) {
        T s = 0;
        while (i > 0) {
            s += bit[i];
            i -= i & -i;
        }
        return s;
    }

    T sum(int l, int r) {
        return sum(r) - sum(l);
    }
};