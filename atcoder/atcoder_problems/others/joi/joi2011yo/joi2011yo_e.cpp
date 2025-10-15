#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;
#define pint pair<int, int>

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main() {
    int H, W, N;
    cin >> H >> W >> N;
    vector<string> G(H);
    rep(i, 0, H) cin >> G[i];

    auto bfs = [&](auto bfs, pint s, pint g) -> int{
        queue<pint> que;
        que.push(s);

        vector<vector<int>> dist(H, vector<int>(W, inf));
        dist[s.first][s.second] = 0;
        while (!que.empty()) {
            auto [y, x] = que.front();
            que.pop();
            rep(i, 0, 4) {
                int ny = y + dy[i], nx = x + dx[i];
                if (ny < 0 || ny >= H || nx < 0 || nx >= W) continue;
                if (G[ny][nx] == 'X') continue;
                if (dist[ny][nx] != inf) continue;
                dist[ny][nx] = dist[y][x] + 1;
                que.emplace(ny, nx);
            }
        }
        return dist[g.first][g.second];
    };

    vector<pint> num(10);
    rep(i, 0, H) rep(j, 0, W){
        if (G[i][j] == 'S') num[0] = {i, j};
        if (G[i][j] != 'X' && G[i][j] != '.' && G[i][j] != 'S') {
            num[G[i][j] - '0'] = {i, j};
        }
    }

    int ans = 0;
    rep(i, 0, N) {
        ans += bfs(bfs, num[i], num[i + 1]);
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

// const vector<int> dy = {0, 1, 0, -1};
// const vector<int> dx = {1, 0, -1, 0};
// using pint = pair<int, int>;

// int main() {
//     int H, W, N;
//     cin >> H >> W >> N;
//     vector<string> G(H);
//     rep(i, 0, H) cin >> G[i];

//     int ans = 0;
//     auto bfs = [&](auto bfs, pint s, pint g) -> int {
//         queue<pint> que;
//         que.push(s);
//         vector<vector<int>> dist(H, vector<int>(W, -1));
//         dist[s.first][s.second] = 0;

//         while (!que.empty()) {
//             auto [sy, sx] = que.front();
//             que.pop();
//             rep(i, 0, 4) {
//                 int y2 = sy + dy[i];
//                 int x2 = sx + dx[i];
//                 if (y2 < 0 || y2 >= H || x2 < 0 || x2 >= W) continue;
//                 if (G[y2][x2] == 'X') continue;
//                 if (dist[y2][x2] != -1) continue;
//                 dist[y2][x2] = dist[sy][sx] + 1;
//                 que.push({y2, x2});
//             }
//         }
//         auto [gy, gx] = g;
//         return dist[gy][gx];
//     };

//     pint S;
//     vector<pint> C(N, make_pair(-1, -1));
//     int cnt = 0;
//     rep(i, 0, H) rep(j, 0, W) {
//         if (G[i][j] == 'S') S = {i, j};
//         if (G[i][j] != 'X' && G[i][j] != '.' && G[i][j] != 'S') {
//             int n = G[i][j] - '1';
//             C[n] = {i, j};
//             cnt++;
//         }
//     }
    
//     int i = 0;
//     while (i < cnt) {
//         ans += bfs(bfs, S, C[i]);
//         S = C[i];
//         i++;
//     }
//     cout << ans << endl;
//     return 0;
// }