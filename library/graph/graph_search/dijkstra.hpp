// dijkstra(N, s, graph)の形で使用し
// 重み付き(非負整数)グラフで,頂点ｓからの各頂点への最小コストを求める
// graphのpairは＜idx, cost＞で入れる
// dist[i] == INF(4e18)だった場合はsからiへは到達不可能
// dist[i] != INFだったら場合はsからiへの最小コスト

#pragma once
#include <vector>
#include <queue>

template <class T>
std::vector<long long> dijkstra(int s, const std::vector<std::vector<std::pair<int, T>>>& graph) {
    const long long INF = 4e18;

    int N = graph.size();
    std::vector<long long> dist(N, INF);
    dist[s] = 0;

    std::priority_queue<
        std::pair<long long, int>, 
        std::vector<std::pair<long long, int>>,
        std::greater<std::pair<long long, int>>
    > pq;
    pq.push({0, s});

    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();
        if (dist[u] < d) continue;
        for (auto [v, c] : graph[u]) {
            int nc = d + c;
            if (dist[v] > nc) {
                dist[v] = nc;
                pq.push({nc, v});
            }
        }
    }
    return dist;
}