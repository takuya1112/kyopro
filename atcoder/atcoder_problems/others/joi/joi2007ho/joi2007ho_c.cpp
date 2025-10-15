#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int MAX = 5000;

int main() {
    vector isin(MAX, vector(MAX, false));
    int N; 
    cin >> N;
    vector<int> x(N), y(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
        isin[x[i]][y[i]] = true;
    }

    auto check = [&](int p, int q) -> bool {
        if (p < 0 || p >= MAX || q < 0 || q >= MAX) return false;
        return isin[p][q];
    };

    int res = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int x1 = x[i], y1 = y[i], x2 = x[j], y2 = y[j];
            int dx = x2 - x1, dy = y2 - y1;
            int square = dx * dx + dy * dy;

            {
                int x3 = x1 - dy, y3 = y1 + dx;
                int x4 = x2 + x3 - x1, y4 = y2 + y3 - y1;
                if (check(x3, y3) && check(x4, y4)) {
                    res = max(res, square);
                }
            }

            {
                int x3 = x1 + dy, y3 = y1 - dx;
                int x4 = x2 + x3 - x1, y4 = y2 + y3 - y1;
                if (check(x3, y3) && check(x4, y4)) {
                    res = max(res, square);
                }
            }
        }
    }
    cout << res << endl;
    return 0;
}



// mycode worng ans
// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)
// #define ll long long

// int main() {
//     int N; cin >> N;
//     vector<pair<int, int>> cordinate(N);
//     rep(i, N) {
//         cin >> cordinate[i].first >> cordinate[i].second;
//     }

//     ll ans = 0;
//     for (int i = 0; i < N; i++) {
//         for (int j = i + 1; j < N; j++) {
//             for (int k = j + 1; k < N; k++) {
//                 for (int n = k + 1; n < N; n++) {
                    
//                 }
//             }
//         }
//     }
//     return 0;
// }