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
    vector<int> v(3);
    rep(i, 0, 3) cin >> v[i];

    int odd = 0, even = 0;
    rep(i, 0, 3) {
        if (v[i] % 2 == 0) even++;
        else odd++;
    }

    int ans = 0;
    if (odd == 2) {
        ans++;
        rep(i, 0, 3) if (v[i] % 2 == 1) v[i]++;
    } else if (even == 2) {
        ans++;
        rep(i, 0, 3) if (v[i] % 2 == 0) v[i]++;
    }

    int mx = max(v[0], max(v[1], v[2]));
    rep(i, 0, 3) ans += (mx - v[i]) / 2;
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
//     vector<int> A(3, 0);
//     rep(i, 0, 3) cin >> A[i];

//     sort(all(A));
//     int diff = (A[2] - A[0]) + (A[2] - A[1]);

//     if (diff % 2 == 0) cout << diff / 2 << endl;
//     else {
//         diff += 3;
//         cout << diff / 2 << endl;
//     }
//     return 0;
// }