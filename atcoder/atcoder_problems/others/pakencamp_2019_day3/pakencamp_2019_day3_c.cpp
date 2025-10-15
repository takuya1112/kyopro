#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define ll long long

ll N, M, A[109][109];

int main() {
    cin >> N >> M;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) cin >> A[i][j];
    }

    ll ans = 0;
    for (int i = 1; i <= M; i++) {
        for (int j = i + 1; j <= M; j++) {
            ll cnt = 0;
            for (int k = 1; k <= N; k++) cnt += max(A[k][i], A[k][j]);
            ans = max(ans, cnt);
        }
    }
    cout << ans << endl;
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)
// #define ll long long

// int main() {
//     int N, M;
//     cin >> N >> M;
//     vector<vector<ll>> A(N, vector<ll>(M));
//     rep(i, N) rep(j, M) cin >> A[i][j];
//     ll ans = 0;
//     rep(t1, M) {
//         rep(t2, M) {
//             ll tmp = 0;
//             rep(i, N) {
//                 tmp += max(A[i][t1], A[i][t2]);
//             }
//             ans = max(ans, tmp);
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }