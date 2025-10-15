#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    vector<ll> values;
    auto rec = [&](auto rec, ll val) -> void {
        values.push_back(val);

        if (val % 10 == 0) return;
        rep(i, 0, val % 10) {
            ll val2 = val * 10 + i;
            rec(rec, val2);
        }
    };

    rep(v, 1, 10) rec(rec, v);
    sort(all(values));
    
    ll k;
    cin >> k;
    cout << values[k - 1] << endl;
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
//     int K;
//     cin >> K;

//     vector<ll> ans;
//     auto f = [&](auto f, ll x) -> void {
//         ans.push_back(x);
//         int d = x % 10;
//         rep(i, 0, d) {
//             f(f, 10 * x + i);
//         }
//     };

//     rep(i, 1, 10) {
//         f(f, i);
//     }
//     sort(all(ans));
//     cout << ans[K - 1] << endl;
//     return 0;
// }