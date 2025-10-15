#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
typedef long long ll; const ll inf = 1e18;
#define chmin(x, y) x = min(x, y)


using pint = pair<int, int>;

ll dp[20][20];

vector<ll> calc(vector<pint>& a) {
    int n = a.size();
    sort(all(a));
    rep(i, 0, n + 1) rep(j, 0, n + 1) dp[i][j] = inf;
    dp[0][0] = 0;
    rep(l, 0, n) {
        for (int r = l + 1; r <= n; ++r) {
            {
            ll now = inf;
            for (int k = l; k < r; ++k) {
                ll s = 0;
                for (int i = l; i < r; ++i) {
                    s += abs(a[i].first - a[k].first) * ll(a[i].second);
                }
                chmin(now, s);
            }
            rep(j, 0, n) chmin(dp[r][j + 1], dp[l][j] + now);
            }
            {
                ll now = 0;
                for (int i = l; i < r; ++i) {
                    now += abs(a[i].first) * ll(a[i].second);
                }
                rep(j, 0, n + 1) chmin(dp[r][j], dp[l][j] + now);
            }
        }
    }
    vector<ll> res(n + 1, inf);
    rep(j, 0, n + 1) res[j] = dp[n][j];
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> x(n), y(n), p(n);
    rep(i, 0, n) cin >> x[i] >> y[i] >> p[i];
    vector<ll> ans(n + 1, inf);
    rep(bit, 0, 1 << n) {
        vector<pint> ax, ay;
        rep(i, 0, n) {
            if (bit >> i & 1) ax.emplace_back(x[i], p[i]);
            else ay.emplace_back(y[i], p[i]);
        }
        vector<ll> dx = calc(ax);
        vector<ll> dy = calc(ay);
        rep(i, 0, dx.size()) rep(j, 0, dy.size()) {
            ans[i + j] = min(ans[i + j], dx[i] + dy[j]);
        }
    }
    rep(i, 0, n + 1) cout << ans[i] << endl;
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
// #define rall(x) (x).rbegin(),(x).rend()
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     int N;
//     cin >> N;
//     vector<ll> X(N), Y(N), P(N);
//     rep(i, 0, N) cin >> X[i] >> Y[i] >> P[i];

//     vector<ll> MX(N, inf);
    
//     rep(i, 0, N) {
//         ll d = min(abs(X[i]), abs(Y[i]));
//         MX[i] = min(MX[i], P[i] * d);
//     }

    
//     vector<ll> ans(N + 1, inf);
//     rep(bit, 0, 1 << N) {
//         vector<int> use;
//         rep(i, 0, N) if (bit >> i & 1) use.push_back(i);
        
//         int n = __builtin_popcount(bit);
//         ll res = inf;
        
//         rep(bit2, 0, 1 << n) {
//             vector<ll> v = MX;
//             rep(i, 0, n) {
//                 if (bit2 >> i & 1) {
//                     int xi = X[use[i]];
//                     rep(j, 0, N) {
//                         ll d = abs(xi - X[j]);
//                         v[j] = min(v[j], P[j] * d);
//                     }
//                 } else {
//                     int yi = Y[use[i]];
//                     rep(j, 0, N) {
//                         ll d = abs(yi - Y[j]);
//                         v[j] = min(v[j], P[j] * d);
//                     }
//                 }
//             }

//             ll sum = 0;
//             rep(i, 0, N) sum += v[i];
//             res = min(res, sum);
//         }
//         ans[n] = min(ans[n], res);
//     }

//     rep(i, 0, N + 1) cout << ans[i] << '\n';  
//     return 0;
// }