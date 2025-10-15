#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    string S; cin >> S;
    int Q; cin >> Q;

    auto g = [&](char s, ll add) {
        return char('A' + (s - 'A' + add) % 3);
    };

    function<char(ll, ll)> f = [&](ll t, ll k) {
        if (t == 0) return S[k];
        if (k == 0) return g(S[0], t);
        return g(f(t - 1, k / 2), k % 2 + 1);
    };

    while(Q--) {
        ll t, k; cin >> t >> k;
        cout << f(t, k - 1) << endl;
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
//     string S; int Q;
//     cin >> S >> Q;
//     rep(qi, 0, Q) {
//         ll t, k;
//         cin >> t >> k;
//         k--;
//         int si = 0;
//         if (t <= 60) {
//             ll b = 1LL << t;
//             si = k / b;
//             k %= b;
//         }
//         ll r = __builtin_popcountll(k);
//         ll l = t - r;
//         ll x = l + r * 2 + (S[si] - 'A');
//         char ans = 'A' + (x % 3);
//         cout << ans << endl;
//     }
//     return 0;
// }