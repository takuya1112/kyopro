#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;
#define pint pair<int, int>

const int dy[4] = {1, 0, -1, 0};
const int dx[4] = {0, 1, 0, -1};

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> C(H);
    rep(i, 0, H) cin >> C[i];

    pint s, g;
    rep(i, 0, H) rep(j, 0, W) {
        if (C[i][j] == 's') s = {i, j};
        if (C[i][j] == 'g') g = {i, j};
    }

    vector<vector<bool>> visited(H, vector<bool>(W, false));
    
    auto f = [&](auto f, int y, int x) -> void {
        rep(i, 0, 4) {
            visited[y][x] = true;
            int ny = y + dy[i], nx = x + dx[i];
            if (ny < 0 || ny >= H || nx < 0 || nx >= W) continue;
            if (C[ny][nx] == '#') continue;
            if (visited[ny][nx]) continue;
            f(f, ny, nx);
        }
    };
    f(f, s.first, s.second);
    cout << (visited[g.first][g.second] ? "Yes" : "No") << endl;
    return 0;
}