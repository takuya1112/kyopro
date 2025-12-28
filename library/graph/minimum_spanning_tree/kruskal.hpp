#pragma once
#include "../union_find.hpp"
#include <vector>
#include <algorithm>

struct edge { 
    int u, v; 
    long long w;
    int idx;

    edge(int u, int v, long long w, int idx = -1) 
        : u(u), v(v), w(w), idx(idx) {}

    bool operator < (const edge& other) const {
        return w < other.w;
    }
};

long long kruskal(int n, std::vector<edge>& edges) {
    std::sort(edges.begin(), edges.end());
    dsu uf(n);
    long long res = 0;

    for (auto& e : edges) {
        if (!uf.same(e.u, e.v)) {
            uf.unite(e.u, e.v);
            res += e.w;
        }
    }
    return res;
}

std::pair<long long, std::vector<int>> 
kruskal_with_idx(int n, std::vector<edge>& edges) {
    std::sort(edges.begin(), edges.end());
    dsu uf(n);
    long long res = 0;
    std::vector<int> selected;
    selected.reserve(n - 1);

    for (auto& e : edges) {
        if (!uf.same(e.u, e.v)) {
            uf.unite(e.u, e.v);
            res += e.w;
            selected.push_back(e.idx);
        }
    }
    return {res, selected};
}

/** 
 * Kruskal's Algorithm (クラスカル法)
 * 
 * 最小全域木（Minimum Spanning Tree）を求めるアルゴリズム
 * 辺のコストの小さい順に見ていき閉路が出来なければ追加していく
 * 
 * 辺の数が少ない(疎なグラフ)場合に高速
 * 辺の数が多い(密なグラフ)場合ではprimの方が速い
 * 
 * Verified:
 * - https://judge.yosupo.jp/problem/minimum_spanning_tree
 * - https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/12/ALDS1_12_A
 * - https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/2/GRL_2_A
 * 
 * Operations:
 * - kruskal(n, edges) 最小全域木の重みの総和を返す O(E log E)
 * - kruskal_with_idx(n, edges) 最小全域木の重みの総和と辺のインデックスを返す O(E log E)
 * 　- 連結性チェックは selected.size() == n - 1 で判定可能
 * 
 * Time: O(E log E)
 * Space: O(V + E)
*/


//------------------------------//
// Usage Examples
//------------------------------//

// Example 1: Basic Usage
// int main() {
//     //     10 
//     //   0----1
//     //      / |
//     //   20/  |25
//     //    /   |    
//     //   3----2
//     //     10 
//     vector<edge> graph;
//     graph.push_back({0, 1, 10, 0});
//     graph.push_back({1, 2, 25, 1});
//     graph.push_back({1, 3, 20, 2});
//     graph.push_back({2, 3, 10, 3});

//     cout << kruskal(4, graph) << endl; // 40

//     auto [res, selected] = kruskal_with_idx(4, graph);
//     cout << res << endl; // 40
//     cout << selected << endl; // 0 3 2
// }

// Example 2: AOJ GRL_2_A
// https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/2/GRL_2_A
// struct edge { 
//     int u, v; 
//     long long w;
//     int idx;

//     edge(int u, int v, long long w, int idx = -1) 
//         : u(u), v(v), w(w), idx(idx) {}

//     bool operator < (const edge& other) const {
//         return w < other.w;
//     }
// };

// struct dsu {
//     std::vector<int> parent, rank;

//     dsu(int n) : parent(n), rank(n, 0) {
//         for (int i = 0; i < n; i++) parent[i] = i;
//     }

//     int find(int x) {
//         if (parent[x] == x) return x;
//         else return parent[x] = find(parent[x]);
//     }

//     void unite(int x, int y) {
//         x = find(x); 
//         y = find(y);
//         if (x == y) return;

//         if (rank[x] < rank[y]) {
//             parent[x] = y;
//         } else {
//             parent[y] = x;
//             if (rank[x] == rank[y]) rank[x]++;
//         }
//     }

//     bool same(int x, int y) {
//         return find(x) == find(y);
//     }
// };

// long long kruskal(int n, std::vector<edge>& edges) {
//     std::sort(edges.begin(), edges.end());
//     dsu uf(n);
//     long long res = 0;

//     for (auto& e : edges) {
//         if (!uf.same(e.u, e.v)) {
//             uf.unite(e.u, e.v);
//             res += e.w;
//         }
//     }
//     return res;
// }

// int main() {
//     int V, E;
//     cin >> V >> E;
//     vector<edge> A;
//     for (int i = 0; i < E; i++) {
//         int a, b, c;
//         cin >> a >> b >> c;
//         A.push_back({a, b, c});
//     }
//     cout << kruskal(V, A) << endl;
//     return 0;
// }