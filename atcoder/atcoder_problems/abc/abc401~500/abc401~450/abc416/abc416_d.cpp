#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define ll long long

void solve() {
    ll N, M; 
    cin >> N >> M;
    vector<ll> A(N), B(N);
    rep(i, N) cin >> A[i];
    rep(i, N) cin >> B[i];
    sort(A.begin(), A.end(), greater<>());
    sort(B.begin(), B.end());
    int C = 0, idx = 0;
    for (int v : A) {
        while (idx < N && B[idx] + v < M) idx++;
        if (idx >= N) break;
        C++;
        idx++;
    }
    ll a = 0, b = 0;
    rep(i, N) a += A[i];
    rep(i, N) b += B[i];
    cout << a + b - M * C << endl;
}

int main() {
    int T; 
    cin >> T;
    rep(i, T) solve();
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)
// #define ll long long

// void solve() {
//     ll N, M;
//     cin >> N >> M;
//     vector<ll> A(N), B(N);
//     rep(i, N) cin >> A[i];
//     rep(i, N) cin >> B[i];
//     sort(A.begin(), A.end());
//     vector<bool> visited(N, false);
//     ll ans = 0;
//     rep(i, N) {
//         auto it = lower_bound(A.begin(), A.end(), M - B[i]);
//         if (it != A.end()) {
//             int idx = it - A.begin();
//             if (visited[idx]) {

//             }
//             else {
//                 ans += (A[idx] + B[i]) % M;
//                 visited[idx] = true;   
//             }

//         }
//         else {
            
//         }

//     }
// }

// int main() {
//     int T;
//     cin >> T;
//     rep(i, T) solve();
//     return 0;
// }