#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
typedef long long ll; const int inf = INT_MAX / 2;
using Graph = vector<vector<int>>;

vector<bool> seen, finished;

int pos = -1;
stack<int> hist;

void dfs(const Graph &G, int v, int p) {
    seen[v] = true;
    hist.push(v);
    for (auto nv : G[v]) {
        if (nv == p) continue;
        if (finished[nv]) continue;
        if (seen[nv] && !finished[nv]) {
            pos = nv;
            return;
        }
        
        dfs (G, nv, v);
        if (pos != -1) return;
    }
    hist.pop();
    finished[v] = true;
}

int main() {
    int N; cin >> N;
    Graph G(N);
    rep(i, 0, N) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    seen.assign(N, false), finished.assign(N, false);
    pos = -1;
    dfs(G, 0, -1);

    set<int> cycle;
    while(!hist.empty()) {
        int t = hist.top();
        cycle.insert(t);
        hist.pop();
        if (t == pos) break;
    }

    int Q; cin >> Q;
    rep(qi, 0, Q) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        if (cycle.count(a) && cycle.count(b)) cout << 2 << endl;
        else cout << 1 << endl;
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i = a; i >= b; i--)
// #define all(x) (x).begin(),(x).end()
// #define rall(x) (x).rbegin(),(x).rend()
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     int N;
//     cin >> N;
//     vector<vector<int>> G(N);
//     rep(i, 0, N) {
//         int u, v;
//         cin >> u >> v;
//         u--; v--;
//         G[u].push_back(v);
//         G[v].push_back(u);
//     }

//     vector<bool> seen(N);
//     vector<bool> finished(N);
//     stack<int> cycle;
//     set<int> cycle_check;

//     auto f = [&](auto f, int v, int p) -> void {
//         if (!cycle_check.empty()) return;
//         if (seen[v] && !finished[v]) {
//             while (!cycle.empty()) {
//                 int c = cycle.top();
//                 cycle.pop();
//                 cycle_check.insert(c);
//                 if (c == v) break;
//             }
//             return;
//         }

//         seen[v] = true;
//         cycle.push(v);
//         for (int u : G[v]) {
//             if (u == p) continue;
//             f(f, u, v);
//         }

//         finished[v] = true;
//         if (!cycle.empty()) cycle.pop();
//     };

//     rep(i, 0, N) {
//         if (seen[i]) continue;
//         f(f, i, -1);
//     }

//     for (int i : cycle_check) cout << i << ' ';
//     cout << '\n';

//     int Q;
//     cin >> Q;
//     rep(qi, 0, Q) {
//         int a, b;
//         cin >> a >> b;
//         a--; b--;
//         auto it = cycle_check.find(a), it_ = cycle_check.find(b);
//         if (it != cycle_check.end() && it_ != cycle_check.end()) {
//             cout << 2 << endl;
//         } else cout << 1 << endl;
//     }
//     return 0;
// }