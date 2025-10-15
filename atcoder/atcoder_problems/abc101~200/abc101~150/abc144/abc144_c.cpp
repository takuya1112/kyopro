#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    ll n;
    cin >> n;

    ll ans = 1e18;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i != 0) continue;
        ll j = n / i;
        ans = min(ans, i + j - 2);
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
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     ll N; cin >> N;

//     ll ans = LONG_LONG_MAX;

//     rep(i, 1, sqrt(N) + 1) {
//         if (N % i == 0) {
//             ll j = N / i;
//             ll tmp = (i - 1) + (j - 1);
//             ans = min(ans, tmp);
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }