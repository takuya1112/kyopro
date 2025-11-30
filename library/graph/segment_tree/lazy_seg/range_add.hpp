// rsq rq(v)の形で使用し
// 完全並行二分木で区間の区間和をO(log n)で求められる
// rq.add(a, b, x, k, l, r) で半開区間[a, b)にそれぞれｘを足す
// rq.sum(a, b, k, l, r) で半開区間[a, b)の区間和を返す
// kは節点番号、l, rはその節点が[l, r) に対応してるのを示す((a, b)だけ入力すればいい)

#pragma once
#include <vector>

struct rsq {
    int n;
    std::vector<long long> data, lazy;

    rsq(const std::vector<int>& v) {
        int n_ = v.size();
        n = 1;
        while (n < n_) n <<= 1;
        data.assign(2 * n - 1, 0);
        lazy.assign(2 * n - 1, 0);

        for (int i = 0; i < n_; i++) data[i + n - 1] = v[i]; 
        for (int i = n - 2; i >= 0; --i) {
            data[i] = data[i * 2 + 1] + data[i * 2 + 2];
        }
    }

    void eval(int k, int l, int r) {
        if (lazy[k] != 0) {
            data[k] += lazy[k] * (r - l);
            if (r - l > 1) {
                lazy[2 * k + 1] += lazy[k];
                lazy[2 * k + 2] += lazy[k];
            } 
            lazy[k] = 0;
        }
    }

    void add(int a, int b, long long x, int k = 0, int l = 0, int r = -1) {
        if (r == -1) r = n;
        eval(k, l, r);

        if (r <= a || b <= l) return;
        if (a <= l && r <= b) {
            lazy[k] += x;
            eval(k, l, r);
            return;
        }
        add(a, b, x, k * 2 + 1, l, (l + r) / 2);
        add(a, b, x, k * 2 + 2, (l + r) / 2, r);
        data[k] = data[k * 2 + 1] + data[k * 2 + 2];
    }

    long long sum(int a, int b, int k = 0, int l = 0, int r = -1) {
        if (r == -1) r = n;
        eval(k, l, r);

        if (r <= a || b <= l) return 0;
        if (a <= l && r <= b) return data[k];

        long long vl = sum(a, b, k * 2 + 1, l, (l + r) / 2);
        long long vr = sum(a, b, k * 2 + 2, (l + r) / 2, r);
        return vl + vr;
    }
};