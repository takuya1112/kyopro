#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int N, P, ans = 0;
    cin >> N >> P;
    rep(i, 0, N) {
        int a; cin >> a;
        if (a < P) ans++;
    }
    cout << ans << '\n';
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
//     int N, P; cin >> N >> P;
//     int ans = 0;
//     rep(i, 0, N) {
//         int a; cin >> a;
//         if (a < P) ans++;
//     } 
//     cout << ans << endl;
//     return 0;
// }