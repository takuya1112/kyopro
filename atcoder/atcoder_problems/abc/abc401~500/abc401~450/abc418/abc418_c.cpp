#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];
    sort(all(a));

    vector<ll> s(n + 1);
    rep(i, 0, n) s[i + 1] = s[i] + a[i];

    rep(qi, 0, q) {
        int b;
        cin >> b;
        if (a.back() < b) {
            cout << - 1 << endl;
            continue;
        }
        int i = lower_bound(all(a), b - 1) - a.begin();
        ll x = ll(n - i) * (b - 1);
        x += s[i];
        cout << x + 1 << endl;
    } 
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i = a; i >= b; i--)
// #define all(x) (x).begin(),(x).end()
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     int N, Q;
//     cin >> N >> Q;
//     vector<ll> A(N), B(N+1);
//     rep(i, 0, N) cin >> A[i];
//     sort(all(A));
//     rep(i, 0, N) B[i + 1] = B[i] + A[i];

//     rep(qi, 0, Q) {
//         int b;
//         cin >> b;
//         auto it = lower_bound(all(A), b);
//         if (it == A.end()) {
//             cout << - 1 << endl;
//         } else {
//             ll i = it - A.begin();
//             ll ans = B[i] + (b - 1) * (A.size() - i) + 1;
//             cout << ans << endl;
//         }
//     }
//     return 0;
// }