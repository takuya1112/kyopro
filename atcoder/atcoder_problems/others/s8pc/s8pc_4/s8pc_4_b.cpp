#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    ll P = LLONG_MAX;
    rep(i, 1 << (n-1)) {
        if (__builtin_popcount(i) < k - 1) continue;
        int sum = a[0];
        ll ans = 0;
        rep(j, n-1) {
            if (i >> j & 1) {
                if (sum >= a[j + 1]) {
                    ans += sum + 1 - a[j + 1];
                    sum ++;
                }
            }
            sum = max(sum, a[j + 1]);
        }
        P = min(P, ans);
    }
    cout << P << endl;
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i,n) for (int i = 0; i < (n); ++i)
// #define ll long long

// int main() {
//     int N, K;
//     cin >> N >> K;
//     vector<ll> A(N);
//     rep(i, N) cin >> A[i];
//     ll ans = LLONG_MAX;
//     rep(bit, 1 << (N-1)) {
//         ll tmp = 0;
//         int p = 0; 
//         auto a = A;
//         rep(i, N-1) {
//             if (bit >> i & 1) {
//                 if (a[p] >= a[i+1]) {
//                     tmp += a[p] - a[i+1] + 1;
//                     a[i+1] = a[p] + 1;
//                 }
//                 p = i + 1;
//             }
//         }
//         ll pre = 0;
//         int cnt = 0;
//         rep(i, N) {
//             if (a[i] > pre) {
//                 cnt++;
//                 pre = a[i]; 
//             }
//         }
//         if (cnt >= K) ans = min(ans, tmp);
//     }
//     cout << ans << '\n';
//     return 0;
// }