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
    ll Q, H, S, D, N;
    cin >> Q >> H >> S >> D >> N;

    Q *= 4;
    H *= 2;

    ll X = min(S, min(H, Q));

    ll ans = 0;
    if (2 * X <= D) ans += X * N;
    else ans += D * (N / 2) + X * (N % 2);
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
//     ll Q, H, S, D, N;
//     cin >> Q >> H >> S >> D >> N;

//     Q *= 4;
//     H *= 2;

//     ll one = min(Q, min(H, S));
    
//     ll ans = 0;
//     if (one * 2 <= D) {
//         ans += one * N;
//     } else {
//         ans += D * (N / 2);
//         if (N % 2 == 1) ans += one;
//     }
//     cout << ans << endl;
//     return 0;
// }