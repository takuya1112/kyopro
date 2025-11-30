// dfs_tree(root, graph) で使用し
// それぞれの頂点の親と根からの深さをpair<parent, dppth>で返す
// graphは隣接リストで持つ

#pragma once
#include <vector>

std::pair<std::vector<int>, std::vector<int>> dfs_tree(int root, const std::vector<std::vector<int>>& graph) {
    int N = graph.size();
    std::vector<int> parent(N), depth(N);

    auto dfs = [&](auto& self, int v, int p, int d) -> void {
        parent[v] = p;
        depth[v] = d;
        for (auto &u : graph[v]) {
            if (u == p) continue;
            self(self, u, v, d + 1);
        }
    };
    dfs(dfs, root, -1, 0);
    return {parent, depth};
}
