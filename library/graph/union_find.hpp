// dsu uf(N)の形で使用し
// uf.unite(x, y) でXの集合とYの集合を繋げる(分割はできない)
// uf.same(x, y)でXとYが同じ集合にいるのか調べる

#pragma once
#include <vector>

struct dsu {
    std::vector<int> parent, rank;

    dsu(int n) : parent(n), rank(n, 0) {
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