// FastFactor ff(n) でまず初期化して
// ff.factor(x)でvector<pair>の形で{素因数,その指数}が返ってくる
// 最小素因数 SPF(smallest prime factor)

#pragma once
#include <vector>

struct FastFactor {
    int n;
    std::vector<int> spf;

    FastFactor(int n_) : n(n_), spf(n_ + 1) {
        build();
    } 

    void build() {
        for (int i = 0; i <= n; i++) spf[i] = i;

        for (int i = 2; i * i <= n; i++) {
            if (spf[i] != i) continue;
            for (int j = i * i; j <= n; j += i) {
                if (spf[j] == j) spf[j] = i;
            }
        }
    }

    std::vector<std::pair<int, int>> factor(int x) {
        std::vector<std::pair<int, int>> res;
        while (x > 1) {
            int p = spf[x];
            int cnt = 0;
            while (spf[x] == p) {
                x /= p;
                cnt++;
            }
            res.push_back({p, cnt});
        }
        return res;
    } 
};