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
    int n;
    cin >> n;
    vector<int> l(n);
    rep(i, 0, n) cin >> l[i];

    int L = n, R = 0;
    rep(i, 0, n) if (l[i] == 1) {
        L = min(L, i);
        R = max(R, i);
    }
    if (L == n) cout << 0 << endl;
    else cout << R - L << endl;
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
//     int N;
//     cin >> N;
//     vector<int> L(N);
//     rep(i, 0, N) cin >> L[i];

//     int cnt = 1;
//     rep(i, 0, N) {
//         if (L[i]) break;
//         cnt++; 
//     }
//     int rcnt = 1;
//     rrep(i, N-1, 0) {
//         if (L[i]) break;
//         rcnt++;
//     }

//     int ans = N + 1 - (cnt + rcnt);
//     cout << max(ans, 0) << endl;
//     return 0;
// }