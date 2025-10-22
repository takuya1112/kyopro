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

// ll s(ll r) {
//     return sqrtl(r);
// }

ll s (ll r) {
    ll ac = 0, wa = 2e9;
    while(ac + 1 < wa) {
        ll wj = (ac + wa) / 2;
        if (wj * wj <= r) ac = wj; else wa = wj;
    }
    return ac;
}

ll s(ll l, ll r) {
    return s(r) - s(l-1);
}

ll g(ll c, ll r) {
    ll res = 0;
    for (ll l = 1;; l *= 10) {
        ll base = c * l * 10;
        ll nl = base + l, nr = base + (l * 10 - 1);
        nr = min(nr, base + r);
        if (nr < nl) return res;
        res += s(nl, nr);
    }
}

void solve() {
    ll c, d;
    cin >> c >> d;
    ll ans = g(c, c + d) - g(c, c);
    cout << ans << '\n';
}

int main() {
    int T;
    cin >> T;
    rep(ti, 0, T) solve();
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

// ll f (ll x) {
//     ll y = sqrt(x);
//     while (y * y > x) y--;
//     while ((y + 1) * (y + 1) <= x) y++;
//     return y;
// }

// ll solve(ll c, ll d) {
//     ll ans = 0;

//     ll xmin = 1, xmax = 9, cshift = 10;
//     while (xmin <= c + d) {
//         ll l = max(xmin, c + 1);
//         ll r = min(xmax, c + d);

//         if (l <= r) {
//             ll vl = c * cshift + l;
//             ll vr = c * cshift + r;

//             ans += (f(vr) - f(vl - 1));
//         }

//         xmin = xmin * 10;
//         xmax = (xmax + 1) * 10 - 1;
//         cshift *= 10;
//     }

//     return ans;
// } 

// int main() {
//     int T;
//     cin >> T;

//     rep(ti, 0, T) {
//         ll c, d;
//         cin >> c >> d;
//         ll ans = solve(c, d);
//         cout << ans << "\n";
//     }
//     return 0;
// }

// mycode wrong ans
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


// void solve() {
//     ll C, D;
//     cin >> C >> D;

//     auto check = [&](ll low, ll high) -> ll{
//         ll l = sqrtl(low - 1);
//         ll h = sqrtl(high);
//         return h - l;
//     };

//     auto f = [&](ll c, ll r) -> ll {
//         ll res = 0;
//         for (ll l = 1 ;; l *= 10) {
//             ll base = C * l * 10;
//             ll L = base + l, R = base + (l * 10 - 1);
//             R = min(R, base + r);
//             if (L > R) return res;
//             res += check(L, R);
//         }
//     };

//     ll ans = 0;
//     ans += f(C, C + D) - f(C, C);
//     cout << ans << '\n';
// }

// int main() {
//     int T;
//     cin >> T;
//     rep(ti, 0, T) solve();
//     return 0;
// }