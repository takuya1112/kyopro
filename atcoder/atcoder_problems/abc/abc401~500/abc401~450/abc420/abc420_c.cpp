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
    vector<int> a(n), b(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];

    ll ans = 0;
    rep(i, 0, n) ans += min(a[i], b[i]);

    rep(qi, 0, q) {
        char c; int x, v;
        cin >> c >> x >> v;
        x--;
        int pre = min(a[x], b[x]);
        if (c == 'A') a[x] = v; else b[x] = v;
        int now = min(a[x], b[x]);
        ans += now - pre;
        cout << ans << endl;
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
//     vector<ll> A(N), B(N);
//     rep(i, 0, N) cin >> A[i];
//     rep(i, 0, N) cin >> B[i];

//     ll ans = 0;
//     rep(i, 0, N) {
//         ans += min(A[i], B[i]);
//     }
    
//     rep(i, 0, Q) {
//         char c; int x, v;
//         cin >> c >> x >> v;
//         x--;

//         int a = A[x], b = B[x];
//         if (a < b) ans -= a;
//         else ans -= b;

//         if (c == 'A') {
//             A[x] = v;
//             if (b > v) {
//                 ans += v;
//             } else ans += b;
//         } else {
//             B[x] = v;
//             if (a > v) {
//                 ans += v;
//             } else ans += a;
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }