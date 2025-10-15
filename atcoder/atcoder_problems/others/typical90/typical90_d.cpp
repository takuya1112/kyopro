#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<int>> A(H, vector<int>(W));
    rep(i, 0, H) rep(j, 0, W) {
        cin >> A[i][j];
    }

    vector<int> row(H, 0);
    vector<int> col(W, 0);

    rep(i, 0, H) {
        rep(j, 0, W) {
            row[i] += A[i][j];
            col[j] += A[i][j];
        }
    }

    rep(i, 0, H) {
        rep(j, 0, W) {
            cout << row[i] + col[j] - A[i][j] << " ";
        }
        cout << '\n';
    }
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

// int main() {
//     int H, W;
//     cin >> H >> W;
//     int A[H][W];
//     rep(i, 0, H) rep(j, 0, W) {
//         cin >> A[i][j];
//     }

//     vector<vector<int>> B(H, vector<int>(W));
//     rep(i, 0, H) {
//         int row_s = 0;
//         rep(j, 0, W) {
//             row_s += A[i][j];

//         }
//         rep(j, 0, W) {
//             B[i][j] += row_s;
//         }
//     }

//     rep(i, 0, W) {
//         int col_s = 0;
//         rep(j, 0, H) {
//             col_s += A[j][i];
//         }

//         rep(j, 0, H) {
//             B[j][i] += col_s;
//         }
//     }

//     rep(i, 0, H) {
//         rep(j, 0, W) {
//             if (j) cout << " ";
//             cout << B[i][j] - A[i][j]; 
//         }
//         cout << '\n';
//     }
//     return 0;
// }