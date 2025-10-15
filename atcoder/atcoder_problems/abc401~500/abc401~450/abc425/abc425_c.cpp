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
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];
    vector<ll> s(n + 1);
    rep(i, 0, n) s[i + 1] = s[i] + a[i];

    int si = 0;
    rep(qi, 0, q) {
        int type;
        cin >> type;
        if (type == 1) {
            int c;
            cin >> c;
            si = (si + c) % n;
        }
        if (type == 2) {
            int l, r;
            cin >> l >> r;
            l--; r--;
            l = (l + si) % n;
            r = (r + si) % n;
            ll ans;
            if (l <= r) ans = s[r + 1] - s[l];
            else ans = s[n] - (s[l] - s[r + 1]);
            cout << ans << '\n';
        }
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
// #define rall(x) (x).rbegin(),(x).rend()
// #define chmin(x, y) x = min(x, y)
// #define chmax(x, y) x = max(x, y)
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     int N, Q;
//     cin >> N >> Q;
//     vector<ll> A(N), B(N + N + 1);
//     rep(i, 0, N) cin >> A[i];

//     rep(i, 0, N + N) B[i + 1] = A[i % N] + B[i];

//     int move = 0;

//     rep(qi, 0, Q) {
//         int query;
//         cin >> query;
//         if (query == 1) {
//             int c;
//             cin >> c;
//             move += c;
//             move %= N;

//         } else {
//             int l, r;
//             cin >> l >> r;
//             l--;
//             l += move; r += move;
//             cout << B[r] - B[l] << endl;;
//         }
//     }
//     return 0;
// }