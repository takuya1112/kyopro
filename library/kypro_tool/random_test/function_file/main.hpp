// 試したいコード

#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "data.hpp"

struct mydsu {
    std::vector<int> parent, rank;

    mydsu(int n) : parent(n), rank(n, 0) {
        for (int i = 0; i < n; i++) parent[i] = i;
    }

    int find(int x) {
        if (parent[x] == x) return x;
        else return parent[x] = find(parent[x]);
    }

    void unite(int x, int y) {
        x = find(x); 
        y = find(y);
        if (x == y) return;

        if (rank[x] < rank[y]) {
            parent[x] = y;
        } else {
            parent[y] = x;
            if (rank[x] == rank[y]) rank[x]++;
        }
    }

    bool same(int x, int y) {
        return find(x) == find(y);
    }
};

long long kruskal(int n, std::vector<Edge>& edges) {
    std::sort(edges.begin(), edges.end(), [] (const Edge& e1, const Edge& e2) {return e1.w < e2.w;} );
    mydsu uf(n);
    long long res = 0;

    for (auto& e : edges) {
        if (!uf.same(e.u, e.v)) {
            uf.unite(e.u, e.v);
            res += e.w;
        }
    }
    return res;
}


long long fast(const TestCase &tc) {
    vector<Edge> e = tc.edges;
    return kruskal(tc.n, e);
}