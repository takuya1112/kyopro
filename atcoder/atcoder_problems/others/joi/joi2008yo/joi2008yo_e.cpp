#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int H, W;
    cin >> H >> W;
    vector fi(H, vector(W, 0));
    rep(i, H) rep(j, W) cin >> fi[i][j];

    int res = 0;
    rep(bit, 1 << H) {
        auto fi2 = fi;
        rep(i, H) {
            if (!(bit >> i & 1)) continue;
            rep(j, W) fi2[i][j] = 1 - fi2[i][j];
        }

        int tmp = 0;
        rep(j, W) {
            int num = 0;
            rep(i, H) if (fi2[i][j] == 0) num++;
            tmp += max(num, H-num);
        }
        res = max(res, tmp);
    }
    cout << res << endl;
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i,n) for (int i = 0; i < (n); ++i)

// int main() {
//     int R, C;
//     cin >> R >> C;
//     int A[R][C];
//     rep(i, R) rep(j, C) cin >> A[i][j];

//     int ans = 0;
//     rep(bit, 1 << R) {
//         int a[R][C];
//         rep(i, R) rep(j, C) a[i][j] = A[i][j];
//         rep(i, R) {
//             if (bit >> i & 1) {
//                 rep(c, C) {
//                     a[i][c] ^= 1;
//                 }
//             }
//         }

//         rep(c, C) {
//             int check = 0;
//             rep(r, R) {
//                 check += a[r][c];
//             }
//             if (check > R / 2) {
//                 rep(r, R) {
//                     a[r][c] ^= 1;
//                 }
//             }
//         }

//         int res = R * C;
//         rep(i, R) rep(j, C) res -= a[i][j];
//         ans  = max(res, ans);
//     }
//     cout << ans << endl;
//     return 0;
// }