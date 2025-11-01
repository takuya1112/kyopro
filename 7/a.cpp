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

const int MAX = 10010;

int main() {
    int n, A;
    cin >> n >> A;
    vector<int> a(n), m(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> m[i];

    vector<vector<int>> dp(n + 1, vector<int>(MAX, 0));
    dp[0][0] = 1;

    rep(i, 0, n) {
        rrep(j, A, 0) {
            dp[i + 1][j] = dp[i][j];
            if (j >= a[i]) {
                dp[i + 1][j] = dp[i][j] | dp[i][j - a[i]];
                dp[i + 1][j] |= dp[i + 1][j - a[i]];   
            }
        }
    }

    rep(i, 0, n + 1) {
        rep(j, 0, A + 1) {
            cout << dp[i][j] << ' ';
        } cout << endl;
    } cout << endl;

    if (dp[n][A]) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}