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

const int di[] = {-1, 0, 1, 0};
const int dj[] = {0, -1, 0, 1};

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, 0, h) cin >> s[i];

    vector step(h, vector<int> (w, inf));
    queue<pair<int, int>> q;
    rep(i, 0, h) rep(j, 0, w) if (s[i][j] == '#') {
        step[i][j] = 0;
        q.emplace(i, j);
    }

    int ans = 0;
    while(q.size()) {
        ans++;
        auto [i, j] = q.front(); q.pop();
        int si = step[i][j];
        rep(v, 0, 4) {
            int ni = i + di[v], nj = j + dj[v];
            if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
            if (step[ni][nj] != inf) continue;
            int cnt = 0;
            rep(v2, 0, 4) {
                int mi = ni + di[v2], mj = nj + dj[v2];
                if (mi < 0 || mi >= h || mj < 0 || mj >= w) continue;
                if (step[mi][mj] <= si) cnt++;
            }
            if (cnt == 1) {
                step[ni][nj] = si + 1;
                q.emplace(ni, nj);
            }
        }
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
// #define rall(x) (x).rbegin(),(x).rend()
// #define chmin(x, y) x = min(x, y)
// #define chmax(x, y) x = max(x, y)
// typedef long long ll; const int inf = INT_MAX / 2;

// const int dy[4] = {1, -1, 0, 0};
// const int dx[4] = {0, 0, 1, -1};

// int main() {
//     int H, W;
//     cin >> H >> W;
//     vector<string> S(H);
//     rep(i, 0, H) cin >> S[i];

//     auto isOutside = [&](int y, int x) -> bool {
//         return (y < 0 || y >= H || x < 0 || x >= W);
//     };

//     auto f = [&](vector<pair<int, int>> idx) -> vector<pair<int, int>> {
//         vector<pair<int, int>> v;
//         for (auto [y, x] : idx) {
//             rep(i, 0, 4) {
//                 int y2 = y + dy[i], x2 = x + dx[i];
//                 if (isOutside(y2, x2)) continue;
//                 if (S[y2][x2] == '#') continue;

//                 int cnt = 0;
//                 rep(j, 0, 4) {
//                     int y3 = y2 + dy[j], x3 = x2 + dx[j];
//                     if (isOutside(y3, x3)) continue;
//                     if (S[y3][x3] == '#')cnt++;
//                 }
//                 if (cnt == 1) v.emplace_back(y2, x2);
//             }
//         }
//         return v;
//     };

//     vector<pair<int, int>> a;
//     rep(i, 0, H) rep(j, 0, W) {
//         if (S[i][j] == '#') {
//             a.emplace_back(i, j);
//         }
//     }

//     while (!a.empty()) {
//         a = f(a);
//         for (auto [y, x] : a) S[y][x] = '#';
//     }

    
//     int ans = 0;
//     rep(i, 0, H) rep(j, 0, W) {
//         if (S[i][j] == '#') ans++;
//     }
//     cout << ans << endl;
//     return 0;
// }