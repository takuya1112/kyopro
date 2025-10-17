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

int main() {
    int a, b, w;
    cin >> a >> b >> w;
    w *= 1000;

    int l = inf, r = 0;
    rep (n, 1, w + 1) {
        if (a * n <= w && w <= b * n) {
            l = min(l, n);
            r = max(r, n);
        }
    }
    if (l == inf) cout << "UNSATISFIABLE" << endl;
    else cout << l << ' ' << r << endl;
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
// #define chmin(x, y) x = min(x, y)
// #define chmax(x, y) x = max(x, y)
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     int A, B, W;
//     cin >> A >> B >> W;
//     W *= 1000;

//     auto calMin = [&]() -> int {
//         int mn = W / B;
//         int remainder = W % B;
//         if (remainder == 0) return mn;

//         rep(i, 1, mn + 1) {
//             remainder += B;
//             int cnt = remainder / A + 1;
//             rep(j, 1, cnt + 1) {
//                 int res = remainder / j;
//                 if (remainder % j == 0 && res == B) return mn - i + j; 

//                 if (A <= res && res < B) {
//                     return mn - i + j;   
//                 }
//             }
//         }
//         return -1;
//     };

//     auto calMax = [&]() -> int {
//         int mx = W / A;
//         int remainder = W % A;
//         if (remainder == 0) return mx;

//         rep(i, 1, mx + 1) {
//             remainder += A;
//             int cnt = remainder / A + 1;
//             rep(j, 1, cnt + 1) {
//                 int res = remainder / j;
//                 if (remainder % j == 0 && res == B) return mx - i + j;

//                 if (A <= res && res < B) {
//                     return mx - i + j;
//                 }
//             }
//         }
//         return -1;
//     };
    
//     int mn = calMin(), mx = calMax();
//     if (mn == -1 && mx == -1) cout << "UNSATISFIABLE" << endl;
//     else cout << mn << ' ' << mx << endl;
//     return 0;
// }