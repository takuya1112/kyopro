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
    int A, B;
    cin >> A >> B;
    rep(x, 1, 1500) {
        int a = x * 8 / 100;
        int b = x * 10 / 100;
        if (a == A && b == B) {
            cout << x << endl;
            return 0;
        }
    }
    cout << -1 << endl;
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
//     int A, B;
//     cin >> A >> B;

//     int ans = inf;

//     rep(i, 0, 1500) {
//         int a = i * 0.08;
//         int b = i * 0.1;
//         if (a == A && b == B) ans = min(ans, i);
//     }
//     if (ans == inf) cout << -1 << endl;
//     else cout << ans << endl;
//     return 0;
// }