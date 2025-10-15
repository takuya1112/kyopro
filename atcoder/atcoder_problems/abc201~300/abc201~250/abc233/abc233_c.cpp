#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int n, ans; 
ll X;
vector<vector<int>> a;
void dfs(int i, ll s) {
    if (i == n) {
        if (s == X) ans++;
        return;
    }

    rep(j, 0, a[i].size()) {
        if (s > X / a[i][j]) continue;
        dfs(i+1, s*a[i][j]);
    } 
}

int main() {
    cin >> n >> X;
    a = vector<vector<int>>(n);
    rep(i, 0, n) {
        int l; cin >> l;
        a[i] = vector<int>(l);
        rep(j, 0, l) cin >> a[i][j];
    }
    dfs(0, 1);
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
// typedef long long ll; const int inf = INT_MAX / 2;


// ll N, X, ans = 0;
// vector<vector<ll>> A;

// void f(ll x, int n) {
//     if (x > X) return;
//     if (n == N) {
//         if (x == X) ans++;
//         return;
//     }
//     rep(i, 0, A[n].size()) {
//         f(x * A[n][i], n+1);
//     }
// }


// int main() {
//     cin >> N >> X;
//     rep(i, 0, N) {
//         int L; cin >> L;
//         vector<ll> a(L);
//         rep(j, 0, L) {
//             cin >> a[j];
//         }
//         A.push_back(a);
//     }
//     f(1, 0);
//     cout << ans << endl;
//     return 0;
// }