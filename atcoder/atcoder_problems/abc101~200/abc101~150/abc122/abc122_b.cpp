#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    string S;
    cin >> S;

    string T = "ATCG";

    int ans = 0;
    int now = 0;
    for (int i = 0; i < S.size(); i++) {
        bool isATCG = false;
        for (int j = 0; j < T.size(); j++){
            if (S[i] == T[j]) isATCG = true;
        }

        if (!isATCG) {
            now = 0;
        }
        else {
            now++;
            ans = max(ans, now);
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


// int main() {
//     string S;
//     cin >> S;
//     int ans = 0;
//     int cnt = 0;
//     for (char s : S) {
//         if (s == 'A' or s == 'C' or s == 'G' or s == 'T') cnt++;
//         else {
//             ans = max(ans, cnt);
//             cnt = 0;
//         }
//     }
//     ans = max(ans, cnt);
//     cout << ans << endl;
//     return 0;
// }