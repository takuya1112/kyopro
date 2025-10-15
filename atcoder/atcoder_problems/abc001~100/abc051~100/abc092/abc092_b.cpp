#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int N, D, X;
    cin >> N >> D >> X;

    int ans = X;
    rep(i, 0, N) {
        int a; cin >> a;
        int tmp = (D - 1) / a + 1;
        ans += tmp;
    }
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

// int main() {
//     int N, D, X, cnt = 0;
//     cin >> N >> D >> X;
//     rep(i, 0, N) {
//         int a; cin >> a;
//         int d = 1;
//         while (d <= D) {
//             d += a;
//             cnt ++;
//         }
//     }
//     cout << cnt + X << endl;
//     return 0;
// }