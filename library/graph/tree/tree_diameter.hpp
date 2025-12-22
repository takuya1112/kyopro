// vector<vector<Edge<int>>> graphのようにEdgeの型を決めて
// tree_diameter(graph)の形で使用する
// 木の直径を調べて２頂点とその距離を返す

#pragma once
#include <vector>

template<typename T>
struct Edge {
    int to;
    T cost;
};

template<typename T>
struct Diameter {
    T dist;
    int u, v;
};

template<typename T>
Diameter<T> tree_diameter(const std::vector<std::vector<Edge<T>>>& graph) {
    auto dfs = [&](auto& self, int v, int p) -> std::pair<T, int> {
        std::pair<T, int> res = std::make_pair((T)0, v);
        for (auto &e : graph[v]) {
            if (e.to == p) continue;
            auto next = self(self, e.to, v);
            next.first += e.cost;
            if (next.first > res.first) res = next;
        }
        return res;
    };

    std::pair<T, int> p = dfs(dfs, 0, -1);
    std::pair<T, int> q = dfs(dfs, p.second, -1);
    return {q.first, p.second, q.second};
}
