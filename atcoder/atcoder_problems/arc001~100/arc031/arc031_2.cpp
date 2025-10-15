#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

const int N = 10;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

bool is_inside(int y, int x) { return 0 <= x && x < N && 0 <= y && y < N; }

int main() {
    vector<string> A(N);
    rep(i, 0, N) cin >> A[i];

    vector<vector<bool>> visited;
    auto dfs = [&](auto dfs, int y, int x) -> void {
        visited[y][x] = true;
        rep(i, 0, 4) {
            int ny = y + dy[i], nx = x + dx[i];
            if (is_inside(ny, nx) && !visited[ny][nx] && A[ny][nx] != 'x') dfs(dfs, ny, nx);
        }
    };

    auto f = [&](auto f, int sy, int sx) -> bool {
        visited.assign(N, vector<bool>(N, false));
        dfs(dfs, sy, sx);

        rep(i, 0, N) rep(j, 0, N) {
            if (A[i][j] == 'o' && !visited[i][j]) return false;
        }
        return true;
    };

    int sy = -1, sx = -1;
    rep(i, 0, N) rep(j, 0, N) {
        if (A[i][j] == 'o') sy = i, sx = j;
    }
    if (sy != -1 && f(f, sy, sx)) {
        cout << "YES" << endl;
        return 0;
    }

    rep(i, 0, N) rep(j, 0, N) {
        if (A[i][j] == 'x') {
            A[i][j] = 'o';
            if (f(f, i, j)) {
                cout << "YES" << endl;
                return 0;
            }
            A[i][j] = 'x';
        }
    }
    cout << "NO" << endl;
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

// const int N = 10;
// const int dy[4] = {1, 0, -1, 0};
// const int dx[4] = {0, 1, 0, -1};

// int main() {
//     vector<string> A(N);
//     rep(i, 0, N) cin >> A[i];
//     vector<vector<bool>> visited;

//     auto dfs = [&](auto dfs, int y, int x) -> void {
//         visited[y][x] = true;
//         rep(i, 0, 4) {
//             int ny = y + dy[i], nx = x + dx[i];
//             if (ny < 0 || ny >= N || nx < 0 || nx >= N) continue;
//             if (A[ny][nx] == 'x') continue;
//             if (visited[ny][nx]) continue;
//             dfs(dfs, ny, nx);
//         }
//     };

//     auto f = [&](auto f) -> bool {
//         visited.assign(N, vector<bool>(N, false));
//         int cnt = 0;
//         rep(i, 0, N) {
//             rep(j, 0, N) {
//                 if (A[i][j] == 'x') continue;
//                 if (visited[i][j]) continue;
//                 dfs(dfs, i, j);
//                 cnt++;
//             }   
//         }
        
//         return cnt == 1 ? true : false;
//     };

//     bool ok = false;
//     rep(i, 0, N) {
//         rep(j, 0, N) {
//             if (A[i][j] == 'o') continue;
//             A[i][j] = 'o';

//             if (f(f)) ok = true;
//             A[i][j] = 'x';
//         }
//     }
//     if (ok) cout << "YES" << endl;
//     else cout << "NO" << endl; 
//     return 0;
// }
