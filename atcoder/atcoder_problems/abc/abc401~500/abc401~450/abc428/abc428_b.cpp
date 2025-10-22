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
    string s;
    cin >> n >> k >> s;

    map<string, int> memo;
    rep(i, 0, n - k + 1) {
        string t = s.substr(i, k);
        memo[t]++;
    }

    int vmax = 0;
    for (auto &[key, val] : memo) {
        chmax(vmax, val);
    }

    vector<string> vs;
    for (auto &[key, val] : memo) {
        if (val == vmax) vs.push_back(key);
    }

    cout << vmax << endl;
    rep(i, 0, vs.size()) {
        if (i) cout << ' ';
        cout << vs[i];
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
// #define rall(x) (x).rbegin(),(x).rend()
// #define chmin(x, y) x = min(x, y)
// #define chmax(x, y) x = max(x, y)
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     int N, K;
//     string S;
//     cin >> N >> K >> S;

//     int mx = 0; 
//     map<string, int> cnt;
//     rep(i, 0, N - K + 1) {
//         string s = S.substr(i, K);
//         cnt[s]++;
//         mx = max(mx, cnt[s]);
//     }

    
//     vector<string> ans;
//     for (auto [s, n] : cnt) {
//         if (n == mx) ans.push_back(s);
//     }
//     sort(all(ans));

//     cout << mx << endl;
//     rep(i, 0, ans.size()) cout << ans[i] << ' ';
//     cout << endl;
//     return 0;
// }