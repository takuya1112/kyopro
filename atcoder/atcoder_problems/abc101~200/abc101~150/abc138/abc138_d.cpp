#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
typedef long long ll; const int inf = INT_MAX / 2;

vector<int> to[200005];
vector<int> ans;

void dfs(int v, int p = -1) {
    for (int u : to[v]) {
        if (u == p) continue;
        ans[u] += ans[v];
        dfs(u, v);
    }
}

int main() {
    int n, q;
    cin >> n >> q;
    rep(i, 0, n - 1) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        to[a].push_back(b);
        to[b].push_back(a);
    }

    ans.resize(n);
    rep(i, 0, q) {
        int p, x;
        cin >> p >> x;
        p--;
        ans[p] += x;
    }
    dfs(0);
    rep(i, 0, n) cout << ans[i] << ' ';
    cout << '\n';
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

// int main() {
//     int N, Q;
//     cin >> N >> Q;
//     vector<vector<int>> G(N);
//     vector<int> count(N);

//     rep(i, 0, N - 1) {
//         int a, b;
//         cin >> a >> b;
//         a--; b--;
//         G[a].push_back(b);
//         G[b].push_back(a);
//     }

//     rep(qi, 0, Q) {
//         int p, x;
//         cin >> p >> x;
//         p--;
//         count[p] += x;
//     }


//     auto f = [&](auto f, int v, int p) -> void {
//         count[v] += count[p];
//         for (auto u : G[v]) {
//             if (p == u) continue;
//             f(f, u, v);
//         }
//     };

//     for (auto v : G[0]) f(f, v, 0);
//     for (int c : count) cout << c << ' ';
//     cout << '\n';
//     return 0;
// }