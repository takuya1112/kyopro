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
    int n, k;
    cin >> n >> k;
    vector<int> a(k);
    rep(i, 0, k) cin >> a[i];
    rep(i, 0, k) a[i]--;

    vector<int> x(n), y(n);
    rep(i, 0, n) cin >> x[i] >> y[i];

    vector<double> r(n);
    rep(i, 0, n) {
        r[i] = 1e18;
        rep(j, 0, k) {
            double dx = x[i] - x[a[j]];
            double dy = y[i] - y[a[j]];
            double dist = sqrt(dx * dx + dy * dy);
            r[i] = min(r[i], dist);
        }
    }

    double ans = 0;
    rep(i, 0, n) ans = max(ans, r[i]);
    printf("%.10f\n", ans);
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
//     int N, K;
//     cin >> N >> K;
//     set<int> A;
//     rep(i, 0, K) {
//         int a;
//         cin >> a;
//         a--;
//         A.insert(a);
//     }
//     vector<ll> X(N), Y(N);
//     rep(i, 0, N) cin >> X[i] >> Y[i];


//     vector<double> ans(N, DBL_MAX);
//     rep(i, 0, N) {
//         if (A.count(i)) continue;
//         rep(j, 0, N) {
//             if (A.count(j)) {
//                 ll x = (X[i] - X[j]) * (X[i] - X[j]);
//                 ll y = (Y[i] - Y[j]) * (Y[i] - Y[j]);
//                 ans[i] = min(sqrt(x + y), ans[i]);
//             }
//         }
//     }
//     double res = 0;
//     rep(i, 0, N) {
//         if (A.count(i)) continue;
//        res = max(ans[i], res); 
//     } 
//     printf("%.12lf\n", res);
//     return 0;
// }