#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

void chmin(int& a, int b) { a = min(a, b);}

int main() {
    int n, m, l;
    cin >> n >> m >> l;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];

    vector cost(l, vector<int>(m));
    rep(i, 0, n) {
        int g = i % l;
        rep(j, 0, m) {
            cost[g][(a[i] + j) % m] += j;
        }
    }

    vector<int> dp(m, inf);
    dp[0] = 0;

    rep(i, 0, l) {
        vector<int> old(m, inf);
        swap(old, dp);
        rep(j, 0, m) rep(k, 0, m) {
            chmin(dp[(j + k) % m], old[j] + cost[i][k]);
        }
    }
    cout << dp[0] << endl;
    return 0;
}


// 3 5 7 4 1 
// 3 4 0 1 2 
// 4 0 1 2 3 

// mycode worng ans
// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i = a; i >= b; i--)
// #define all(x) (x).begin(),(x).end()
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     int N, M, L;
//     cin >> N >> M >> L;
//     vector<int> A(N);
//     rep(i, 0, N) cin >> A[i];
//     int ans = inf;

//     auto f = [&](auto f, int idx, int s, int res) {
//         rep(i, 0, N) cout << A[i] << " ";
//         cout << '\n';
//         if (idx == N - L) {
//             ans = min(ans, res);
//             return;
//         }

//         if (s % M == 0) {
//             idx ++;
//             s = 0;
//             rep(i, idx, idx + L) {
//                 s += A[i];
//             }
//         }

//         rep(i, idx, idx + L) {
//             rep(j, 0, M - (s % M)) {
//                 A[i] ++;
//                 f(f, idx, s + 1, res + 1);
//                 A[i] --;
//             }
//         }
//     };

//     int s = 0;
//     rep(i, 0, L) s += A[i];
//     f(f, 0, s, 0);
//     cout << ans << endl;
//     return 0;
// }