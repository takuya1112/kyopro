#include <bits/stdc++.h>
using namespace std;


using vint = vector<int>;
#define rep(i, a) for (long long i = 0; i < (long long)(a); i++)
#define pb push_back
#define all(x) x.begin(), x.end()


// ========================================
//                  solve
// ========================================

static const int MAX = 1e5;
static const int NIL = -1;

int n;
vint G[MAX];
int color[MAX];

void dfs(int r, int c) {
    stack<int> S;
    S.push(r);
    color[r] = c;
    while (!S.empty()) {
        int u = S.top(); S.pop();
        rep(i, G[u].size()) {
            int v = G[u][i];
            if (color[v] == NIL) {
                color[v] = c;
                S.push(v);
            }
        }
    }
}

void assignColor() {
    int id = 1;
    rep(i, n) color[i] = NIL;
    rep(u, n) {
        if (color[u] == NIL) dfs(u, id++);
    }
}

int main() {
    int s, t, m, q;
    cin >> n >> m;

    rep(i, m) {
        cin >> s >> t;
        G[s].pb(t);
        G[t].pb(s);
    }

    assignColor();

    cin >> q;
    
    rep(i, q) {
        cin >> s >> t;
        if (color[s] == color[t]) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}

// mycode AC
// int main() {
//     int N, M, s, t, Q;
//     cin >> N >> M;
    
//     vector<vint> G(N);
//     rep(i, M) {
//         cin >> s >> t;
//         G[s].pb(t);
//         G[t].pb(s);
//     }

//     vector<vint> SNS;
//     vector<bool> visited(N);

//     vector<int> friends;
//     auto f = [&](auto f, int n) -> void {
        
//         visited[n] = true;
//         friends.pb(n);
//         for (auto m : G[n]) {
//             if (visited[m]) continue;
//             f(f, m);
//         }
//     };

//     rep(i, N) {
//         if (visited[i]) continue;
//         friends.clear();
//         f(f, i);
//         SNS.pb(friends);
//     }
    
//     cin >> Q;
//     rep(qi, Q) {
//         cin >> s >> t;
//         rep(i, SNS.size()) {
//             if (find(all(SNS[i]), s) != SNS[i].end()) {
//                 if (find(all(SNS[i]), t) != SNS[i].end()) cout << "yes" << endl;
//                 else cout << "no" << endl;
//                 break;
//             } 
//         }
//     }
//     return 0;
// }