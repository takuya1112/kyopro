#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define ll long long

int N, K, X;
vector<string> S;
vector<string> ans;

void dfs(string crr, int count) {
    if (count == K) {
        ans.push_back(crr);
        return;
    }
    for (int i = 0; i < N; i++) {
        dfs(crr + S[i], count+1); 
    }
}

int main() {
    cin >> N >> K >> X;
    rep(i, N) {
        string s;
        cin >> s;
        S.push_back(s);
    }
    dfs("", 0);
    sort(ans.begin(), ans.end());
    cout << ans[X-1] << endl;
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)
// #define ll long long

// int main() {
//     int N, K, X;
//     cin >> N >> K >> X;
//     vector<string> S(N);
//     rep(i, N) {
//         cin >> S[i];
//     }
//     vector<string> ans;

//     rep(bit, 1 << N) {
//         if (__builtin_popcount(bit) == K) {
//             vector<string> perm;
//             rep(i, N) {
//                 if (bit >> i & 1) {
//                     perm.push_back(S[i]);
//                 }
//             }

//             do {
//                 string s = "";
//                 rep(i, K) {
//                     s += perm[i];
//                 }
//                 ans.push_back(s);
//             } while (next_permutation(perm.begin(), perm.end()));
//         }
//     }
    
//     sort(ans.begin(), ans.end());
//     cout << ans[X-1] << endl;
//     return 0;
// }