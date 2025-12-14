// 無向グラフの辺の数の最大は n * (n - 1) / 2
// 有行グラフの辺の数の最大は n * (n - 1)　
// これ以下でないと無限ループにはいる

#pragma once
#include <bits/stdc++.h>
using namespace std;

struct Edge { int u, v, w; auto tie() const { return std::tie(u, v, w); }};

struct RandomGen {
    // ランダム生成
    mt19937_64 rng;
    RandomGen() : rng(chrono::steady_clock::now().time_since_epoch().count()) {}

    // 基本
    long long rll(const long long& l, const long long& r) {
        uniform_int_distribution<long long> dist(l, r);
        return dist(rng);
    }

    int ri(const int& l, const int& r) {
        return (int)rll(l, r);
    }

    // 配列生成
    vector<long long> random_arrayll(const int& n, const long long& l, const long long& r) {
        vector<long long> v(n);
        for (auto& x : v) x = rll(l, r);
        return v;
    }

    vector<int> random_array(const int& n, const int& l, const int& r) {
        vector<int> v(n);
        for (auto& x : v) x = ri(l, r);
        return v;
    }

    vector<vector<int>> random_array2d(const int& h, const int& w, const int& l, const int& r) {
        vector<vector<int>> v(h, vector<int>(w));
        for (auto &x : v) for (auto &y : x) y = ri(l, r);
        return v;
    }

    vector<vector<long long>> random_array2dll(const int& h, const int& w, const int& l, const int& r) {
        vector<vector<long long>> v(h, vector<long long>(w));
        for (auto &x : v) for (auto &y : x) y = rll(l, r);
        return v;
    }

    vector<int> random_perm(const int& n) {
        vector<int> v(n);
        iota(v.begin(), v.end(), 1);
        shuffle(v.begin(), v.end(), rng);
        return v;
    }

    // 累積和
    vector<pair<int, int>> random_arry_pair(const int& n, const int& l, const int& r) {
        vector<pair<int, int>> v(n);
        for (auto& x : v) x = random_pair_int_strict(l, r);
        return v;
    }

    vector<pair<pair<int, int>, pair<int, int>>> random_array2d_pair(const int& n, const int& h, const int& w) {
        vector<pair<pair<int, int>, pair<int, int>>> v(n);
        pair<int, int> x, y;
        for (int i = 0; i < n; i++) {
            x = random_pair_int_strict(0, h);
            y = random_pair_int_strict(0, w);
            v[i] = {{x.first, y.first}, {x.second, y.second}};
        }
        return v;
    }

    vector<tuple<int, int, int>> random_array_tuple(const int& n, const int& l, const int& r, const int& w) {
        vector<tuple<int, int, int>> v(n);
        for (auto& x : v) x = random_tuple_int_strict(l, r, w);
        return v;
    }

    // ランダム文字列
    string random_string(const int& n, string chars = "abcdefghijklmnopqrstuvwxyz") {
        string s;
        for (int i = 0; i < n; i++) {
            s += chars[ri(0, chars.size() - 1)];
        }
        return s;
    }

    // ランダムペア 
    pair<int, int> random_pair_int(const int& l, const int& r) {
        int a = ri(l, r);
        int b = ri(l, r);
        return {a, b};
    }

    pair<int, int> random_pair_int_strict(const int& l, const int& r) {
        int a = ri(l, r - 1);
        int b = ri(a + 1, r);
        return {a, b};
    }

    // ランダム重み付きペア
    tuple<int, int, int> random_tuple_int_strict(const int&l, const int& r, const int& w) {
        int a = ri(l, r - 1);
        int b = ri(a + 1, r);
        int c = ri(0, w);
        return {a, b, c};
    }

    // ランダムグラフ
    vector<pair<int, int>> random_graph(const int& n, int& m) {
        if (m > n * (n - 1) / 2) m = n * (n - 1) / 2;
        set<pair<int, int>> st;
        while (st.size() < m) {
            int u = ri(0, n-1);
            int v = ri(0, n-1);

            if (u == v) continue;
            if (u > v) swap(u, v);
            st.insert({u, v});
        }
        return vector<pair<int, int>> (st.begin(), st.end());
    }

    vector<pair<int, int>> random_directed_graph(const int& n, int& m) {
        if (m > n * (n - 1)) m = n * (n - 1);
        set<pair<int, int>> st;
        while (st.size() < m) {
            int u = ri(0, n-1);
            int v = ri(0, n-1);

            if (u == v) continue;
            st.insert({u, v});
        }
        return vector<pair<int, int>> (st.begin(), st.end());
    }

