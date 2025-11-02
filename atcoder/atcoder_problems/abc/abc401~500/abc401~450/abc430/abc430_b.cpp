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
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    rep(i, 0, n) cin >> s[i];

    set<vector<string>> st;
    rep(si, 0, n - m + 1) rep(sj, 0, n - m + 1) {
        vector<string> t(m);
        rep(i, 0, m) rep(j, 0, m) {
            t[i] += s[si + i][sj + j];
        }
        st.insert(t);
    }
    cout << st.size() << endl;
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
//     int n, m;
//     cin >> n >> m;
//     vector<string> s(n);
//     rep(i, 0, n) cin >> s[i];

//     set<vector<string>> st;
//     rep(i, 0, n - m + 1) {
//         vector<string> temp(m);
//         rep(j, 0, n - m + 1) {
//             rep(k, 0, m) {
//                 string t = s[i + k].substr(j, m);
//                 temp[k] = t;
//             }
//             st.insert(temp);
//         }
//     }
//     cout << st.size() << endl;
//     return 0;
// }