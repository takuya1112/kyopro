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
    int n, R;
    cin >> n >> R;
    vector<int> L(n);
    rep(i, 0, n) cin >> L[i];
    R--;

    int l = R, r = R;
    rep(i, 0, n) {
        if (L[i] == 1) continue;
        l = min(l, i - 1);
        r = max(r, i);
    }

    int ans = 0;
    for (int i = l + 1; i <= r; i++) {
        ans += L[i] + 1;
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
//     int N, R;
//     cin >> N >> R;
//     vector<int> L(N);
//     rep(i, 0, N) cin >> L[i];

//     int first = 0, last = N;

//     rep(i, 0, N) {
//         if (L[i] == 0) break;
//         first++;
//     }

//     rrep(i, N-1, 0) {
//         if (L[i] == 0) break;
//         last--;
//     }

//     if (last < first) {
//         cout << 0 << endl;
//         return 0;
//     }
//     ll ans = 0;
//     rep(i, first, last) {
//         if (L[i]) ans+= 2;
//         else ans++;
//     }

//     if (R < first) ans += 2 * (first - R);
//     else if (last < R) ans += 2 * (R - last);
//     cout << ans << endl;
//     return 0;
// }