#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
typedef long long ll; const int inf = INT_MAX / 2;

static const int N = 1000;

int lcs(string X, string Y) {
    int c[N + 1][N + 1];
    int m = X.size();
    int n = Y.size();
    int maxl = 0;
    X = ' ' + X;
    Y = ' ' + Y;
    for (int i = 0; i <= m; i++) c[i][0] = 0;
    for (int j = 1; j <= n; j++) c[0][j] = 0;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (X[i] == Y[j]) {
                c[i][j] = c[i - 1][j - 1] + 1;
            } else {
                c[i][j] = max(c[i - 1][j], c[i][j - 1]);
            }
            maxl = max(maxl, c[i][j]);
        }
    }   
    return maxl;
}

int main() {
    string s1, s2;
    int n; cin >> n;
    rep(i, 0, n) {
        cin >> s1 >> s2;
        cout << lcs(s1, s2) << endl;
    }
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

// int solve() {
//     string x, y;
//     cin >> x >> y;

//     vector<vector<int>> dp(x.size() + 1, vector<int> (y.size() + 1));
//     rep(i, 0, x.size()) {
//         int mx = 0;
//         rep(j, 0, y.size()) {
//             dp[i + 1][j + 1] = dp[i][j + 1];
//             mx = max(mx, dp[i][j]);
//             if (x[i] == y[j]) {
//                 dp[i + 1][j + 1] = mx + 1;
//             }
//         }
//     }

//     int mx = 0;
//     rep(i, 0, y.size() + 1) mx = max(mx, dp[x.size()][i]);
//     return mx;
// }


// int main() {
//     int q;
//     cin >> q;
//     rep(qi, 0, q) cout << solve() << endl;
//     return 0;
// }