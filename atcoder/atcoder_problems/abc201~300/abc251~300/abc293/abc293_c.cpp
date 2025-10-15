#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;


int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    rep(i, 0, h) rep(j, 0, w) cin >> a[i][j];
    set<int> s;
    int ans = 0;

    auto dfs = [&](auto dfs, int i, int j) -> void {
        if (i >= h || j >= w) return;
        if (s.count(a[i][j])) return;
        if (i == h - 1 && j == w - 1) { ans++; return;}

        s.insert(a[i][j]);
        dfs(dfs, i, j + 1);
        dfs(dfs, i + 1, j);
        s.erase(a[i][j]);
    };

    dfs(dfs, 0, 0);
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

// int main() {
//     int H, W;
//     cin >> H >> W;
//     vector<vector<int>> A(H, vector<int>(W));
//     rep(i, 0, H) rep(j, 0, W) cin >> A[i][j];

//     vector<pair<int, int>> move = {{1, 0}, {0, 1}};

//     int ans = 0;
//     auto f = [&](auto f, vector<int> a, set<int> s) -> void {
//         if (a[0] == H - 1 && a[1] == W - 1) {
//             ans++;
//             return;
//         }

//         for (auto [y, x] : move) {
//             int y2 = a[0] + y;
//             int x2 = a[1] + x;
//             if (y2 >= H || x2 >= W) continue;
//             int n = A[y2][x2];
//             if (s.find(n) != s.end()) continue;
//             s.insert(n);
//             f(f, {y2, x2}, s);
//             s.erase(n);
//         }
//     };

//     vector<int> start(2, 0);
//     set<int> first;
//     first.insert(A[0][0]);
//     f(f, start, first);
//     cout << ans << endl;
//     return 0;
// }