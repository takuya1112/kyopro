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
    ll n;
    cin >> n;

    ll x = 1000;
    ll ans = 0;
    while (n >= x) {
        ans += n - x + 1;
        x *= 1000;
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

// int digit(ll x) {
//     int cnt = 0;
//     while (x) {
//         cnt++;
//         x /= 10;
//     }
//     return cnt - 1;
// }

// int main() {
//     ll N;
//     cin >> N;

//     int keta = digit(N);
    
//     ll ans = 0;
//     rep(i, 0, keta) {
//         int comma = i / 3;
//         ll n = 9;
//         rep (j, 0, i) n *= 10;
//         ans += n * comma;
//         N -= n;
//     }

//     ans += N * (keta / 3);
//     cout << ans << endl;
//     return 0;
// }