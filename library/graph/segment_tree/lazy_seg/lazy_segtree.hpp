// struct T { long long sum; int size; };
// struct F { long long add; };

// T op(T a, T b) { return T{a.sum + b.sum, a.size + b.size}; }
// T e() { return T{0, 0}; }
// T mapping(F a, T b) { return T{b.sum + a.add * b.size, b.size};}
// F composition(F a, F b) { return F{a.add + b.add}; }
// F id() {return F{0};}

// lazy_segtree<T, op, e, F, mapping, composition, id> seg(a);　の形で使用し
// dataを渡された配列で初期化して余分な所をeでlazyの中身を全部id、flagを全部0で初期化する
// またはlazy_segtree<T, op, e, F, mapping, composition, id> seg(n); の形で使用し
// dataの中身を全部e、lazyの中身を全部id、flagを全部0で初期化する

// 汎用型なのでいろんな型を使える、
// op マージ、e 単位元、mapping 遅延作用、composition 遅延の合成、id 遅延の単位元
// これに合うように型を変えて使用してください

// 完全並行二分木で区間のopをO(log n)で求められる
// seg.update(a, b, f, k, l, r)で半開区間[a, b)にｆを足したり代入したりする
// seg.query(a, b, k, l, r) で半開区間[a, b)のopを返す
// kは節点番号、l, rはその節点が[l, r) に対応してるのを示す((a, b)だけ入力すればいい)

#pragma once
#include <vector>
#include <climits>
#include <algorithm>
#include <numeric>

template <
    class T, T (*op)(T, T), T (*e)(),
    class F, T (*mapping)(F, T), F(*composition)(F, F), F(*id)() 
>
struct lazy_segtree {
    int n;
    std::vector<T> data;
    std::vector<F> lazy;
    std::vector<int> flag;

    lazy_segtree(int n_) { init(n_); }
    lazy_segtree(const std::vector<T>& v) { init(v.size()); build(v); }

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