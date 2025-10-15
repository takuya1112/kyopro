#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll;

using Graph = vector<vector<int>>;
Graph G;

void dfs(int v, vector<bool> &seen, int &res) {
    bool end = true;
    rep(i, 0, seen.size()) if (!seen[i] && i != v) end = false;
    if (end) {
        res++;
        return;
    }

    seen[v] = true;
    for (auto nv : G[v]) {
        if (seen[nv]) continue;
        dfs(nv, seen, res);
    }
    seen[v] = false;
}

int main() {
    int N, M; cin >> N >> M;
    G.assign(N, vector<int>());
    rep(i, 0, M) {
        int a, b; cin >> a >> b; a--, b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    vector<bool> seen(N, false);
    int res = 0;
    dfs(0, seen, res);
    cout << res << endl;
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i=a;i>=b;i--)
// #define all(x) (x).begin(),(x).end()
// typedef long long ll;

// bool G[10][10];

// int main() {
//     int N, M; cin >> N >> M;
//     rep(i, 0, M) {
//         int a, b; cin >> a >> b; a--, b--;
//         G[a][b] = G[b][a] = true;
//     }

//     vector<int> ord(N);
//     rep(i, 0, N) ord[i] = i;

//     int res = 0;
//     do {
//         if (ord[0] != 0) break;

//         bool ok = true;
//         rep(i, 0, N-1) {
//             int from = ord[i];
//             int to = ord[i+1];
//             if (!G[from][to]) ok = false;
//         }
//         if (ok) res++;
//     } while (next_permutation(all(ord)));
//     printf("%d\n", res);
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i=a;i>=b;i--)
// #define all(x) (x).begin(),(x).end()
// typedef long long ll;

// int main() {
//     int N, M;
//     cin >> N >> M;
//     vector<vector<int>> edges(N);
//     rep(i, 0, M) {
//         int a, b;
//         cin >> a >> b;
//         a--; b--;
//         edges[a].push_back(b);
//         edges[b].push_back(a);
//     }

//     vector<int> order;
//     rep(i, 1, N) order.push_back(i);

//     int ans = 0;
//     do {
//         int cnt = 1;
//         int pre = 0;

//         rep(i, 0, N-1) {
//             bool ok = false;
//             for (int v : edges[pre]) {
//                 if (v == order[i]) ok = true;
//             }
//             if (!ok) break;
//             else {
//                 cnt++;
//                 pre = order[i];
//             }
//         }
//         if (cnt == N) ans++;
//     } while (next_permutation(all(order)));
//     printf("%d\n", ans);
//     return 0;
// }