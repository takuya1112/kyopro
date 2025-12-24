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


/** 
 * Union-Find
 * 
 * データを互いに素な集合に分類して管理するためのデータ構造
 * 併合は出来るが分割は出来ない
 * 
 * Verified: 
 * - https://judge.yosupo.jp/problem/unionfind
 * - https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/1/DSL_1_A
 * 
 * Operations:
 * - find(x): xの根を返す O(α(N))
 * - unite(x, y) xとyを同じ集合にする O(a(N))
 * - same(x, y) xとyが同じ集合か判定する O(a(N))
*/


//------------------------------//
// Usage Examples
//------------------------------//

// Example 1: Basic Usage
// int main() {
//     dsu d(5);
//     d.unite(0, 1);
//     d.unite(1, 2);
//     cout << d.same(0, 2) << endl; // 1 
//     cout << d.same(1, 3) << endl; // 0
// }

// Example 2: AOJ DSL_1_A
// https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/1/DSL_1_A
// int main() {
//     int N, Q;
//     cin >> N >> Q;

//     dsu d(N);
//     for (int i = 0; i < Q; i++) {
//         int com, x, y;
//         cin >> com >> x >> y;
//         if (com == 0) {
//             d.unite(x, y);
//         } else if (com == 1) {
//             if (d.same(x, y)) {
//                 cout << 1 << endl;
//             } else {
//                 cout << 0 << endl;
//             } 
//         }
//     }
// }