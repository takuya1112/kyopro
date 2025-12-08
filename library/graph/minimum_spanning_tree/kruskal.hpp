// kruskl(n, edges)の形で使用し
// 最小全域木問題(MST)を解く
// union findを使う
// O(E log E)で辺の数が少ない(疎なグラフ)場合に強い

#pragma once
#include "../union_find.hpp"
#include <vector>
#include <algorithm>

struct edge { 
    int u, v; 
    long long w; 
};

long long kruskal(int n, std::vector<edge>& edges) {
    std::sort(edges.begin(), edges.end(), [] (const edge& e1, const edge& e2) {return e1.w < e2.w;} );
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