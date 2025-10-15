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
    vector<int> p(n);
    rep(i, 0, n) cin >> p[i];

    int ans = 0;
    int curMin = inf;
    rep(i, 0, n) {
        curMin = min(curMin, p[i]);
        if (curMin == p[i]) ans++;
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
//     int N;
//     cin >> N;
//     vector<int> P(N);
//     rep(i, 0, N) cin >> P[i];

//     int ans = 0, min_p = inf;
//     rep(i, 0, N) {
//         if (min_p >= P[i]) {
//             ans++;
//             min_p = P[i];
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }