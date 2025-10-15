#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int N; 
    cin >> N;
    vector<ll> A(N), B(N), C(N);
    rep(i, N) cin >> A[i];
    rep(i, N) cin >> B[i];
    rep(i, N) cin >> C[i];

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    sort(C.begin(), C.end());

    ll ans = 0;
    for (ll b : B) {
        ll a = lower_bound(A.begin(), A.end(), b) - A.begin();
        ll c = N - (upper_bound(C.begin(), C.end(), b) - C.begin());
        cout << a << " " << c << endl;
        ans += a * c;
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
//     int N;
//     cin >> N;
//     vector<ll> A(N), B(N), C(N);
//     rep(i, N) cin >> A[i];
//     rep(i, N) cin >> B[i];
//     rep(i, N) cin >> C[i];
//     sort(A.begin(), A.end());
//     sort(B.begin(), B.end());
//     sort(C.begin(), C.end());

//     vector<ll> D;
//     rep(i, N) {
//         int j = upper_bound(C.begin(), C.end(), B[i]) - C.begin();
//         D.push_back(N - j);
//     }

//     rep(i, N) cout << D[i] << " ";
//     cout << endl;


//     ll ans = 0;
//     rep(i, N) {
//         auto it = upper_bound(B.begin(), B.end(), A[i]);
//         if (it == B.end()) continue;
//         cout << it - B.begin() << endl;
//     }
//     cout << ans << endl;

//     return 0;
// }