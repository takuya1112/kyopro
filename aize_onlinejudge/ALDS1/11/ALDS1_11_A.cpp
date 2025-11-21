#include <bits/stdc++.h>
using namespace std;

using vint = vector<int>;
#define rep(i, a) for (long long i = 0; i < (long long)(a); i++)


// ========================================
//                  solve
// ========================================
static const int N = 100;

int main() {
    int M[N][N];

    int n, u, k, v;
    cin >> n;
    rep(i, n) rep(j, n) M[i][j] = 0;

    rep(i, n) {
        cin >> u >> k;
        u--;
        rep(j, k) {
            cin >> v;
            v--;
            M[u][v] = 1;
        }
    }

    rep(i, n) {
        rep(j, n) {
            if (j) cout << " ";
            cout << M[i][j];
        }
        cout << endl;
    }
}

// mycode AC
// int main() {
//     int N, u, k, v;
//     cin >> N;

//     vector<vint> G(N, vint(N));

//     rep(i, N) {
//         cin >> u >> k;
//         u--;
//         rep(j, k) {
//             cin >> v;
//             v--;
//             G[u][v] = 1;
//         }
//     }
    
//     rep(i, N) {
//         rep(j, N) {
//             if (j) cout << ' ';
//             cout << G[i][j];
//         }cout << endl;
//     }
//     return 0;
// }