    // ランダムDAG(有行非巡回グラフ)
    vector<pair<int, int>> random_dag(const int& n, int& m) {
        if (m > n * (n - 1) / 2) m = n * (n - 1) / 2;
        vector<int> order(n);
        iota(order.begin(), order.end(), 0);
        shuffle(order.begin(), order.end(), rng);

        set<pair<int, int>> st;
        while (st.size() < m) {
            int i = ri(0, n-1);
            int j = ri(0, n-1);
            if (i == j) continue;
            if (i > j) swap(i, j);

            int u = order[i];
            int v = order[j];
            st.insert({u, v});
        }
        return vector<pair<int, int>> (st.begin(), st.end());
    }

    vector<Edge> random_weighted_dag(const int& n, int& m, const int& low, const int& high) {
        if (m > n * (n - 1) / 2) m = n * (n - 1) / 2;
        vector<int> order(n);
        iota(order.begin(), order.end(), 0);
        shuffle(order.begin(), order.end(), rng);

        vector<Edge> e;
        set<pair<int, int>> st;
        while (st.size() < m) {
            int i = ri(0, n-1);
            int j = ri(0, n-1);
            if (i == j) continue;
            if (i > j) swap(i, j);

            int u = order[i];
            int v = order[j];
            if (st.count({u, v})) continue;
            
            int w = ri(low, high);
            st.insert({u, v});
            e.push_back({u, v, w});
        }
        return e;
    }

    // ランダム木
    vector<pair<int, int>> random_tree(const int& n) {
        vector<pair<int, int>> e;
        for (int i = 1; i < n; i++) {
            int p = ri(0, i-1);
            e.push_back({p, i}); 
        }
        shuffle(e.begin(), e.end(), rng);
        return e;
    }

    vector<Edge> random_weighted_tree(const int& n, const int& low, const int& high) {
        vector<Edge> e;
        for (int i = 1; i < n; i++) {
            int p = ri(0, i-1);
            int w = ri(low, high);
            e.push_back({p, i, w});
        }
        shuffle(e.begin(), e.end(), rng);
        return e;
    }

    // ランダム最小全域木
    vector<Edge> random_mst(const int& n, int& m, const int& low, const int& high) {
        if (m > n * (n - 1) / 2) m = n * (n - 1) / 2;
        vector<Edge> e;
        set<pair<int, int>> used;
        for (int i = 1; i < n; i++) {
            int p = ri(0, i-1);
            int w = ri(low, high);
            used.insert({p, i});
            e.push_back({p, i, w});
        }
        
        while (e.size() < m) {
            int u = ri(0, n - 1);
            int v = ri(0, n - 1);

            if (u == v) continue;
            if (u > v) swap(u, v);
            if (used.count({u, v})) continue;
            
            int w = ri(low, high);
            used.insert({u, v});
            e.push_back({u, v, w});
        }
        return e;
    }

    // ランダム重み付きグラフ
    vector<Edge> random_weighted_graph(const int& n, int& m, const int& low, const int& high) {
        if (m > n * (n - 1) / 2) m = n * (n - 1) / 2;
        vector<Edge> e;
        set<pair<int, int>> used;
        while (used.size() < m) {
            int u = ri(0, n-1);
            int v = ri(0, n-1);
            if (u > v) swap(u, v);
            if (u == v || used.count({u, v})) continue;
            int w = ri(low, high);
            used.insert({u, v});
            e.push_back({u, v, w});
        }
        return e;
    }

    vector<Edge> random_weighted_directed_graph(const int& n, int& m, const int& low, const int& high) {
        if (m > n * (n - 1)) m = n * (n - 1);
        vector<Edge> e;
        set<pair<int, int>> used;
        while (used.size() < m) {
            int u = ri(0, n-1);
            int v = ri(0, n-1);
            if (u == v || used.count({u, v})) continue;
            int w = ri(low, high);
            used.insert({u, v});
            e.push_back({u, v, w});
        }
        return e;
    }

    // ランダムグリッド(迷路)
    vector<vector<int>> random_grid_n(const int& h, const int& w, double block_prob = 0.3) {
        vector<vector<int>> g(h, vector<int> (w, 0));
        bernoulli_distribution dist(block_prob);
        for (int i = 0; i < h; i++) for (int j = 0; j < w; j++) {
            if (dist(rng)) g[i][j] = 1;
        }
        return g;
    }

    vector<string> random_gird_s(const int& h, const int& w, double block_prob = 0.3) {
        string dots(w, '.');
        vector<string> g(h, dots);
        bernoulli_distribution dist(block_prob);
        for (int i = 0; i < h; i++) for (int j = 0; j < w; j++) {
            if (dist(rng)) g[i][j] = '#';
        }
        g[0][0] = '.';
        return g;
    }
};