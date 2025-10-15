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

bool solve() {
    int n, m;
    cin >> n >> m;
    vector<int> deg(n);
    dsu uf(n);
    rep(i, 0, m) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        deg[a]++;
        deg[b]++;
        uf.merge(a, b);
    }

    int one = 0;
    rep(i, 0, n) {
        if (deg[i] == 0 || deg[i] > 2) return false;
        if (deg[i] == 1) one++;
    }
    if (one != 2) return false;
    
    if (uf.size(0) != n) return false;
    return true;
}

int main() {
    if (solve()) cout << "Yes" << endl;
    else cout << "No" << endl;
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

//     if (N - 1 != M) {
//         cout << "No" << endl;
//         return 0;
//     }

//     int first = -1;
//     rep(i, 0, N) {
//         if (G[i].size() == 1) first = i;
//     }

//     vector<bool> visited(N);
//     auto cnt = [&](auto cnt, int v) -> int {
//         visited[v] = true;
//         for (auto u : G[v]) {
//             if (visited[u]) continue;
//             return cnt(cnt, u) + 1;
//         }
//         return 1;
//     };

//     if (cnt(cnt, first) == N) cout << "Yes" << endl;
//     else cout << "No" << endl;
//     return 0;
// }