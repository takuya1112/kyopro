#include <bits/stdc++.h>
using namespace std;

static const int MAX = 100;
static const int INFTY = (1 << 21);
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

int n, M[MAX][MAX];

void dijkstra() {
    int minv;
    int d[MAX], color[MAX];

    for (int i = 0; i < n; i++) {
        d[i] = INFTY;
        color[i] = WHITE;
    }

    d[0] = 0;
    color[0] = GRAY;
    while (1) {
        minv = INFTY;
        int u = -1;
        for (int i = 0; i < n; i++) {
            if (minv > d[i] && color[i] != BLACK) {
                u = i;
                minv = d[i];
            }
        }

        if (u == -1) break;
        color[u] = BLACK;
        for (int v = 0; v < n; v++) {
            if (color[v] != BLACK && M[u][v] != INFTY) {
                if (d[v] > d[u] + M[u][v]) {
                    d[v] = d[u] + M[u][v];
                    color[v] = GRAY;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << i << " " << ( d[i] == INFTY ? -1 : d[i]) << endl;
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            M[i][j] = INFTY;
        }
    }

    int k, c, u, v;
    for (int i = 0; i < n; i++) {
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            cin >> v >> c;
            M[u][v] = c;
        }
    }

    dijkstra();
    return 0;
}

// mycode AC
// const int INF = 1e9;

// template<typename T>
// void warshall(std::vector<std::vector<T>>& dist) {
//     int N = dist.size();
//     for (int i = 0; i < N; i++) dist[i][i] = 0;

//     for (int k = 0; k < N; k++) {
//         for (int i = 0; i < N; i++) {
//             if (dist[i][k] == INF) continue;
//             for (int j = 0; j < N; j++) {
//                 if (dist[k][j] == INF) continue;
//                 dist[i][j] = std::min(dist[i][j], dist[i][k] + dist[k][j]);
//             }
//         }
//     }
// }

// int main() {
//     int N;
//     cin >> N;
//     vector<vector<int>> dist(N, vector<int>(N, INF));
//     for (int i = 0; i < N; i++) {
//         int u, k;
//         cin >> u >> k;
//         for (int j = 0; j < k; j++) {
//             int v, c;
//             cin >> v >> c;
//             dist[u][v] = c;
//         }
//     }

//     warshall(dist);
//     long long ans = 0;
//     for (int i = 0; i < N; i++) {
//         cout << i << " " << dist[0][i] << endl;
//     }
//     return 0;
// }