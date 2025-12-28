#pragma once
#include <vector>
#include <queue>

struct edge { 
    int v; 
    long long w;
    int idx;

    edge(int v, long long w, int idx = -1) 
        :v(v), w(w), idx(idx) {}

    bool operator < (const edge& other) const {
        return w > other.w;
    }
};

long long prim(const std::vector<std::vector<edge>>& edges) {
    int N = edges.size();
    std::vector<int> used(N, 0);

    long long res = 0;

    std::priority_queue<edge> pq;

    for (const auto& e : edges[0]) pq.push(e);
    used[0] = true;
    int cnt = 1;

    while (!pq.empty() && cnt < N) {
        edge e = pq.top();
        pq.pop();

        if (used[e.v]) continue;

        used[e.v] = true;
        res += e.w;
        cnt++;

        for (const auto& nxt : edges[e.v]) {
            if (!used[nxt.v]) pq.push(nxt);
        } 
    }
    return res;
}

std::pair<long long, std::vector<int>> 
prim_with_idx(const std::vector<std::vector<edge>>& edges) {
    int N = edges.size();
    std::vector<int> used(N, 0);

    long long res = 0;
    std::vector<int> selected;
    selected.reserve(N - 1);

    std::priority_queue<edge> pq;

    for (const auto& e : edges[0]) pq.push(e);
    used[0] = true;
    int cnt = 1;

    while (!pq.empty() && cnt < N) {
        edge e = pq.top();
        pq.pop();

        if (used[e.v]) continue;

        used[e.v] = true;
        res += e.w;
        selected.push_back(e.idx);
        cnt++;

        for (const auto& nxt : edges[e.v]) {
            if (!used[nxt.v]) pq.push(nxt);
        } 
    }
    return {res, selected};
}


/** 
 * Prim's Algorithm (プリム法)
 * 
 * 最小全域木（Minimum Spanning Tree）を求めるアルゴリズム
 * 任意の頂点Vから始めて最小コストの辺を貪欲的に加えていき全域木を作る
 * 
 * 辺の数が多い(密なグラフ)場合に高速
 * 辺の数が少ない(疎なグラフ)場合ではkruskalの方が速い
 * 
 * Verified:
 * - https://judge.yosupo.jp/problem/minimum_spanning_tree
 * - https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/12/ALDS1_12_A
 * - https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/2/GRL_2_A
 * 
 * Operations:
 * - prim(edges) 最小全域木の重みの総和を返す O(E log V)
 * - prim_with_idx(edges) 最小全域木の重みの総和と辺のインデックスを返す O(E log V)
 *   - 連結性チェックは selected.size() == n - 1 で判定可能
 * 
 * Time: O(E log V)
 * Space: O(V + E)
*/


//------------------------------//
// Usage Examples
//------------------------------//

// Example 1: Basic Usage
// int main() {
//         10 
//       0----1
//          / |
//       20/  |25
//        /   |    
//       3----2
//         10 
//     vector<vector<edge>> graph(4);
//     graph[0] = {{1, 10, 0}};
//     graph[1] = {{0, 10, 0}, {2, 25, 1}, {3, 20, 2}};  
//     graph[2] = {{1, 25, 1}, {3, 10, 3}};
//     graph[3] = {{1, 20, 2}, {2, 10, 3}}; 
//     cout << prim(graph) << endl; // 40

//     auto [res, selected] = prim_with_idx(graph);
//     cout << res << endl; // 40
//     cout << selected[i] << endl; // 0 2 3
//     return 0;
// }

// Example 2: AOJ GRL_2_A
// https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/2/GRL_2_A
// struct edge { 
//     int v; 
//     long long w;
//     int idx;

//     edge(int v, long long w, int idx = -1) 
//         :v(v), w(w), idx(idx) {}

//     bool operator < (const edge& other) const {
//         return w > other.w;
//     }
// };

// long long prim(const std::vector<std::vector<edge>>& edges) {
//     int N = edges.size();
//     std::vector<int> used(N, 0);

//     long long res = 0;

//     std::priority_queue<edge> pq;

//     for (const auto& e : edges[0]) pq.push(e);
//     used[0] = true;
//     int cnt = 1;

//     while (!pq.empty() && cnt < N) {
//         edge e = pq.top();
//         pq.pop();

//         if (used[e.v]) continue;

//         used[e.v] = true;
//         res += e.w;
//         cnt++;

//         for (const auto& nxt : edges[e.v]) {
//             if (!used[nxt.v]) pq.push(nxt);
//         } 
//     }
//     return res;
// }

// int main() {
//     int V, E;
//     cin >> V >> E;
//     vector<vector<edge>> A(V);
//     for (int i = 0; i < E; i++) {
//         int a, b, c;
//         cin >> a >> b >> c;
//         A[a].push_back({b, c});
//         A[b].push_back({a, c});
//     }
//     cout << prim(A) << endl;
//     return 0;
// }