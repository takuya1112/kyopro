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
    int n, k;
    cin >> n >> k;
    vector<string> S(n);
    rep(i, 0, n) cin >> S[i];

    int ans = 0;
    rep(s, 0, 1 << n) {
        int now = 0;
        map<char,int> cnt;
        rep(i, 0, n) {
            if (s >> i & 1) {
                for (char c : S[i]) cnt[c]++;
            }
        }
        for (auto p : cnt) if (p.second == k) now++;
        ans = max(ans, now);
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
//     int N, K;
//     cin >> N >> K;
//     vector<string> S(N);
//     rep(i, 0, N) cin >> S[i];

//     int ans = 0;
//     rep(bit, 0, 1 << N) {
//         int res = 0;
//         vector<int> cnt(26);
//         rep(i, 0, N) {
//             if (bit >> i & 1) {
//                 for (char c : S[i]) cnt[c - 'a']++;    
//             }
//         }
//         rep(i, 0, 26) if (cnt[i] == K) res++;
//         ans = max(ans, res);
//     }
//     cout << ans << endl;
//     return 0;
// }