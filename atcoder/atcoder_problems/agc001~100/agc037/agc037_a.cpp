#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
typedef long long ll; const int inf = INT_MAX / 2;

template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return 1; } return 0; } 

int main() {
    string S;
    cin >> S;
    int N = S.size();
    vector<vector<int>> dp(N + 1, vector<int>(3, -1));
    dp[0][0] = 0;
    rep(i, 0, N) {
        rep(j, 0, min(i, 2) + 1) {
            string suffix = S.substr(i - j, j);
            for (int add = 1; add <= 2 && i + add <= N; add++) {
                if (S.substr(i, add) != suffix) {
                    chmax(dp[i + add][add], dp[i][j] + 1);
                }
            }
        }
    }
    
    cout << max(dp[N][1], dp[N][2]) << endl;
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
//     string S;
//     cin >> S;
//     int cnt = 0;
    
//     string pre, s;
//     rep(i, 0, S.size()) {
//         s += S[i];
//         if (pre != s) {
//             cnt++;
//             pre = s;
//             s = "";
//         }
//     }
//     cout << cnt << endl;
//     return 0;
// }