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

ll c2(ll n) {
    return n * (n - 1) / 2;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) a[i]--;

    vector<int> cnt(n);
    rep(i, 0, n) cnt[a[i]]++;

    ll ans = 0;
    rep(i, 0, n) {
        ans += c2(cnt[i]) * (n - cnt[i]);
    }
    cout << ans << endl;
    return 0;
}

// my code worng ans 
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
//     int N;
//     cin >> N;
//     vector<ll> A(N);
//     rep(i, 0, N) cin >> A[i];

//     map<ll, ll> mp;
//     rep(i, 0, N) mp[A[i]]++;

//     vector<ll> cnt;
//     for (auto [x, y] : mp) {
//         cnt.push_back(y);
//     }

//     sort(all(cnt));
//     ll ans = 0;
//     ll sum = 0;
//     rep(i, 0, cnt.size()) {
//         if (cnt[i] == 2) {
//             ans += sum;
//         } else if (cnt[i] > 2) {
//             ans += cnt[i] * sum;
//         }
//         sum += cnt[i];
//     }
//     cout << ans << endl;
//     return 0;
// }