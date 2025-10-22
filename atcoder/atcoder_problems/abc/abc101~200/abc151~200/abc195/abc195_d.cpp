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
using P = pair<int, int>;

int main() {
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> w(n), v(n), x(m);
    rep(i, 0, n) cin >> w[i] >> v[i];
    rep(i, 0, m) cin >> x[i];

    rep(qi, 0, q) {
        int l, r;
        cin >> l >> r;
        l--; r--;
        vector<int> as;
        rep(i, 0, m) if (i < l || r < i) as.push_back(x[i]);
        sort(all(as));
        vector<bool> used(n);
        int ans = 0;
        for (int a : as) {
            P best(-1, -1);
            rep(i, 0, n) {
                if (used[i]) continue;
                if (w[i] > a) continue;
                best = max(best, P(v[i], i));
            }
            int i = best.second;
            if (i == -1) continue;
            used[i] = true;
            ans += v[i];
        }
        cout << ans << endl;
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
// #define rall(x) (x).rbegin(),(x).rend()
// #define chmin(x, y) x = min(x, y)
// #define chmax(x, y) x = max(x, y)
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     int N, M, Q;
//     cin >> N >> M >> Q;
//     vector<int> W(N), V(N), X(M);
//     rep(i, 0, N) cin >> W[i] >> V[i];
//     rep(i, 0, M) cin >> X[i];

//     rep(qi, 0, Q) {
//         int l, r;
//         cin >> l >> r;
//         l--; r--;
//         vector<int> x;
//         rep(i, 0, M) {
//             if (l <= i && i <= r) continue;
//             x.push_back(X[i]); 
//         }

//         int ans = 0;
//         vector<bool> used(M);
//         int n = x.size();
//         auto f = [&](auto f, int idx, int res) {
//             if (idx == n) {
//                 ans = max(ans, res);
//                 return;
//             }
//             rep(i, 0, M) {
//                 if (W[i] <= x[idx] and !used[i]) {
//                     used[i] = true;
//                     f(f, idx + 1, res + V[i]);
//                     used[i] = false;
//                 }
//             }
//         };
//         f(f, 0, 0);
//         cout << ans << endl;
//     }
//     return 0;
// }