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

void solve() {
    int n, m, k;
    string s;
    cin >> n >> m >> k >> s;

    vector<vector<int>> to(n);
    rep(i, 0, m) {
        int u, v;
        cin >> u >> v;
        u--; v--;
        to[u].push_back(v);
    }

    vector dp(k*2 + 1, vector<int>(n));

    rep(v, 0, n) {
        dp[k * 2][v]  = (s[v] == 'A');
    }

    for (int i = k * 2 - 1; i >= 0; i--) {
        rep(v, 0, n) {
            dp[i][v] = 0;
            for (int u : to[v]) {
                if (!dp[i + 1][u]) dp[i][v] = 1;
            }
        }
    }

    if (dp[0][0]) cout << "Alice\n"; 
    else cout << "Bob\n";
}

int main() {
    int T;
    cin >> T;
    rep(ti, 0, T) solve();
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

// void solve() {
//     int N, M, K;
//     string S;
//     cin >> N >> M >> K >> S;

//     vector<vector<int>> G;
//     rep(i, 0, M) {
//         int u, v;
//         cin >> u >> v;
//         u--; v--;
//         G[u].push_back(v);
//     }

//     auto g = [&](auto g, int turn, int u) -> int {

//     };

//     auto f = [&](auto f, int turn, int u) -> int {
//         if (turn == K) {
//             return S[u] == 'A';
//         }
        
//         vector<int> move;
//         for (auto v : G[u]) {
//             int n = f(f, turn + 1, v);
//             if (turn % 2 && n) move.push_back(v);
//             if (turn % 2 == 0 && n == 0) move.push_back(v); 
//         }
//     };

//     if (f(f, 0, 0)) cout << "Alice" << endl;
//     else cout << "Bob" << endl;
// }

// int main() {
//     int T;
//     cin >> T;
//     rep(i, 0, T) solve();
//     return 0;
// }