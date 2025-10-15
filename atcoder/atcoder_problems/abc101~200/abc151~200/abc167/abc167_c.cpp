#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define ll long long

const int INF = 1001001001; 

int a[12][12];

int main() {
    int n, m, x;
    cin >> n >> m >> x;
    vector<int> c(n);
    rep(i, n) {
        cin >> c[i];
        rep(j, m) cin >> a[i][j];
    }

    int ans = INF;
    rep(s, 1 << n) {
        int cost = 0;
        vector<int> d(m);
        rep(i, n) {
            if (s >> i & 1) {
                cost += c[i];
                rep(j, m) d[j] += a[i][j];
            }
        }
        bool ok = true;
        rep(j, m) if (d[j] < x) ok = false;
        if (ok) ans = min(ans, cost);
    }
    if (ans == INF) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)
// #define ll long long
// #define INF LLONG_MAX

// int main() {
//     int N, M, X;
//     cin >> N >> M >> X;
//     vector<int> C(N);
//     vector<vector<int>> A(N, vector<int>(M));

//     rep(i, N) {
//         cin >> C[i];
//         rep(j, M) {
//             cin >> A[i][j];
//         }
//     }

//     ll ans = INF;
//     rep(bit, 1 << N) {
//         ll S = 0;
//         vector<ll> check(M, 0);
//         rep(i, N) {
//             if (bit >> i & 1) {
//                 S += C[i];
//                 rep(j, M) check[j] += A[i][j];
//             }
//         }

//         bool ok = true;
//         rep(i, M) {
//             if (check[i] < X) ok = false;
//         }
//         if (ok) ans = min(ans, S);
//     }
//     if (ans == INF) cout << -1 << endl;
//     else cout << ans << endl;
//     return 0;
// }