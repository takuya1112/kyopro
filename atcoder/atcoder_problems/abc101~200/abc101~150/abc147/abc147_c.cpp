#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int g[15][15];

int main() {
    int n; 
    cin >> n;
    rep(i, n) rep(j, n) g[i][j] = -1;
    rep(i, n) {
        int m;
        cin >> m;
        rep(j, m) {
            int a, x;
            cin >> a >> x;
            --a;
            g[i][a] = x;
        }
    }

    int ans = 0;
    rep(i, 1 << n) {
        vector<int> d(n);
        rep(j, n) if (i >> j & 1) {
            d[j] = 1;
        }
        bool ok = true;
        rep(j, n) {
            if (d[j]) {
                rep(k, n) {
                    if (g[j][k] == -1) continue;
                    if (g[j][k] != d[k]) ok = false;
                }
            }
        }
        if (ok) ans = max(ans, __builtin_popcount(i));
    }
    cout << ans << endl;
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i,n) for (int i = 0; i < (n); ++i)
// #define Pint pair<int, int>

// int main() {
//     int N; 
//     cin >> N;
//     int ALL = 1 << N -1;

//     vector<vector<Pint>> A(N, vector<Pint>());
//     rep(i, N) {
//         int a;
//         cin >> a;
//         rep(j, a) {
//             int x, y;
//             cin >> x >> y;
//             x --;
//             A[i].push_back(make_pair(x, y));
//         }
//     }


//     int ans = 0;
//     rep(bit, 1 << N) {
//         bool ok = true;
//         rep(i, N) {
//             if (bit >> i & 1) {
                
//             }
//         }
//         if (ok) cout << __builtin_popcount(bit) << endl;
//     }
//     return 0;
// }