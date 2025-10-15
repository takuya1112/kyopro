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
    int N;
    cin >> N;
    vector<int> H(N);
    rep(i, 0, N) cin >> H[i];
    reverse(all(H));

    int ans = 0;
    int val = 0;
    rep(i, 1, N) {
        if (H[i - 1] <= H[i]) val++;
        else val = 0;
        ans = max(ans, val);
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
//     vector<int> H(N);
//     rep(i, 0, N) cin >> H[i];

//     int ans = 0;
//     int cnt = 0;
//     rep(i, 0, N-1) {
//         if (H[i] >= H[i+1]) cnt++;
//         else {
//             cnt = 0;
//         }
//         ans = max(ans, cnt);
//     }
//     cout << ans << endl;
//     return 0;
// }