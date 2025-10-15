#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    ll n; int m;
    cin >> n >> m;
    vector<pair<ll, ll>> ps;
    rep(i, m) {
        ll a, b;
        cin >> a >> b;
        ps.emplace_back(a-b, a);
    }
    sort(ps.begin(), ps.end());

    ll ans = 0;
    for (auto [d,a] : ps) {
        if (n < a) continue;
        ll x = (n-a) / d + 1;
        ans += x;
        n -= d*x;
    }
    cout << ans << endl;
    return 0;
}

// mycode worng ans 
// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)
// #define ll long long

// int main() {
//     ll N, M;
//     cin >> N >> M;
//     vector<ll> A(M), B(M);
//     rep(i, M) cin >> A[i];
//     rep(i, M) cin >> B[i];
    
//     ll left = 0, right = N;
//     while (right - left > 1) {
//         ll mid = (right + left) / 2;
//         ll cnt = 0;
//         ll n = N;
//         while (cnt < mid) {
//             ll temp = 0;
//             ll index = -1;
//             for (int i = 0; i < M; i++) {
//                 if (n < A[i]) continue;
//                 ll m = n - A[i] + B[i]; 
//                 if (m > temp) {
//                     temp = m;
//                     index = i;
//                 }
//             }

//             if (index == -1) break;
//             n -= A[index];
//             n += B[index];
//             cnt ++;
//         }

//         if (cnt < mid) right = mid;
//         else left = mid;
//     }
//     cout << right << endl;
//     return 0;
// }