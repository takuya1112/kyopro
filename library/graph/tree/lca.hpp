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


/** 
 * lowest common ancestor(最小共通祖先)
 * 
 * 根付き木に対し2頂点 u, v の共通祖先で最も近いものを求める
 * ダブリング（倍増法）を用いた実装
 * 
 * Verified: 
 * - https://judge.yosupo.jp/problem/lca
 * 
 * Operations:
 * - Constructor: 前処理 O(N log N)
 * - find(u, v) 2頂点 u, v の LCA を返す O(log N)
 * 
 * Space: O(N log N)
*/


//------------------------------//
// Usage Examples
//------------------------------//

// Example 1: Basic Usage
// int main() {
//     // 木の構造:
//     //       0
//     //      / \
//     //     1   2
//     //        / \
//     //       3   4
//     vector<vector<int>> graph(5);
//     graph[0] = {1, 2};
//     graph[1] = {0};
//     graph[2] = {0, 3, 4};
//     graph[3] = {2};
//     graph[4] = {2};
// 
//     lca tree(graph, 0);
//     cout << tree.find(1, 2) << endl; // 0
//     cout << tree.find(3, 4) << endl; // 2
//     cout << tree.find(1, 4) << endl; // 0
// }

// Example 2: Library Checker - LCA
// https://judge.yosupo.jp/problem/lca
// int main() {
//     int N, Q;
//     cin >> N >> Q;
//     vector<vector<int>> graph(N);
//     for (int i = 1; i < N; i++) {
//         int p;
//         cin >> p;
//         graph[p].push_back(i);
//         graph[i].push_back(p);
//     }

//     lca tree(graph, 0);
//     for (int i = 0; i < Q; i++) {
//         int u, v;
//         cin >> u >> v;
//         cout << tree.find(u, v) << endl;
//     } 
// }