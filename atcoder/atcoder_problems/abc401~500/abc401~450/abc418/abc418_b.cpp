#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;


int main() {
    string S;
    cin >> S;
    int n = S.size();

    double ans = 0;
    rep(r, 0, n) rep(l, 0, r-1) {
        if (S[l] != 't') continue;
        if (S[r] != 't') continue;
        int cnt = 0, len = r - l - 1;
        rep(i, l + 1, r) {
            if (S[i] == 't') cnt++;
        }
        double now = (double)cnt / len;
        ans = max(ans, now);
    }
    printf("%.10f\n", ans);
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
//     string S;
//     cin >> S;

//     double ans = 0;
//     rep(i, 0, S.size()) {
//         if (S[i] == 't') {
//             string t = "";
//             int cnt = 0;
//             rep(j, i, S.size()) {
//                 if (S[j] == 't') cnt++;
//                 t += S[j];
//                 if (S[j] == 't') {
//                     ans = max(ans, (double)(cnt - 2) / (t.size() - 2));
//                 }
//             }

//         }
//     }
//     printf("%.20lf\n", ans);
//     return 0;
// }