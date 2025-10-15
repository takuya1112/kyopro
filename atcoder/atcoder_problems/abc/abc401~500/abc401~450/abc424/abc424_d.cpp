#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
typedef long long ll; const int inf = INT_MAX / 2;

void solve() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, 0, h) cin >> s[i];

    int ans = 9;
    auto f = [&](auto f, int now) -> void {
        if (now >= ans) return;
        rep(i, 0, h - 1) rep(j, 0, w - 1) {
            int cnt = 0;
            rep(di, 0, 2) rep(dj, 0, 2) if (s[i + di][j + dj] == '#') cnt++;
            if (cnt == 4) {
                rep(dj, 0, 2) {
                    s[i + 1][j + dj] = '.';
                    f(f, now + 1);
                    s[i + 1][j + dj] = '#';
                }
                return;
            }
        }
        ans = min(ans, now);
    };
    f(f, 0);
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    rep(ti, 0, t) solve();
    return 0;
}



// mycode worng ans
// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i = a; i >= b; i--)
// #define all(x) (x).begin(),(x).end()
// #define rall(x) (x).rbegin(),(x).rend()
// typedef long long ll; const int inf = INT_MAX / 2;

// const vector<int> dy = {0, -1, -1, -1, -1, 0, 0, 1, 1, 1, 1, -1};
// const vector<int> dx = {-1, -1, 0, 0, 1, 1, 1, 1, 0, 0, -1, -1};

// void solve() {
//     int H, W;
//     cin >> H >> W;
//     vector<string> S(H);
//     rep(i, 0, H) cin >> S[i];
//     vector<vector<bool>> check(H);
//     rep(i, 0, H) rep(j, 0, W) if (S[i][j] == '.') check[i][j] = true;

//     int ans = inf;
//     auto cnt = [&](auto cnt, int y, int x) {
//         rep(i, 0, 3) {
//             int y2 = y + dy[i];
//             int x2 = x + dx[i];
            
//         }
//     };

//     rep(i, 0, H) rep(j, 0, W) {
//         if (S[i][j] == '#') cnt(cnt, i, j);
//     }
// }

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         solve();
//     }
//     return 0;
// }