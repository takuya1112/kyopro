#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N, M; 
    cin >> N >> M;
    vector<vector<int>> P(N, vector(N, 0));

    rep(i, M) {
        int x, y; 
        cin >> x >> y;
        x--; y--;
        P[x][y] = 1;
        P[y][x] = 1;
    }

    int ans = 0;
    rep(bit, 1 << N) {
        vector<int> check;
        rep(i, N) if (bit >> i & 1) check.push_back(i);
        bool ok = true;
        for (auto a : check) for (auto b : check) {
            if (a == b) continue;
            if (P[a][b] == 0) ok = false;
        }
        if (ok) ans = max(ans, __builtin_popcount(bit));
    }
    cout << ans << endl;
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i,n) for (int i = 0; i < (n); ++i)
// #define ll long long

// int main() {
//     int N, M;
//     cin >> N >> M;
//     vector<vector<int>> P(N, vector<int>(N, 0));

//     rep(i, M) {
//         int x, y;
//         cin >> x >> y;
//         x--; 
//         y--;
//         P[x][y] = 1;
//         P[y][x] = 1;
//     }


//     int ans = 0;
//     rep(bit, 1 << N) {
//         vector<int> d(N, 0);
//         rep(i, N) {
//             if (bit >> i & 1) {
//                 d[i] = 1;
//             }
//         }

//         bool ok = true;
//         rep(i, N) {
//             if (d[i]) {
//                 rep(j, N) {
//                     if (i == j) continue;
//                     if (P[i][j] == 0 && d[j] == 1) ok = false;
//                 }
//             }
//         }
//         if (ok) ans = max(ans, __builtin_popcount(bit));
//     }
//     cout << ans << endl;
//     return 0;
// }