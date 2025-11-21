#include <bits/stdc++.h>
using namespace std;

using vint = vector<int>;
#define rep(i, a) for (long long i = 0; i < (long long)(a); i++)
#define pb push_back

#define N 100
#define WHITE 0
#define GRAY 1
#define BLACK 2


// ========================================
//                  solve
// ========================================
int n, M[N][N];
int color[N], d[N], f[N], tt;
int nt[N];

int next(int u) {
    for (int v = nt[u]; v < n; v++) {
        nt[u] = v + 1;
        if (M[u][v]) return v;
    }
    return -1;
}

void dfs_visit(int r) {
    rep(i, n) nt[i] = 0;

    stack<int> S;
    S.push(r);
    color[r] = GRAY;
    d[r] = ++tt;

    while (!S.empty()) {
        int u = S.top();
        int v = next(u);
        if (v != -1) {
            if (color[v] == WHITE) {
                color[v] = GRAY;
                d[v] = ++tt;
                S.push(v);
            }
        } else {
            S.pop();
            color[u] = BLACK;
            f[u] = ++tt;
        }
    }
}

void dfs() {
    rep(i, n) {
        color[i] = WHITE;
        nt[i] = 0;
    }
    tt = 0;

    rep(u, n) {
        if (color[u] == WHITE) dfs_visit(u);
    }

    rep(i, n) {
        cout << i + 1 << " " << d[i] << " " << f[i] << endl;
    }
}

int main() {
    int u, k, v;
    cin >> n;

    rep(i, n) rep(j, n) M[i][j] = 0;

    rep(i, n) {
        cin >> u >> k;
        u--;
        rep(j, k) {
            cin >> v;
            v--;
            M[u][v] = 1;
        }
    }
    dfs();
    return 0;
}

// dfs recursive ans
// int n, M[N][N];
// int color[N], d[N], f[N], tt;

// void dfs_visit(int u) {
//     color[u] = GRAY;
//     d[u] = ++tt;
//     rep(v, n) {
//         if (M[u][v] == 0) continue;
//         if (color[v] == WHITE) {
//             dfs_visit(v);
//         }
//     }
//     color[u] = BLACK;
//     f[u] = ++tt;
// }

// void dfs() {
//     rep(u, n) color[u] = WHITE;
//     tt = 0;

//     rep(u, n) {
//         if (color[u] == WHITE) dfs_visit(u);
//     }

//     rep(u, n) {
//         printf("%lld %d %d\n", u + 1, d[u], f[u]);
//     }
// }

// int main() {
//     int u, v, k;
//     cin >> n;

//     rep(i, n) rep(j, n) M[i][j] = 0;

//     rep(i, n) {
//         cin >> u >> k;
//         u--;
//         rep(j, k) {
//             cin >> v;
//             v--;
//             M[u][v] = 1;
//         }
//     }
//     dfs();
//     return 0;
// }

// mycode AC
// vector<vint> G(N);
// int d[N], f[N];

// int cnt = 0;

// void dfs(int n) {
//     if (d[n] != 0) return;
//     cnt++;
//     d[n] = cnt;
//     for (auto m : G[n]) {
//         dfs(m);
//     }
//     cnt++;
//     f[n] = cnt;
// }


// int main() {
//     int n, u, k, v;
//     cin >> n;

//     rep(i, n) {
//         cin >> u >> k;
//         u--;
//         rep(j, k) {
//             cin >> v;
//             v--;
//             G[u].pb(v);
//         }
//     }
//     rep(i, n) {
//         dfs(i);  
//     }
    
//     rep(i, n) {
//         cout << i + 1 << ' ' << d[i] << ' ' << f[i] << endl;
//     }
//     return 0;
// }