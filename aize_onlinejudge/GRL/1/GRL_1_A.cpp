#include <bits/stdc++.h>
using namespace std;


using ll = long long;

// --- constants ---
#define MAX_V 100001
const ll INF = 4e18;

// ========================================
//                  solve
// ========================================

static int V, E, r;
static vector<pair<int, ll>> graph[MAX_V];
static ll dist[MAX_V];


int main() {
    cin >> V >> E >> r;
    for (int i = 0; i < E; i++) {
        int s, t; ll w;
        cin >> s >> t >> w;
        graph[s].push_back(make_pair(t, w));
    }

    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> que;

    for (int i = 0; i < MAX_V; i++) dist[i] = INF;
    dist[r] = 0;
    que.push(make_pair(0, r));

    while (!que.empty()) {
        ll curDist = que.top().first;
        int curVertex = que.top().second;
        que.pop();

        if (dist[curVertex] < curDist) continue;

        for (int i = 0; i < graph[curVertex].size(); i++) {
            int toVertex = graph[curVertex][i].first;
            ll toDist = curDist + graph[curVertex][i].second;

            if (dist[toVertex] > toDist) {
                dist[toVertex] = toDist;
                que.push(make_pair(toDist, toVertex));
            }
        }
    }

    for (int i = 0; i < V; i++) {
        if (dist[i] < INF) cout << dist[i] << endl;
        else cout << "INF" << endl;
    }
    return 0;
}

// int main() {
//     int V, E, R;
//     cin >> V >> E >> R;

//     vector<vector<pair<ll, int>>> G(V);
//     rep(i, E) {
//         int s, t, d;
//         cin >> s >> t >> d;
//         G[s].pb({d, t});
//     }

//     pq_g<pair<ll, int>> pq;
//     pq.push({0, R});

//     vector<ll> dist(V, LINF);
//     dist[R] = 0;

//     while (!pq.empty()) {
//         auto [w, u] = pq.top(); pq.pop();

//         if (dist[u] < w) continue;
//         for (auto [c, v] : G[u]) {
//             ll nw = w + c;
//             if (dist[v] > nw) {
//                 dist[v] = nw;
//                 pq.push({nw, v});
//             }
//         }
//     }

//     rep(i, V) {
//         if (dist[i] == LINF) cout << "INF"  << endl;
//         else cout << dist[i] << endl;
//     }
//     return 0;
// }