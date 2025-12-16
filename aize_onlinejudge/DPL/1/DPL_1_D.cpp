#include <bits/stdc++.h>
using namespace std;

// --- macros ---
#define rep(i, a) for (long long i = 0; i < (long long)(a); i++)
#define all(x) x.begin(), x.end()

// --- constants ---
const int INF = 1e9;
const int MAX = 100000;

// ========================================
//                  solve
// ========================================

int n, A[MAX], L[MAX];

int lis() {
    L[0] = A[0];
    int length = 1;

    for (int i = 1; i < n; i++) {
        if (L[length - 1] < A[i]) {
            L[length++] = A[i];
        } else {
            *lower_bound(L, L + length, A[i]) = A[i];
        }
    }
    return length;
}

int main() {
    cin >> n;
    rep(i, n) cin >> A[i];
    cout << lis() << endl;
    return 0;
}

// int main() {
//     int n;
//     cin >> n;
//     vector<int> A(n);
//     rep(i, n) cin >> A[i];

//     vector<int> dp(n, INF);
//     rep(i, n) {
//         int it = lower_bound(all(dp), A[i]) - dp.begin();
//         dp[it] = A[i];
//     }

//     int ans = lower_bound(all(dp), INF) - dp.begin();
//     cout << ans << endl;
//     return 0;
// }