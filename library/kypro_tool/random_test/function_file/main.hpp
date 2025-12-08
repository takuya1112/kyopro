// 試したいコード

#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "data.hpp"



template <
    class T, T (*op)(T, T), T (*e)(),
    class F, T (*mapping)(F, T), F(*composition)(F, F), F(*id)() 
>
struct mylazy_segtree {
    int n;
    std::vector<T> data;
    std::vector<F> lazy;
    std::vector<int> flag;

    mylazy_segtree(int n_) { init(n_); }
    mylazy_segtree(const std::vector<T>& v) { init(v.size()); build(v); }

    void init(int n_) {
        n = 1;
        while (n < n_) n <<= 1;
        data.assign(2 * n - 1, e());
        lazy.assign(2 * n - 1, id());
        flag.assign(2 * n - 1, 0);
    }

    void build (const std::vector<T>& v) {
        for (int i = 0; i < v.size(); i++) data[i + n - 1] = v[i];
        for (int i = n - 2; i >= 0; --i) data[i] = op(data[i * 2 + 1], data[i * 2 + 2]);
    }

    void push(int k, int l, int r) {
        if (!flag[k]) return;

        data[k] = mapping(lazy[k], data[k]);

        if (r - l > 1) {
            lazy[2 * k + 1] = composition(lazy[k], lazy[2 * k + 1]);
            lazy[2 * k + 2] = composition(lazy[k], lazy[2 * k + 2]);
            flag[2 * k + 1] = 1;
            flag[2 * k + 2] = 1;
        } 
        lazy[k] = id();
        flag[k] = 0;
    }

    void update(int a, int b, F f, int k = 0, int l = 0, int r = -1) {
        if (r == -1) r = n;
        push(k, l, r);

        if (r <= a || b <= l) return;
        if (a <= l && r <= b) {
            lazy[k] = composition(f, lazy[k]);
            flag[k] = 1;    
            push(k, l, r);
            return;
        }
        
        update(a, b, f, k * 2 + 1, l, (l + r) / 2);
        update(a, b, f, k * 2 + 2, (l + r) / 2, r);
        data[k] = op(data[k * 2 + 1], data[k * 2 + 2]);
    }

    T query(int a, int b, int k = 0, int l = 0, int r = -1) {
        if (r == -1) r = n;
        push(k, l, r);

        if (r <= a || b <= l) return e();
        if (a <= l && r <= b) return data[k];
        
        T vl = query(a, b, k * 2 + 1, l, (l + r) / 2);
        T vr = query(a, b, k * 2 + 2, (l + r) / 2, r);
        return op(vl, vr);
    }
};

struct T { long long mn; };
struct F { long long x; bool valid; };

T op(T a, T b) { return {std::min(a.mn, b.mn)}; }
T e() { return {LONG_LONG_MAX}; }

T mapping(F a, T b) {
    if (!a.valid) return b;
    return {a.x};
}
F composition(F a, F b) { 
    if (a.valid) return a;
    return b;
}
F id() { return {0, false}; }

using LazyMU = mylazy_segtree<T, op, e, F, mapping, composition, id>;


vector<int> fast(const TestCase &tc) {
    int N = tc.n, Q = tc.q;
    vector<int> test = tc.v;
    vector<Query> queries = tc.queries;

    vector<T> v;
    for (int i = 0; i < N; i++) {
        v.push_back({test[i]});
    }
    LazyMU lazy(v);

    vector<int> res;
    for (int i = 0; i < Q; i++) {
        Query q = queries[i];
        if (q.cmd == 0) {
            lazy.update(q.l, q.r, {q.x, true});
            cout << e << endl;
        } else {
            res.push_back(lazy.query(q.l, q.r).mn);
        }
    }
    return res;
}