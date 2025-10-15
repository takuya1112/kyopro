#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    rep(i, 0, n) cin >> s[i];

    vector<int> score(n);
    rep(i, 0, m) {
        vector<int> cnt(2);
        rep(j, 0, n) cnt[s[j][i] - '0']++;
        if (cnt[0] == 0 || cnt[1] == 0) {
            rep(j, 0, n) score[j]++;
        } else {
            int win = 0;
            if (cnt[1] < cnt[0]) win = 1; 
            rep(j, 0, n) {
                if (s[j][i] - '0' == win) score[j]++;
            }
        }
    }

    int mx = 0;
    rep(i, 0, n) mx = max(mx, score[i]);
    rep(i, 0, n) {
        if (score[i] == mx) cout << i + 1 << ' ';
    }
    cout << endl;
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
//     vector<string> S(N);
//     rep(i, 0, N) cin >> S[i];

//     vector<int> ans(N, 0);
//     rep(i, 0, M) {
//         int x = 0, y = 0;
//         rep(j, 0, N) {
//             if (S[j][i] == '0') x++;
//             else y++;
//         }
//         if (x == N || y == N) {
//             rep(j, 0, N) ans[j]++;
//         } else if (x < y) {
//             rep(j, 0, N) {
//                 if (S[j][i] == '0') ans[j]++;
//             }
//         } else if (x > y) {
//             rep(j, 0, N) {
//                 if (S[j][i] == '1') ans[j]++;
//             }
//         }
//     }

//     auto mx = max_element(all(ans));
//     rep(i, 0, N) {
//         if (ans[i] == *mx) cout << i + 1 << ' ';
//     }
//     cout << endl;
//     return 0;
// }