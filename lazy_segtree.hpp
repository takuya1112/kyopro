

#pragma once
#include <vector>
#include <algorithm>
#include <iostream>

template <
    class T, T (*op)(T, T), T (*e)(),
    class F, T (*mapping)(F, T), F(*composition)(F, F), F(*id)() 
>
struct lazy_segtree {
    int n;
    std::vector<T> data;
    std::vector<F> lazy;

    lazy_segtree(int n_) { init(n_); }
    lazy_segtree(const std::vector<T>& v) { init(v.size()); build(v); }

    void init(int n_) {
        n = 1;
        while (n < n_) n <<= 1;
        data.assign(2 * n - 1, e());
        lazy.assign(2 * n - 1, id());
    }

    void build (const std::vector<T>& v) {
        for (int i = 0; i < v.size(); i++) data[i + n - 1] = v[i];
        for (int i = n - 2; i >= 0; --i) data[i] = op(data[i * 2 + 1], data[i * 2 + 2]);
    }

    void push(int k, int l, int r) {
        if (lazy[k] == id()) return;

        data[k] = mapping(lazy[k], data[k]);

        if (r - l > 1) {
            lazy[2 * k + 1] = composition(lazy[k], lazy[2 * k + 1]);
            lazy[2 * k + 2] = composition(lazy[k], lazy[2 * k + 2]);
        } 
        lazy[k] = id();
    }

    void update(int a, int b, F f, int k = 0, int l = 0, int r = -1) {
        if (r == -1) r = n;
        push(k, l, r);

        if (r <= a || b <= l) return;
        if (a <= l && r <= b) {
            lazy[k] = composition(f, lazy[k]);
            push(k, l, r);
            return;
        }
        update(a, b, f, k * 2 + 1, l, (l + r) / 2);
        update(a, b, f, k * 2 + 2, (l + r) / 2, r);
        data[k] = op(data[k * 2 + 1], data[k * 2 + 2]);
    }

    T query(int a, int b, int k = 0, int l = 0, int r = -1) {
        if (r == -1) r = n;
        if (r <= a || b <= l) return e();
        if (a <= l && r <= b) return data[k];
        T vl = query(a, b, k * 2 + 1, l, (l + r) / 2);
        T vr = query(a, b, k * 2 + 2, (l + r) / 2, r);
        return op(vl, vr);
    }
};