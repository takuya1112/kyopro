// rsq rq(v)の形で使用し
// 完全並行二分木で区間の区間和をO(log n)で求められる
// rq.update(a, b, x, k, l, r) で半開区間[a, b)をそれぞれｘに変える
// rq.query(a, b, k, l, r) で半開区間[a, b)の区間和を返す
// kは節点番号、l, rはその節点が[l, r) に対応してるのを示す((a, b)だけ入力すればいい)

#pragma once
#include <vector>

struct rsq {
    int n;
    std::vector<long long> data, lazy;
    std::vector<int> flag;

    rsq(const std::vector<int>& v) {
        int n_ = v.size();
        n = 1;
        while (n < n_) n <<= 1;
        data.assign(2 * n - 1, 0);
        lazy.assign(2 * n - 1, 0);
        flag.assign(2 * n - 1, 0);

        for (int i = 0; i < n_; i++) data[i + n - 1] = v[i]; 
        for (int i = n - 2; i >= 0; --i) {
            data[i] = data[i * 2 + 1] + data[i * 2 + 2];
        }
    }

    void apply(int k, long long x, int len) {
        data[k] = x * len;
        lazy[k] = x;
        flag[k] = 1;
    }

    void push(int k, int l, int r) {
        if (!flag[k]) return;
        int mid = (l + r) / 2;
        apply(k * 2 + 1, lazy[k], mid - l);
        apply(k * 2 + 2, lazy[k], r - mid);
        flag[k] = 0;
    }

    void update(int a, int b, long long x, int k = 0, int l = 0, int r = -1) {
        if (r == -1) r = n;
        if (r <= a || b <= l) return;
        if (a <= l && r <= b) {
            apply(k, x, r - l);
            return;
        }
        push(k, l, r);
        update(a, b, x, k * 2 + 1, l, (l + r) / 2);
        update(a, b, x, k * 2 + 2, (l + r) / 2, r);
        data[k] = data[k * 2 + 1] + data[k * 2 + 2];
    }

    long long query(int a, int b, int k = 0, int l = 0, int r = -1) {
        if (r == -1) r = n;
        if (r <= a || b <= l) return 0;
        if (a <= l && r <= b) return data[k];
        push(k, l, r);
        long long vl = query(a, b, k * 2 + 1, l, (l + r) / 2);
        long long vr = query(a, b, k * 2 + 2, (l + r) / 2, r);
        return vl + vr;
    }
};