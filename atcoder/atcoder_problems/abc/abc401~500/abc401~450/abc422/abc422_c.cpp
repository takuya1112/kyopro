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

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    auto judge = [&](int x) -> bool {
        if (a < x || c < x) return false;
        int s = (a - x) + b + (c - x);
        return s >= x;
    };

    int ac = 0, wa = a + 1;
    while (wa - ac > 1) {
        int wj = (ac + wa) / 2;
        if (judge(wj)) ac = wj; else wa = wj;
    }
    cout << ac << '\n';
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


// void solve() {
//     int n = 3;
//     vector<int> num(3), a;
//     rep(i, 0, 3) cin >> num[i];

//     a = num;
//     sort(all(a));

//     ll ans = 0;
//     if (num[1] == a[2] || num[1] == a[1]) {
//         cout << a[0] << endl;
//     } else {
//         ans += a[0];
//         rep(i, 0, n) num[i] -= a[0];
//         int A = num[0], C = num[2], D = (A + C) / 3;

//         int cnt = 0;
//         cnt += min(D, min(A, C));

//         ans += cnt; 
//         cout << ans << endl;
//     }
// }


// int main() {
//     int T;
//     cin >> T;
//     rep(ti, 0, T) solve();
//     return 0;
// }