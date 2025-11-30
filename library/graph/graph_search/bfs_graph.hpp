// bfs_graph(s, graph, dist) の形で使用し
// sから移動コストは均一での各頂点への最短距離を調べる
// graph は隣接リストで持つ
// dist[i] は最短距離
// dist[i] == -1だった場合は到達不可能

#pragma once
#include <vector>
#include <queue>

std::vector<int> bfs_graph(int s, const std::vector<std::vector<int>>& graph) {
    int N = graph.size();
    std::vector<int> dist(N, -1);
    dist[s] = 0;

    std::queue<int> que;
    que.push(s);

    int u;
    while (!que.empty()) {
        u = que.front();
        que.pop();
        for (int v : graph[u]) {
            if (dist[v] != -1) continue;
            dist[v] = dist[u] + 1;
            que.push(v);
        }
    }
    return dist;
}