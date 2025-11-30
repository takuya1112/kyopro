// dfs_graph(s, g, graph, dist) の形で使用し
// 頂点s から頂点g に到達可能か調べる
// graph は隣接リストで持つ
// dist[i] != -1　到達可能
// dist[i] == -1　到達不可能

#pragma once
#include <vector>

std::vector<int> dfs_graph(int s, int g, const std::vector<std::vector<int>>& graph) {
    int N = graph.size();
    std::vector<int> dist(N, -1);
    dist[s] = 0;

    auto dfs = [&](auto& self, int u) -> bool {
        if (u == g) return true;

        for (int v : graph[u]) {
            if (dist[v] != -1) continue;
            dist[v] = dist[u] + 1;
            if (self(self, v)) return true;
        }
        return false;
    };
    dfs(dfs, s);
    return dist;
}