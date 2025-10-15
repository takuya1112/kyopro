#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> G(N + 1);
    rep(i, 1, N + 1) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(i);
        G[b].push_back(i);
    }

    vector<bool> ok(N + 1);
    ok[0] = true;

    auto dfs = [&](auto self, int v) -> void {
        ok[v] = true;
        for (auto vv : G[v]) if (!ok[vv]) {
            self(self, vv);
        }
    };

    dfs(dfs, 0);
    int ans = 0;
    for (auto x : ok) ans += x;
    cout << ans - 1 << endl;
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
//     int N;
//     cin >> N;
//     vector<int> A(N), B(N);
//     rep(i, 0, N) cin >> A[i] >> B[i];

//     vector<vector<int>> check(N);
//     rep(i, 0, N) {
//         int a = A[i], b = B[i];
//         if (a == 0 && b == 0) continue;
//         a--; b--;
//         check[a].push_back(i);
//         check[b].push_back(i);
//     }

//     vector<bool> ans(N, false);
//     auto f = [&](auto f, int x) -> void{
//         if (check[x].size()) {
//             rep(i, 0, check[x].size()) {
//                 int j = check[x][i];
//                 if (ans[j] == true) continue;
//                 ans[j] = true;
//                 f(f, j);
//             }
//         }
//     };

//     rep(i, 0, N) {
//         if (A[i] == 0 && B[i] == 0) {
//             ans[i] = true;
//             f(f, i);
//         }
//     }

//     int cnt = 0;
//     rep(i, 0, N) if (ans[i]) cnt++;
//     cout << cnt << endl;
//     return 0;
// }