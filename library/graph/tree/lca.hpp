// lowest common ancestor(最小共通祖先)
// lca anc(graph, root)の形で使用し
// anc.find(u, v) でuとvの最小共通祖先を調べる
// graphは隣接リストで渡す


#pragma once
#include <vector>

struct lca {
    int N, LOG;
    std::vector<std::vector<int>> parent;
    std::vector<int> depth;

    lca(const std::vector<std::vector<int>>& graph, int root) {
        N = graph.size();
        LOG = 1;
        while ((1 << LOG) <= N) LOG++;

        parent.assign(LOG, std::vector<int>(N, -1));
        depth.assign(N, -1);

        dfs(graph, root, -1, 0);

        for (int k = 0; k + 1 < LOG; k++) {
            for (int v = 0; v < N; v++) {
                if (parent[k][v] < 0) parent[k + 1][v] = -1;
                else parent[k + 1][v] = parent[k][parent[k][v]];
            }
        }
    }

    void dfs(const std::vector<std::vector<int>>& graph, int v, int p, int d) {
        parent[0][v] = p;
        depth[v] = d;
        for (int u : graph[v]) if (u != p) {
            dfs(graph, u, v, d + 1);
        }
    }

    int find(int u, int v) {
        if (depth[u] > depth[v]) std::swap(u, v);
        for (int k = 0; k < LOG; k++) {
            if ((depth[v] - depth[u]) >> k & 1) {
                v = parent[k][v];
            }
        }
        if (u == v) return u;
        for (int k = LOG - 1; k >= 0; k--) {
            if (parent[k][u] != parent[k][v]) {
                u = parent[k][u];
                v = parent[k][v];
            }
        }
        return parent[0][u];
    }
};