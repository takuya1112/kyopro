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
    int X;
    cin >> X;

    int ans = 1;
    rep(b, 2, X + 1) {
        int power = b * b;
        while (power <= X) {
            ans = max(ans, power);
            power *= b;
        }
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
// #define rall(x) (x).rbegin(),(x).rend()
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     int X;
//     cin >> X;

//     int ans = 0;
//     rep(b, 1, 100) {
//         rep(p, 2, 100) {
//             int x = pow(b, p);
//             if (x > X) break;
//             if (x <= X) ans = max(ans, x);
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }