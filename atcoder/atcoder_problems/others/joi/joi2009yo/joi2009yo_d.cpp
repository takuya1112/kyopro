#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
typedef long long ll; const int inf = INT_MAX / 2;

const vector<int> dx = {1, 0, -1, 0};
const vector<int> dy = {0, 1, 0, -1};

int main() {
    int H, W;
    cin >> H >> W;
    vector A(H, vector(W, 0));
    rep(i, 0, H) rep(j, 0, W) cin >> A[i][j];

    auto dfs = [&](auto dfs, int x, int y, vector<vector<bool>> &seen) -> int {
        int res = 1;
        seen[x][y] = true;
        rep(d, 0, 4) {
            int x2 = x + dx[d], y2 = y + dy[d];
            if (x2 < 0 || x2 >= H || y2 < 0 || y2 >= W) continue;
            if (seen[x2][y2]) continue;
            if (A[x2][y2] == 0) continue;
            res = max(res, dfs(dfs, x2, y2, seen) + 1); 
        }
        seen[x][y] = false;
        return res;
    };

    int res = 0;
    rep(i, 0, H) rep(j, 0, W) {
        if (A[i][j] == 0) continue;
        vector seen(H, vector(W, false));
        res = max(res, dfs(dfs, i, j, seen));
    }
    cout << res << endl;
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
// typedef long long ll; const int inf = INT_MAX / 2;

// const vector<int> dy = {0, 1, 0, -1};
// const vector<int> dx = {-1, 0, 1, 0};

// int main() {
//     int m, n;
//     cin >> m >> n;
//     vector<vector<int>> G(n, vector<int>(m));
//     rep(i, 0, n) rep(j, 0, m) cin >> G[i][j];

//     int ans = 0;
//     vector<vector<bool>> visited(n, vector<bool>(m));

//     auto f = [&](auto f, int y, int x, int cnt) -> void {
//         visited[y][x] = true;
//         ans = max(ans, cnt);
//         rep(i, 0, 4) {
//             int y2 = y + dy[i], x2 = x + dx[i];
//             if (y2 < 0 || n <= y2 || x2 < 0 || m <= x2) continue;
//             if (visited[y2][x2]) continue;
//             if (G[y2][x2] == 0) continue;
//             f(f, y2, x2, cnt + 1);
//         }
//         visited[y][x] = false;
//     };

//     rep(i, 0, n) rep(j, 0, m) {
//         if (G[i][j] == 1) f(f, i, j, 1);
//     }
//     cout << ans << endl;
//     return 0;
// }