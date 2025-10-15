#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int N;
    cin >> N;
    int minR = inf, maxR = -inf;
    int minC = inf, maxC = -inf;
    rep(i, 0, N) {
        int r, c;
        cin >> r >> c;
        minR = min(minR, r); maxR = max(maxR, r);
        minC = min(minC, c); maxC = max(maxC, c);
    }

    int ans = (max(maxR - minR, maxC - minC) + 1) / 2;
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
//     int N;
//     cin >> N;
//     vector<int> R(N), C(N);
//     rep(i, 0, N) cin >> R[i] >> C[i];

//     ll r_max = 0;
//     ll r_min = R[0];

//     ll c_max = 0;
//     ll c_min = C[0];

//     rep(i, 0, N) {
//         if (R[i] > r_max) r_max = R[i];
//         else if (R[i] < r_min) r_min = R[i];
//         if (C[i] > c_max) c_max = C[i];
//         else if (C[i] < c_min) c_min = C[i]; 
//     }
//     ll r = (r_max + r_min) / 2;
//     ll c = (c_max + c_min) / 2;


//     int ans = 0;
//     rep(i, 0, N) {
//         int y = abs(r - R[i]);
//         int x = abs(c - C[i]);
//         if (y > x) ans = max(ans, y);
//         else ans = max(ans, x);
//     }
//     cout << ans << endl;
//     return 0;
// }