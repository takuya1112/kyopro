#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
typedef long long ll; const int inf = INT_MAX / 2;

static const int MMAX = 20;
static const int NMAX = 50000;
static const int INFTY = (1 << 29);

int main() {
    int n, m;
    int C[MMAX + 1];
    int T[NMAX + 1];

    cin >> n >> m;

    for (int i = 1; i <= m; i++) cin >> C[i];

    rep(i, 0, NMAX + 1) T[i] = INFTY;
    T[0] = 0;

    for (int i = 1; i <= m; i++) {
        for (int j = 0; j + C[i] <= n; j++) {
            T[j + C[i]] = min(T[j + C[i]], T[j] + 1);
        }
    }
    cout << T[n] << endl;
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i = a; i >= b; i--)
// #define all(x) (x).begin(),(x).end()
// #define rall(x) (x).rbegin(),(x).rend()
// #define chmin(x, y) x = min(x, y)
// #define chmax(x, y) x = max(x, y)
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     int n, m;
//     cin >> n >> m;
//     vector<int> c(m);
//     rep(i, 0, m) cin >> c[i];

//     vector<int> dp(n + 1, inf);
//     dp[0] = 0;

//     rep(i, 0, m) {
//         rep(j, 0, n + 1) {
//             if (j >= c[i]) {
//                 dp[j] = min(dp[j - c[i]] + 1, dp[j]);
//             } else dp[j] = dp[j];
//         }
//     }

//     cout << dp[n] << endl;
//     return 0;
// }