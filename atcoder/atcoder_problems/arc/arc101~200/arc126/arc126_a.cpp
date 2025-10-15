#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
typedef long long ll; const int inf = INT_MAX / 2;

ll solve_13(ll n1, ll n3) {
    ll ANS = 0;
    ll k = min(n1 / 2, n3);
    n1 -= 2 * k;
    n3 -= k;
    ANS += k;

    ANS += n1 / 5;
    return ANS;
}

ll solve_12(ll n1, ll n2) {
    ll ANS = 0;
    ll k = min(n1, n2 / 2);
    n1 -= k;
    n2 -= 2 * k;
    ANS += k;

    if (n1 >= 3 && n2 >= 1) {
        n1 -= 3;
        n2 -= 1;
        ANS += 1;
    }

    ANS += n1 / 5;
    return ANS;
}

ll solve(ll N2, ll N3, ll N4) {
    ll n1 = N2, n2 = N4, n3 = N3 / 2;
    ll ANS = 0; 

    ll k = min(n2, n3);
    n2 -= k;
    n3 -= k;
    ANS += k;

    if (n2 == 0) {
        ANS += solve_13(n1, n3);
    } else {
        ANS += solve_12(n1, n2);
    }

    return ANS; 
}


int main() {
    int T;
    cin >> T;
    rep(i, 0, T) {
        ll N2, N3, N4;
        cin >> N2 >> N3 >> N4;
        cout << solve(N2, N3, N4) << '\n';
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
// #define rall(x) (x).rbegin(),(x).rend()
// typedef long long ll; const int inf = INT_MAX / 2;

// void solve() {
//     ll N2, N3, N4;
//     cin >> N2 >> N3 >> N4;
//     N3 /= 2;

//     ll minus = min(N3, N4);
//     ll ans = 0;
//     ans += minus;
//     N3 -= minus;
//     N4 -= minus;

//     if (N4 / 2 && N2) {
//         minus = min(N4 / 2, N2);
//         ans += minus;
//         N2 -= minus;
//         N4 -= minus * 2;
//     }

//     if (N3 && N2 / 2) {
//         minus = min(N3, N2 / 2 );
//         ans += minus;
//         N2 -= minus * 2;
//         N3 -= minus;
//     } 

//     if (N4 && N2 / 3) {
//         minus = min(N4, N2 / 3);
//         ans += minus;
//         N2 -= minus * 3;
//         N4 -= minus;
//     }

//     ans += N2 / 5;
//     cout << ans << endl;
// }

// int main() {
//     int T;
//     cin >> T;
//     rep(i, 0, T) solve();
//     return 0;
// }