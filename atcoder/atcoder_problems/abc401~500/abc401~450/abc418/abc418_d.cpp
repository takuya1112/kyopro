#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int n;
    cin >> n;
    string t;
    cin >> t;

    ll ans = 0;
    vector<int> cnt(2);
    rep(i, 0, n) {
        if (t[i] == '0') swap(cnt[0], cnt[1]);
        cnt[t[i] - '0']++;
        ans += cnt[1];
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
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     int n;
//     cin >> n;
//     string t;
//     cin >> t;
    
//     vector<int> a(n);
//     rep(i, 0, n) a[i] = (t[i] == '0');

//     vector<int> s(n + 1);
//     rep(i, 0, n) s[i + 1] = s[i] + a[i];

//     rep(i, 0, n + 1) s[i] %= 2;

//     vector<int> cnt(2);
//     rep(i, 0, n+1) cnt[s[i]]++;

//     ll ans = 0;
//     rep(i, 0, 2) ans += cnt[i] * ll(cnt[i] - 1) / 2;
//     cout << ans << endl;
//     return 0;
// }


// mycode worng ans
// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i = a; i >= b; i--)
// #define all(x) (x).begin(),(x).end()
// typedef long long ll; const int inf = INT_MAX / 2;

// int N; string T;
// ll ans = 0;

// map<string, bool> memo;

// bool cal(string S, string s) {
//     if (s.size() == 1) {
//         if (s == "1") return memo[S] = true;
//         else return memo[S] = false;
//     }

//     if (memo.find(s) != memo.end()) {
//         return memo[s];
//     }

//     rep(i, 0, s.size() - 1) {
//         if (s[i] == s[i + 1]) {
//             string t = s;
//             t.erase(i + 1, 1);
//             t[i] = '1';
//             if (cal(S, t)) return memo[t] = true;
//             else return memo[t] = false;
//         } else {
//             string t = s;
//             t.erase(i + 1, 1);
//             t[i] = '0';
//             if (cal(S, t)) return memo[t] = true;
//             else return memo[t] = false;
//         }
//     }
//     return false;
// }


// int main() {
//     cin >> N >> T;

//     rep(i, 0, N) {
//         rep(j, 1, N - i + 1) {
//             string t = T.substr(i, j);
//             if (cal(t, t)) ans++;
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }