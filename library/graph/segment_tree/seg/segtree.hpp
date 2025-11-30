// int op(int a, int b) { return min(a, b); }
// int e() { return INF; }

// segtree<int, op, e> seg(v)の形で使用し
// dataを渡された配列で初期化して余分な所をeで初期化する
// またはsegtree<int, op, e> seg(n)の形で使用し
// dataの中身を全部eで初期化する

// 型に関してはint型だけじゃなくほかの型も使える
// opはmin, max, +, gcd, |, &, ^, など色々使える
// eは初期値でINF, -INF, 0などopの邪魔にならないやつを使う

// 完全並行二分木で区間のopをO(log n)で求められる
// seg.set(k, a) でidx ｋの要素をaに変える
// seg.query(a, b, k, l, r) で半開区間[a, b)の最小値を返す
// kは節点番号、l, rはその節点が[l, r) に対応してるのを示す((a, b)だけ入力すればいい)

#pragma once
#include <vector>
#include <climits>
#include <algorithm>
#include <numeric>

template <class T, T (*op)(T, T), T (*e)()>
struct segtree {
    int n;
    std::vector<T> data;

    segtree(int n_) { init(n_); }
    segtree(const std::vector<T>& v) { init(v.size()); build(v); }

    void init(int n_) {
        n = 1;
        while (n < n_) n <<= 1;
        data.assign(2 * n - 1, e());
    }

    void build (const std::vector<T>& v) {
        for (int i = 0; i < v.size(); i++) data[i + n - 1] = v[i];
        for (int i = n - 2; i >= 0; --i) data[i] = op(data[i * 2 + 1], data[i * 2 + 2]);
    }

    void set(int k, T a) {
        k += n - 1;
        data[k] = a;
        while (k > 0) {
            k = (k - 1) / 2;
            data[k] = op(data[k * 2 + 1], data[k * 2 + 2]);
        }
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