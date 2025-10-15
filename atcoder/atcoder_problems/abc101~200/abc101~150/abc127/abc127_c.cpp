#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> L(M), R(M);
    rep(i, 0, M) cin >> L[i] >> R[i];

    int maxL = 1;
    int minR = N;
    rep(i, 0, M) {
        maxL = max(maxL, L[i]);
        minR = min(minR, R[i]);
    }

    int ans = minR - maxL + 1;
    ans = max(ans, 0);
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
//     int N, M;
//     cin >> N >> M;
//     vector<int> L(M), R(M);
//     rep(i, 0, M) cin >> L[i] >> R[i];

//     int l = 0, r = inf;
//     rep(i, 0, M) {
//         if (L[i] > l) l = L[i];
//         if (R[i] < r) r = R[i];
//     }
//     cout << max(r - l + 1, 0) << endl;
//     return 0;
// }