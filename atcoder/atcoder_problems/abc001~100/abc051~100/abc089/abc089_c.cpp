#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    string s = "MARCH";
    int c[5] = {0};
    int N; cin >> N;
    for (int i = 0; i < N; i++) {
        string t;
        cin >> t;
        for (int j = 0; j < 5; j++) {
            if (t[0] == s[j]) c[j]++;
        }
    }
    ll ans = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            for (int k = j + 1; k < 5; k++) {
                ans += (ll)c[i] * c[j] * c[k];
            }
        }
    }
    cout << ans << endl;
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)
// #define ll long long

// char C[5] = {'M', 'A', 'R', 'C', 'H'};

// int main() {
//     int N;
//     cin >> N;
//     vector<string> S(N);
//     rep(i, N) cin >> S[i];
//     map<char, int> Cnt;
//     rep(i, N) {
//         rep (j, 5) {
//             if (S[i][0] == C[j]) Cnt[S[i][0]]++;
//         }
//     }
//     ll ans = 0;
//     for (int i = 0; i < 5; i++) {
//         for (int j = i + 1; j < 5; j ++) {
//             for (int k = j + 1; k < 5; k++) {
//                 ans += (ll)(Cnt[C[i]] * Cnt[C[j]] * Cnt[C[k]]);
//              }
//         }
//     }
//     cout << ans << endl; 
//     return 0;
// }