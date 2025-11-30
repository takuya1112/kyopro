// rmq rq(v)の形で使用し
// 完全並行二分木で区間の最小値をO(log n)で求められる
// rq.update(k, a) でidx ｋの要素をaに変える
// rq.query(a, b, k, l, r) で半開区間[a, b)の最小値を返す
// kは節点番号、l, rはその節点が[l, r) に対応してるのを示す((a, b)だけ入力すればいい)

#pragma once
#include <vector>
#include <algorithm>
#include <climits>

struct rmq {
    int n;
    std::vector<int> data;

    rmq(const std::vector<int>& v) {
        int n_ = v.size();
        n = 1;
        while (n < n_) n <<= 1;
        data.assign(2 * n - 1, INT_MAX);

        for (int i = 0; i < n_; i++) data[i + n - 1] = v[i];
        for (int i = n - 2; i >= 0; --i) {
            data[i] = std::min(data[i * 2 + 1], data[i * 2 + 2]);
        }
    }

    void update(int k, int a) {
        k += n - 1;
        data[k] = a;
        while (k > 0) {
            k = (k - 1) / 2;
            data[k] = std::min(data[k * 2 + 1], data[k * 2 + 2]);
        }
    }

    int query(int a, int b, int k = 0, int l = 0, int r = -1) {
        if (r == -1) r = n;
        if (r <= a || b <= l) return INT_MAX;
        if (a <= l && r <= b) return data[k];
        int vl = query(a, b, k * 2 + 1, l, (l + r) / 2);
        int vr = query(a, b, k * 2 + 2, (l + r) / 2, r);
        return std::min(vl, vr);
    }
};