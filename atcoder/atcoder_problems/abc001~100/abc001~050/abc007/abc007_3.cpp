#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)

const vector<int> dx = {1, 0, -1, 0};
const vector<int> dy = {0, 1, 0, -1};

using pint = pair<int, int>;

int main() {
    int R, C, sx, sy, tx, ty;
    cin >> R >> C >> sx >> sy >> tx >> ty;
    sx--; sy--; tx--; ty--;

    vector<string> field(R);
    for (int i = 0; i < R; i++) cin >> field[i];

    queue<pint> que;
    vector<vector<int>> dist(R, vector<int>(C, -1));

    que.push({sx, sy});
    dist[sx][sy] = 0;

    while (!que.empty()) {
        auto [x, y] = que.front();
        que.pop();

        for (int dir = 0; dir < 4; ++dir) {
            int x2 = x + dx[dir];
            int y2 = y + dy[dir];

            if (x2 < 0 || x2 >= R || y2 < 0 || y2 >= C) continue;
            if (field[x2][y2] == '#') continue;
            if (dist[x2][y2] != -1) continue;
            que.push({x2, y2});
            dist[x2][y2] = dist[x][y] + 1;
        }
    }
    cout << dist[tx][ty] << endl;
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)


// int main() {
//     int R, C, sy, sx, gy, gx;
//     cin >> R >> C >> sy >> sx >> gy >> gx;
//     sy -= 1, sx -= 1, gy -= 1, gx -= 1;

//     char c[R][C];
//     int dist[R][C];
//     rep(i, R) {
//         rep (j, C) cin >> c[i][j];
//     }
//     rep (i, R) {
//         rep (j, C) dist[i][j] = INT_MAX; 
//     }

//     queue<pair<int, int>> que;
//     que.push(make_pair(sy, sx));
//     dist[sy][sx] = 0;

//     while (!que.empty()) {
//         int cy = que.front().first;
//         int cx = que.front().second;
//         que.pop();

//         int dy[4] = {1, 0, -1, 0};
//         int dx[4] = {0, 1, 0, -1};

//         rep(i, 4) {
//             int ey = cy + dy[i];
//             int ex = cx + dx[i];
//             if (c[ey][ex] != '.' || dist[ey][ex] != INT_MAX) continue;
//             dist[ey][ex] = dist[cy][cx] + 1;
//             que.push(make_pair(ey, ex));
//         }
//     }
//     cout << dist[gy][gx] << endl;

//     return 0;
// }