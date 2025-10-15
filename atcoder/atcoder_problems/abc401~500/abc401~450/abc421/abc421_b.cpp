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
    int n = 10;
    vector<ll> a(n);
    cin >> a[0] >> a[1];
    rep(i, 2, n) {
        ll x = a[i - 1] + a[i - 2];
        string sx = to_string(x);
        reverse(all(sx));
        a[i] = stoll(sx);
    }

    cout << a[9] << endl;
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

// ll rev(ll n) {
//     ll m = 0;
//     while (n) {
//         m *= 10;
//         m += n % 10;
//         n /= 10;
//     }
//     return m;
// }

// int main() {
//     ll x, y;
//     cin >> x >> y;
    
//     vector<ll> ans(10);
//     ans[0] = x; ans[1] = y;
//     rep(i, 2, 10) {
//         ll n = ans[i - 1] + ans[i - 2];
//         ans[i] = rev(n);
//     }
    
//     cout << ans[9] << endl;
//     return 0;
// }