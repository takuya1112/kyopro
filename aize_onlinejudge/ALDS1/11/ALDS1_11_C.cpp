#include <bits/stdc++.h>
using namespace std;

using vint = vector<int>;
#define rep(i, a) for (long long i = 0; i < (long long)(a); i++)
#define pb push_back


// ========================================
//                  solve
// ========================================

static const int N = 100;
static const int INFTY = (1 << 21);

int n, M[N][N];
int d[N];

void bfs(int s) {
    
    queue<int> q;
    q.push(s);

    rep(i, n) d[i] = INFTY;
    d[s] = 0;

    int u;
    while (!q.empty()) {
        u = q.front(); q.pop();
        rep(v, n) {
            if (M[u][v] == 0) continue;
            if (d[v] != INFTY) continue;
            d[v] = d[u] + 1;
            q.push(v);   
        }
    }

    rep(i, n) {
        cout << i + 1 << " " << ( (d[i] == INFTY) ? (-1) : d[i]) << endl;
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
    bfs(0);
    return 0;
}


// mycode AC
// int main() {
//     int n, u, k, v;
//     cin >> n;

//     vector<vint> G(n);

//     rep(i, n) {
//         cin >> u >> k;
//         u--;
//         rep(j, k) {
//             cin >> v;
//             v--;
//             G[u].pb(v);
//         }
//     }

//     vint d(n, -1);
//     queue<int> que;
//     que.push(0);
//     d[0] = 0;

//     while (!que.empty()) {
//         int u = que.front();
//         que.pop();
//         for (auto v : G[u]) {
//             if (d[v] != -1) continue;
//             d[v] = d[u] + 1;
//             que.push(v);
//         }
//     }

//     rep(i, n) {
//         cout << i + 1 << ' ' << d[i] << endl;
//     }
//     return 0;
// }