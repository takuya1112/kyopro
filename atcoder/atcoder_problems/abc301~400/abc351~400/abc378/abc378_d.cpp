#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

const int di[] = {-1, 0, 1, 0};
const int dj[] = {0, -1, 0, 1};

int main() {
    int h, w, k;
    cin >> h >> w >> k;
    vector<string> s(h);
    rep(i, 0, h) cin >> s[i];


    auto dfs = [&](auto dfs, int i, int j, int k) -> int {
        if (k == 0) return 1;
        s[i][j] = '*';
        int res = 0;
        rep(v, 0, 4) {
            int ni = i + di[v], nj = j + dj[v];
            if (ni < 0 || nj < 0 || ni >= h || nj >= w) continue;
            if (s[ni][nj] != '.') continue;
            res += dfs(dfs, ni, nj, k - 1);
        }
        s[i][j] = '.';
        return res;
    };

    int ans = 0;
    rep(si, 0, h) rep(sj, 0, w) {
        if (s[si][sj] == '#') continue;
        ans += dfs(dfs, si, sj, k);
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

// #define pint pair<int, int>

// int main() {
//     int H, W, K;
//     cin >> H >> W >> K;
//     vector<vector<char>> S(H, vector<char>(W));
//     rep(i, 0, H) rep(j, 0, W) cin >> S[i][j];
//     vector<pint> move = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    
//     int ans = 0;
//     vector<vector<bool>> visited(H, vector<bool>(W, false));
//     auto f = [&](auto f, int y, int x, int cnt) {
//         if (y >= H || x >= W || 0 > y || 0 > x) return;
//         if (S[y][x] == '#') return;
//         if (visited[y][x]) return;
//         if (cnt == K) {
//             ans++;
//             return;
//         } 

//         visited[y][x] = true;

//         for (auto [y1, x1] : move) {
//             f(f, y + y1, x + x1, cnt + 1);
//         }
//         visited[y][x] = false;
//     };

    
//     rep(i, 0, H) rep(j, 0, W) {
//         if (S[i][j] == '#') continue;
//         f(f, i, j, 0);
//     }
//     cout << ans << endl;
//     return 0;
// }