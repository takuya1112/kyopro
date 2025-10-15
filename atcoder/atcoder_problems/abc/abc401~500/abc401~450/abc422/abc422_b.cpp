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

    rep(i, 0, h) rep(j, 0, w) {
        if (s[i][j] != '#') continue;
        int cnt = 0;
        rep(v, 0, 4) {
            int ni = i + di[v], nj = j + dj[v];
            if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
            if (s[ni][nj] == '#') cnt++;
        }
        if (cnt != 2 && cnt != 4) {
            cout << "No" << endl;
            return 0;
        } 
    }
    cout << "Yes" << endl;
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

// const int dy[] = {1, -1, 0, 0};
// const int dx[] = {0, 0, 1, -1};

// int main() {
//     int H, W;
//     cin >> H >> W;
//     vector<string> S(H);
//     rep(i, 0, H) cin >> S[i];

//     bool ok = true;
//     rep(i, 0, H) {
//         rep(j, 0, W) {
//             if (S[i][j] == '.') continue;
//             int cnt = 0;
//             rep(k, 0, 4) {
//                 int y = i + dy[k], x = j + dx[k];
//                 if (y < 0 || y >= H || x < 0 || x >= W) continue;
//                 if (S[y][x] == '#') cnt++;
//             }

//             if (cnt != 2 && cnt != 4) {
//                 ok = false;
//             }
//         }
//     }

//     if (ok) cout << "Yes" << endl;
//     else cout << "No" << endl;
//     return 0;
// }