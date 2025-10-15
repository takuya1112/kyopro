#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int N, D;
    cin >> N >> D;
    int X[N][D];
    for (int i = 0; i < N; i++){
        for (int j = 0; j < D; j++) cin >> X[i][j];
    }
    int ans = 0;
    for (int i = 0; i < N - 1; i++){
        for (int j = i + 1; j < N; j++){
            int dis = 0;
            for (int k = 0; k < D; k++){
                dis += abs(X[i][k] - X[j][k]) * abs(X[i][k] - X[j][k]);
            }
            
            int n = sqrt(dis) +0.5; 
            // +0.5 はsqrt の誤差防止のため
            if (n * n == dis) ans += 1; 
        }
    }
    cout << ans << endl;
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)

// int main() {
//     int N, D;
//     cin >> N >> D;
//     vector<vector<int>> X(N, vector<int>(D));
//     rep(i, N) {
//         rep(j, D) cin >> X[i][j];
//     }
//     int ans = 0;
//     for (int i = 0; i < N; i++) {
//         for (int j = i + 1; j < N; j++) {
//             int dist = 0;
//             for (int k = 0; k < D; k++){
//                 dist += abs(X[i][k] - X[j][k]) * abs(X[i][k] - X[j][k]);
//             }
//             int x = sqrt(dist);
//             float y = sqrt(dist);
//             if (x == y) ans++;
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }