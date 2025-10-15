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
    int H, W;
    cin >> H >> W;
    vector<string> a(H);
    rep(i, 0, H) cin >> a[i];

    vector<string> S(H+2, string(W+2, '#'));

    rep(i, 1, H+1) {
        rep(j, 1, W + 1) {
            S[i][j] = a[i-1][j-1];
        }
    }
    rep(i, 0, H+2) cout << S[i] << endl;
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
//     int H, W;
//     cin >> H >> W;
//     vector<string> A(H);
//     rep(i, 0, H) cin >> A[i];

//     string s(W+2, '#');
//     vector<string> ans(H+2, s);

//     rep(i, 0, H) {
//         rep(j, 0, W) {
//             ans[i+1][j+1] = A[i][j];
//         }
//     }

//     rep(i, 0, H+2) {
//         cout << ans[i] << endl;
//     }
//     return 0;
// }