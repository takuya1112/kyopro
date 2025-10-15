#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
typedef long long ll; const int inf = INT_MAX / 2;

using Edge = pair<int, int>;
using Graph = vector<vector<Edge>>;

int main() {
    int N; cin >> N;
    Graph G(N);
    rep(i, 0, N - 1) {
        int u, v, w;
        cin >> u >> v >> w;
        u--; v--;
        G[u].push_back(Edge(v, w));
        G[v].push_back(Edge(u, w));
    }

    vector<int> res(N);

    auto dfs = [&](auto dfs, int v, int p, int c) -> void {
        res[v] = c;
        for (auto e : G[v]) {
            if (e.first == p) continue;
            if (e.second & 1) dfs(dfs, e.first, v, 1 - c);
            else dfs(dfs, e.first, v, c);
        }
    };
    dfs(dfs, 0, -1, 1);
    for (auto v : res) cout << v << endl;
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i = a; i >= b; i--)
// #define all(x) (x).begin(),(x).end()
// #define rall(x) (x).rbegin(),(x).rend()
// typedef long long ll; const int inf = INT_MAX / 2;

// #define pint pair<int, int>

// int main() {
//     int N;
//     cin >> N;
//     vector<vector<pint>> G(N);
//     rep(i, 0, N - 1) {
//         int u, v, w;
//         cin >> u >> v >> w;
//         u--;
//         v--;
//         G[u].push_back({v, w});
//         G[v].push_back({u, w});
//     }

//     vector<int> color(N, -1);

//     auto f = [&](auto f, int v, int cur = 0) -> void{
//         color[v] = cur;
//         for (auto [u, w] : G[v]) {
//             if (color[u] != -1) continue;
//             if (w % 2 == 0) f(f, u, cur);
//             else f(f, u, 1 - cur);
//         }
//     };

//     rep(v, 0, N) {
//         if (color[v] != -1) continue;
//         f(f, v);
//     }

//     rep(i, 0, N) cout << color[i] << '\n';
//     return 0;
// }