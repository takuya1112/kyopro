#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)

void solve() {
    int n; string s;
    cin >> n >> s;
    s = '0' + s;
    int n2 = 1 << n;
    vector<bool> visited(n2);
    visited[0] = true;
    queue<int> q;
    q.push(0);

    while (!q.empty()) {
        int t = q.front(); q.pop();
        rep(i, n) {
            int nt = t | 1 << i;
            if (nt == t) continue;
            if (s[nt] == '1') continue;
            if (visited[nt]) continue;
            visited[nt] = true;
            q.push(nt);
        }
    }
    if (visited[n2-1]) cout << "Yes\n";
    else cout << "No\n";
}

int main() {
    int T;
    cin >> T;
    rep(ti, T) solve();
    return 0;
}

// mycode worng ans
// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)

// void solve() {
//     int N; string S;
//     cin >> N >> S;
//     set<int> out;
//     rep(i, S.size()) if (S[i] == '1') out.insert(i+1);
//     int cnt = 0; 
//     for (int i = 1; i <= N; i++) {
        
//     }
// }

// int main() {
//     int T;
//     cin >> T;
//     rep(i, T) solve();
//     return 0;
// }