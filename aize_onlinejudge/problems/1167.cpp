#include <bits/stdc++.h>
using namespace std;

// --- utility ---

template<class S, class T> inline bool chmin(S &a, T b) { return (a > b ? a = b, 1 : 0); }

using vint = vector<int>;

// --- macros ---
#define rep(i, a) for (long long i = 0; i < (long long)(a); i++)
#define rep2(i, a, b) for (long long i = a; i < (long long)(b); i++)


// --- constants ---

const int INF = 1e9;
const int MAX = 1e6;

// ========================================
//                  solve
// ========================================

int main() {
    int n, table[183];
    int* dp = new int [MAX];
    int* odd_dp = new int [MAX];
    
    rep(i, 183) table[i] = i * (i + 1) * (i + 2) / 6;
    rep(i, MAX) {
        dp[i] = INF;
        odd_dp[i] = INF;
    }

    dp[0] = 0;
    dp[1] = 1;

    odd_dp[0] = 0;
    odd_dp[1] = 1;

    rep2(i, 2, MAX) {
        for (int k = 1; table[k] <= i; k++) {
            chmin(dp[i], dp[i - table[k]] + 1);
            if (table[k] % 2 == 1) {
                chmin(odd_dp[i], odd_dp[i - table[k]] + 1);
            }
        }
    }

    while(1) {
        cin >> n;
        if (n == 0) break;

        printf("%d %d\n", dp[n], odd_dp[n]);
    }
    return 0;
}


// mycode AC
// int main() {
//     int pollock[200];
//     rep2(i, 1, 201) pollock[i-1] = (i * (i + 1) * (i + 2)) / 6; 

//     vint dp(MAX + 1, INF), dp2(MAX + 1, INF);
//     dp[0] = 0; dp2[0] = 0;
//     rep(i, 200) {
//         int p = pollock[i];
//         if (p > MAX) break;
//         rep(j, MAX + 1) {
//             if (j >= p) chmin(dp[j], dp[j - p] + 1);
//             if (p % 2 == 1 && j >= p) chmin(dp2[j], dp2[j - p] + 1); 
//         }
//     }

//     int n;
//     while (cin >> n) {
//         if (n == 0) break;
//         cout << dp[n] << ' ' << dp2[n] << '\n';
//     }
//     return 0;
// }