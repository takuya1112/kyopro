#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using pint = pair<int, int>;

int main() {
    int M, N;
    cin >> M;
    vector<int> sx(M), sy(M);
    for (int i = 0; i < M; i++) cin >> sx[i] >> sy[i];
    
    cin >> N;
    vector<int> tx(N), ty(N);
    for (int i = 0; i < N; i++) cin >> tx[i] >> ty[i];

    set<pint> stars;
    for (int i = 0; i < N; i++) stars.insert(pint(tx[i], ty[i]));

    int resx, resy;
    for (int i = 0; i < N; i++) {
        int dx = tx[i] - sx[0], dy = ty[i] - sy[0];

        bool ok = true;
        for (int j = 0; j < M; j++) {
            if (!stars.count(pint(sx[j] + dx, sy[j] + dy))) ok = false;
        }
        if (ok) resx = dx, resy = dy;
    }
    cout << resx << " " << resy << endl;
    return 0;
}




// mycode worng ans
// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)

// int main() {
//     int N; cin >> N;
//     vector<int> x1(N), y1(N);
//     rep(i, N) cin >> x1[i] >> y1[i];

//     int M; cin >> M;
//     vector<int> x2(M), y2(M);
//     rep(i, M) cin >> x2[i] >> y2[i];

//     vector<pair<int, int>> manhattan;
//     for (int i = 0; i < N-1; i++) {
//         manhattan.push_back({x1[i] - x1[i+1], y1[i] - y1[i+1]});
//     }

//     rep(i, N-1) cout << manhattan[i].first << " " << manhattan[i].second << endl;

//     for (int i = 0; i < M; i++) {
//         for (int j = i + 1; j < M; j++) {
//             x2[i] - x2[j];
//             y2[i] - y2[j];

//             x2[j] - x2[i];
//             y2[j] - y2[i];
//         }
//     }
//     return 0;
// }