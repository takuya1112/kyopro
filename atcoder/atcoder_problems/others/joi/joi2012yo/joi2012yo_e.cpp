#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int dy[2][6] = {
    {1, 0, -1, 0, 1, -1},
    {1, 0, -1, 0, 1, -1}
};

int dx[2][6] = {
    {0, 1, 0, -1, -1, -1},
    {0, 1, 0, -1, 1, 1}
};

int main() {
    int W, H;
    cin >> W >> H;
    vector<vector<int>> field(H+2, vector<int>(W+2, 0));
    rep(i, 1, H+1) rep(j, 1, W+1) cin >> field[i][j];

    vector<vector<bool>> visited(H+2, vector<bool>(W+2, false));
    auto rec = [&](auto self, int y, int x) -> void {
        visited[y][x] = true;
        rep(i, 0, 6) {
            int ny = y + dy[y % 2][i], nx = x + dx[y % 2][i];
            if (ny < 0 || ny >= H + 2 || nx < 0 || nx >= W + 2) continue;
            if (field[ny][nx] == 1) continue;
            if (!visited[ny][nx]) self(self, ny, nx);
        }
    };

    rec(rec, 0, 0);
    rep(y, 1, H+1) rep(x, 1, W+1) if (!visited[y][x]) field[y][x] = 1;
    int res = 0;
    rep(y, 1, H+1) {
        rep(x, 1, W + 1) {
            if (field[y][x] == 0) continue;
            rep(i, 0, 6) {
                int ny = y + dy[y % 2][i], nx = x + dx[y % 2][i];
                if (field[ny][nx] == 0) res++;
            }
        }
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
// typedef long long ll; const int inf = INT_MAX / 2;
// #define pint pair<int, int>

// const int dy_even[6] = {-1, -1, 0, 0, 1, 1};
// const int dx_even[6] = {-1, 0, -1, 1, -1, 0};

// const int dy_odd[6] = {-1, -1, 0, 0, 1, 1};
// const int dx_odd[6] = {0, 1, -1, 1, 0, 1};

// int main() {
//     int W, H;
//     cin >> W >> H;
//     W += 2;
//     H += 2;
//     vector<vector<int>> G(H, vector<int>(W));
//     rep(i, 1, H-1) rep(j, 1, W-1) cin >> G[i][j];

//     queue<pint> que;
//     que.push({0, 0});

//     vector<vector<bool>> visited(H, vector<bool>(W));
//     visited[0][0] = true;

//     int ans = 0;
//     while (!que.empty()) {
//         auto [y, x] = que.front();
//         que.pop();
//         int res = 0;
//         rep(i, 0, 6) {
//             int ny = y, nx = x;
//             if (y % 2 == 0) ny += dy_even[i], nx += dx_even[i];
//             else ny += dy_odd[i], nx += dx_odd[i];
//             if (ny < 0 || ny >= H || nx < 0 || nx >= W) continue;
//             if (G[ny][nx] == 1) ans++;
//             if (visited[ny][nx]) continue;
//             visited[ny][nx] = true;
//             if (G[ny][nx] == 0) que.push({ny, nx});
//         }
//     }

//     cout << ans << endl;
//     return 0;
// }