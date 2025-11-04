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

const int MAX = 20;

int main() {
    ll N, S;
    cin >> N;
    N--;
    vector<ll> A(N);
    rep(i, 0, N) cin >>A[i];
    cin >> S;

    vector<ll> dp(MAX + 1, 0);
    dp[A[0]] = 1;

    rep(i, 1, N) {
        vector<ll> nex(MAX + 1, 0);
        rep(j, 0, MAX + 1) {
            if (j + A[i] >= 0 && j + A[i] <= MAX) nex[j + A[i]] += dp[j];
            if (j - A[i] >= 0 && j - A[i] <= MAX) nex[j - A[i]] += dp[j];
        }
        swap(dp, nex);
    }

    cout << dp[S] << endl;
    return 0;
}