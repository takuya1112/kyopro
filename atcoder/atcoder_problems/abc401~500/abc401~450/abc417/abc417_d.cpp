#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int n;
    cin >> n;
    vector<int> p(n), a(n), b(n);
    rep(i, 0, n) cin >> p[i] >> a[i] >> b[i];
    const int m = 1001;
    vector dp(n+1, vector<int>(m));
    rep(i, 0, m) dp[n][i] = i;
    rrep(i, n-1, 0) {
        rep(j, 0, m) {
            int nj = j;
            if (j <= p[i]) nj = j + a[i]; else nj = max(0, j - b[i]);
            dp[i][j] = dp[i+1][nj];
        }
    }

    vector<int> bs(n+1);
    rep(i, 0, n) bs[i+1] = bs[i] + b[i];

    int q;
    cin >> q;
    rep(qi, 0, q) {
        int x;
        cin >> x;
        int ans;
        if (x >= m) {
            int i = upper_bound(bs.begin(), bs.begin() + n, x-m) - bs.begin();
            x -= bs[i];
            if (i < n) ans = dp[i][x];
            else ans = x;
        } else {
            ans = dp[0][x];
        }
        cout << ans << '\n';
    }
    return 0;
}



// mycode worng ans
// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i = a; i >= b; i--)
// #define all(x) (x).begin(),(x).end()
// typedef long long ll; const int inf = INT_MAX / 2;


// int N;
// vector<int> P(10010), A(10010), B(10010);

// void f(ll x) {
//     ll res = x;
//     rep(i, 0, N) {
//         if (P[i] >= res) res += A[i];
//         else if (P[i] < res) res = max(res - B[i], 0LL);
//     }
//     cout << res << endl;
// }

// int main() {
//     cin >> N;
//     rep(i, 0, N) {
//         cin >> P[i] >> A[i] >> B[i];
//     }

//     int Q;
//     cin >> Q;
//     rep(i, 0, Q) {
//         ll X; cin >> X;
//         f(X);
//     }
//     return 0;
// }