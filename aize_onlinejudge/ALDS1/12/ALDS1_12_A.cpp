#include <bits/stdc++.h>
using namespace std;

static const int MAX = 100;
static const int INFTY = (1 << 21);
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

int n, M[MAX][MAX];

int prim() {
    int u, minv;
    int d[MAX], p[MAX], color[MAX];

    for (int i = 0; i < n; i++) {
        d[i] = INFTY;
        p[i] = -1;
        color[i] = WHITE;
    }

    d[0] = 0;

    while (1) {
        minv = INFTY;
        u = -1;
        for (int i = 0; i < n; i++) {
            if (minv > d[i] && color[i] != BLACK) {
                u = i;
                minv = d[i];
            }
        }

        if ( u == -1 ) break;
        color[u] = BLACK;
        for (int v = 0; v < n; v++) {
            if (color[v] != BLACK && M[u][v] != INFTY) {
                if (d[v] > M[u][v]) {
                    d[v] = M[u][v];
                    p[v] = u;
                    color[v] = GRAY;
                }
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (p[i] != -1) sum += M[i][p[i]];
    }

    return sum;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int e; cin >> e;
            M[i][j] = (e == -1) ? INFTY : e;
        }
    }

    cout << prim() << endl;
    return 0;
}

// mycode AC
// template <class T>
// long long prim(const std::vector<std::vector<std::pair<int, T>>>& graph) {
//     int N = graph.size();
//     std::vector<int> used(N, 0);

//     int cnt = 0;
//     long long res = 0;

//     std::priority_queue<
//         std::pair<long long, int>, 
//         std::vector<std::pair<long long, int>>,
//         std::greater<std::pair<long long, int>>
//     > pq;

//     for (auto [v, c] : graph[0]) pq.push({c, v});
//     used[0] = 1;
//     cnt++;

//     while (cnt < N) {
//         auto [c, v] = pq.top();
//         pq.pop();

//         if (used[v]) continue;

//         used[v] = 1;
//         cnt++;
//         res += c;

//         for (auto [u, d] : graph[v]) {
//             if (used[u]) continue;
//             pq.push({d, u});
//         } 
//     }
//     return res;
// }

// int main() {
//     int N;
//     cin >> N;
//     vector<vector<pair<int, int>>> A(N);
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             int w;
//             cin >> w;
//             if (w == -1) continue;
//             A[i].push_back(make_pair(j, w));
//         }
//     }

//     cout << prim(A) << endl;
//     return 0;
// }