#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> edges;

    rep(i, 0, m) {
        int u, v;
        cin >> u >> v;
        u--; v--;
        edges.emplace_back(u, v);
    }

    int ans = m;
    rep(s, 0, 1 << n) {
        vector<int> color(n);
        rep(i, 0, n) color[i] = s >> i & 1;
        int now = 0;
        for (auto [u, v] : edges) {
            if (color[u] == color[v]) now++;
        }
        ans = min(ans, now);
    }
    cout << ans << endl;
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
// #define chmin(x, y) x = min(x, y)
// #define chmax(x, y) x = max(x, y)
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     int N, M;
//     cin >> N >> M;
//     vector<vector<int>> G(N);
//     rep(i, 0, M) {
//         int u, v;
//         cin >> u >> v;
//         u--; v--;
//         G[u].push_back(v);
//         G[v].push_back(u);
//     }
    
//     auto check = [&](int start) -> int{
//         int res = 0;
//         vector<int> color(N, -1);
//         auto f = [&](auto f, int u, int cur) -> void {
//             color[u] = cur;

//             for (auto v : G[u]) {
//                 if (color[v] != -1) {
//                     if (color[u] == color[v]) res++;
//                     continue;
//                 }
//                 f(f, v, 1 - cur);
//             }
//         };

//         rep(i, start, N) {
//             if (color[i] != -1) continue;
//             f(f, i, 0);
//         } 
//         rep(i, 0, N) {
//             if (color[i] != -1) continue;
//             f(f, i, 0);
//         }

//         res /= 2;
//         return res;
//     };

//     int ans = inf;
//     rep(i, 0, N) {
//         ans = min(ans, check(i));
//     }

//     cout << ans << endl;
//     return 0;
// }