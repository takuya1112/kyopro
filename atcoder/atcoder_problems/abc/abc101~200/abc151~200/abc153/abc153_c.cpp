#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll;

int main() {
    int n, k; cin >> n >> k;
    vector<int> h(n);
    rep(i, 0, n) cin >> h[i];
    sort(all(h));
    k = min(n, k);
    ll ans = 0;
    rep(i, 0, k) {
        h.pop_back();
    }

    rep(i, 0, h.size()) ans += h[i]; 
    cout << ans << endl;

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

// int main() {
//     int N, K;
//     cin >> N >> K;
//     vector<int> H(N);
//     rep(i, 0, N) cin >> H[i];
//     sort(all(H), greater<>());
//     ll ans = 0;
//     rep(i, K, N) {
//         ans += H[i];
//     }
//     cout << ans << '\n';
//     return 0;
// }