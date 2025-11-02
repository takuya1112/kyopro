#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int n, a, b;
    string s;
    cin >> n >> a >> b >> s;

    ll ans = 0;
    int ra = 0, ca = 0;
    int rb = 0, cb = 0;
    rep(l, 0, n) {
        while (ra < n && ca < a) {
            if (s[ra] == 'a') ca++;
            ra++;
        }
        if (ra == n && ca < a) ra++;

        while (rb < n && cb < b) {
            if (s[rb] == 'b') cb++;
            rb++;
        }

        if (rb == n && cb < b) rb++;

        ans += max(rb - ra, 0);

        if (s[l] == 'a') ca--;
        if (s[l] == 'b') cb--;
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
// #define chmin(x, y) x = min(x, y)
// #define chmax(x, y) x = max(x, y)
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     int n, a, b;
//     string s;
//     cin >> n >> a >> b >> s;

//     vector<int> sa(n + 1), sb(n + 1);
//     rep(i, 0, n) sa[i + 1] = sa[i] + (s[i] == 'a' ? 1:0); 
//     rep(i, 0, n) sb[i + 1] = sb[i] + (s[i] == 'b' ? 1:0);
    
//     ll ans = 0;
//     rep(l, 0, n) {
//         int ra, rb;
//         {
//             int wa = l, ac = n + 1;
//             while (ac - wa > 1) {
//                 int wj = (wa + ac) / 2;
//                 if (sa[wj] - sa[l] >= a) ac = wj; else wa = wj;
//             }
//             ra = ac;
//         }
//         {
//             int ac = l, wa = n + 1;
//             while (wa - ac > 1) {
//                 int wj = (wa + ac) / 2;
//                 if (sb[wj] - sb[l] < b) ac = wj; else wa = wj;
//             }
//             rb = wa;
//         }
//         ans += max(rb - ra, 0);
//     }
//     cout << ans << endl;
//     return 0;
// }

// my code wa
// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i = a; i >= b; i--)
// #define all(x) (x).begin(),(x).end()
// #define rall(x) (x).rbegin(),(x).rend()
// #define chmin(x, y) x = min(x, y)
// #define chmax(x, y) x = max(x, y)
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     int n, a, b;
//     string s;
//     cin >> n >> a >> b >> s;
//     int sum = a + 1;

//     int ans = 0, cnta = 0, cntb = 0;
//     rep(i, 0, n) {
//         if (s[i] == 'a') cnta++;
//         else cntb++;

//         if (i >= sum) {
//             if (s[i - sum] == 'a') cnta--;
//             else cntb--;
//             if (cnta >= a && cntb < b) {
//                 ans++;
//                 int j = i;
//                 while (s[j + 1] == 'a' && j - i < b - 1) {
//                     j++;
//                     ans++;
//                 }
//             }
//         } 
//     }
//     cout << ans << endl;
//     return 0;
// }