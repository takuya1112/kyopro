#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define chmin(x, y) x = min(x, y)
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int n, m;
    cin >> n >> m;

    int ans = 0;
    dsu uf(n);
    rep(i, 0, m) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        if (uf.same(a, b)) {
            ans++;
            continue;
        }
        uf.merge(a, b);
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

//     vector<bool> seen(N);
//     vector<bool> finished(N);
    
//     int cnt = 0;
//     auto f = [&](auto f, int u, int p) -> void {

//         seen[u] = true;
//         for (int v : G[u]) {
//             if (finished[v]) continue;
//             if (v == p) continue;
//             if (seen[v] && !finished[v]) {
//                 cnt++;
//                 continue;
//             }
//             f(f, v, u);
//         }
//         finished[u] = true;
//     };

//     rep(i, 0, N) {
//         if (finished[i]) continue;
//         rep(j, 0, G[i].size()) {
//             f(f, G[i][j], -1);
//         }
//     }

//     cout << cnt << endl;
//     return 0;
// }