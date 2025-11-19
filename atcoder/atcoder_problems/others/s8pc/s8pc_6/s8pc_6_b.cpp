#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define ll long long

ll N, A[100], B[100], minx = (1LL << 60);

ll solve(int p1, int p2) {
    ll V1 = 0;
    for (int i = 1; i <= N; i++) {
        V1 += abs(p1 - A[i]);
        V1 += abs(A[i] - B[i]);
        V1 += abs(B[i] - p2);
    }
    return V1;
}

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> A[i] >> B[i];

    vector<ll> E;
    for (int i = 1; i <= N; i++) E.push_back(A[i]);
    for (int i = 1; i <= N; i++) E.push_back(B[i]);

    for (ll v1 : E) {
        for (ll v2 : E) {
            minx = min(minx, solve(v1, v2));
        }
    }
    cout << minx << endl;
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)
// #define ll long long

// int N;
// vector<ll> A(31), B(31);

// ll calu(int x, int y) {
//     ll res = 0;
//     rep(i, N) {
//         res += abs(A[i] - x);
//         res += B[i] - A[i];
//         res += abs(B[i] - y);
//     }
//     cout << endl;
//     return res;
// }

// int main() {
//     cin >> N;
//     rep(i, N) cin >> A[i] >> B[i];
//     ll ans = LLONG_MAX;
//     rep(i, N) rep(j, N) {
//         ans = min(calu(A[i], B[j]), ans);
//     }
//     cout << ans << endl;
//     return 0;
// }