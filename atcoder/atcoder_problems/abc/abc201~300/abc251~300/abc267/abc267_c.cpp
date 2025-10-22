#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int n, m;
    cin >> n >> m;
    vector<ll> a(n);
    rep(i, 0, n) cin >> a[i];

    ll s = 0, t = 0;
    rep(i, 0, m) s += a[i] * (i + 1);
    rep(i, 0, m) t += a[i];

    ll ans = s;
    rep(i, 0, n - m) {
        ll ns = s - t + a[i + m] * m;
        ll nt = t - a[i] + a[i + m];
        s = ns; t = nt;
        ans = max(ans, s);
    }
    cout << ans << endl;
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
// #define chmin(x, y) x = min(x, y)
// #define chmax(x, y) x = max(x, y)
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     int N, M;
//     cin >> N >> M;
//     vector<ll> A(N);
//     rep(i, 0, N) cin >> A[i];

//     ll res = 0;
//     rep(i, 0, M) res += A[i] * (i + 1);

//     ll minus = 0;
//     rep(i, 0, M) minus += A[i];

//     ll ans = res;
//     rep(i, 0, N - M) {
//         res += A[i + M] * M - minus;
//         minus += A[i + M] - A[i];
//         ans = max(ans, res);
//     }
//     cout << ans << endl;
//     return 0;
// }