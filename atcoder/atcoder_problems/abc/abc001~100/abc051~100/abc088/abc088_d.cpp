#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;
#define pint pair<int, int>

int di[4] = {1, 0, -1, 0};
int dj[4] = {0, 1, 0, -1};

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> S(H);
    rep(i, 0, H) cin >> S[i];

    vector<vector<int>> dist(H, vector<int>(W, -1));
    dist[0][0] = 1;

    queue<pint> que;
    que.push({0, 0});

    while (!que.empty()) {
        auto [i, j] = que.front();
        que.pop();
        int d = dist[i][j];
        rep(k, 0, 4) {
            int ni = i + di[k];
            int nj = j + dj[k];

            if (ni < 0 || ni >= H || nj < 0 || nj >= W) continue;
            if (S[ni][nj] == '#') continue;
            if (dist[ni][nj] != -1) continue;
            dist[ni][nj] = d + 1;
            que.push({ni, nj});
        }
    }
    if (dist[H - 1][W - 1] == -1) {
        cout << -1 << endl;
        return 0;
    }
    int cnt = 0;
    rep(i, 0, H) rep(j, 0, W) if (S[i][j] == '.') cnt ++;
    cout << cnt - dist[H - 1][W - 1] << endl;
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

// const int dy[4] = {1, 0, -1, 0};
// const int dx[4] = {0, 1, 0, -1};

// #define pint pair<int, int>

// int main() {
//     int H, W;
//     cin >> H >> W;
//     vector<string> S(H);
//     rep(i, 0, H) cin >> S[i];

//     queue<pint> que;
//     que.push({0, 0});

//     vector<vector<int>> dist(H, vector<int> (W, inf));
//     dist[0][0] = 1;

//     while (!que.empty()) {
//         auto [y, x] = que.front();
//         que.pop();
//         rep(i, 0, 4) {
//             int ny = y + dy[i], nx = x + dx[i];
//             if (ny < 0 || ny >= H || nx < 0 || nx >= W) continue;
//             if (dist[ny][nx] != inf) continue;
//             if (S[ny][nx] == '#') continue;
//             dist[ny][nx] = dist[y][x] + 1;
//             que.push({ny, nx});
//         }
//     }

//     int cnt = 0;
//     rep(i, 0, H) rep(j, 0, W) if (S[i][j] == '#') cnt++;
//     cout << (dist[H - 1][W - 1] != inf ? (H * W - dist[H - 1][W - 1]) - cnt : -1) << endl;
//     return 0;
// }