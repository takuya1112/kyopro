#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll;

int main() {
    int N, K;
    cin >> N >> K;

    ll m = 1;
    rep(i, 0, K) m *= 10;

    ll x = 1;
    rep(i, 0, N) {
        ll a; cin >> a;
        if ((m-1) / x < a) x = 1;
        else x *= a;
    }
    cout << x << endl;
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i=a;i>=b;i--)
// #define all(x) (x).begin(),(x).end()
// typedef long long ll;

// int count(ll x) {
//     int cnt = 0;
//     while (x > 0) {
//         x /= 10;
//         cnt ++;
//     }
//     return cnt;
// }

// int main() {
//     int N, K;
//     cin >> N >> K;
//     ll ans = 1;
//     rep(i, 0, N) {
//         ll a; cin >> a;
//         ans *= a;
//         if (count(ans) > K) ans = 1;
//     }
//     cout << ans << endl;
//     return 0;
// }