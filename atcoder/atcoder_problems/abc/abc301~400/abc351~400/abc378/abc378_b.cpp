#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int n;
    cin >> n;
    vector<int> q(n), r(n);
    rep(i, 0, n) cin >> q[i] >> r[i];

    int Q;
    cin >> Q;
    rep(qi, 0, Q) {
        int t, d;
        cin >> t >> d;
        t--;
        
        d -= r[t];
        int ans = (d + q[t] - 1) / q[t] * q[t];
        ans += r[t];
        cout << ans << endl;
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
//     int N, Q;
//     cin >> N;
//     vector<int> q(N), r(N);
//     rep(i, 0, N) cin >> q[i] >> r[i];

//     cin >> Q;
//     rep(i, 0, Q) {
//         int t, d;
//         cin >> t >> d;
//         t--;
//         int n = d % q[t];
//         if (n <= r[t]) cout << d + r[t] - n << endl;
//         else cout << d + r[t] + (q[t] - n) << endl;
//     } 
//     return 0;
// }