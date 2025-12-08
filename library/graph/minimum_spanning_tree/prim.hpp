// prim(graph)の形で使用し
// 最小全域木問題(MST)を解く
// O((E + V) log V) 辺の数が多い(密なグラフ)場合に強い
// graphは無向グラフのように両方向に重み付きの辺を張る
// graph[v].pb({u, w}), graph[u].pb({v, w})

#pragma once
#include <vector>
#include <queue>

template <class T>
long long prim(const std::vector<std::vector<std::pair<int, T>>>& graph) {
    const long long INF = 4e18;

    int N = graph.size();
    std::vector<int> used(N, 0);

    int cnt = 0;
    long long res = 0;

    std::priority_queue<
        std::pair<long long, int>, 
        std::vector<std::pair<long long, int>>,
        std::greater<std::pair<long long, int>>
    > pq;

    for (auto [v, c] : graph[0]) pq.push({c, v});
    used[0] = 1;
    cnt++;

    while (cnt < N) {
        auto [c, v] = pq.top();
        pq.pop();

        if (used[v]) continue;

        used[v] = 1;
        cnt++;
        res += c;

        for (auto [u, d] : graph[v]) {
            if (used[u]) continue;
            pq.push({d, u});
        } 
    }
    return res;
}