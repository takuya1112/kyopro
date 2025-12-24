#include <bits/stdc++.h>
using namespace std;

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

int main() {
    int N, Q;
    cin >> N >> Q;

    dsu d(N);
    for (int i = 0; i < Q; i++) {
        int com, x, y;
        cin >> com >> x >> y;
        if (com == 0) {
            d.unite(x, y);
        } else if (com == 1) {
            if (d.same(x, y)) {
                cout << 1 << endl;
            } else {
                cout << 0 << endl;
            } 
        }
    }
}