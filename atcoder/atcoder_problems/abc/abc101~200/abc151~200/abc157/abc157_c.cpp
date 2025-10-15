#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define ll long long
using P = pair<int, int>;

int main() {
    int N, M;
    cin >> N >> M;
    vector<P> p(M);
    rep(i, M) cin >> p[i].first >> p[i].second;
    rep(x, 1000) {
        int kata = 1;
        int nx = x / 10;
        vector<int> d(1, x%10);
        while (nx) {
            kata++;
            d.push_back(nx%10);
            nx /= 10;
        }
        if (kata != N) continue;
        bool ok = true;
        reverse(d.begin(), d.end());
        rep(i, M) {
            if (d[p[i].first -1] != p[i].second) ok = false;
        }
        if (ok) {
            cout << x << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}




// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)

// int N, M; 
// vector<int> S(10), C(10);

// bool count(int x) {
//     int cnt = 0;
//     if (x == 0) cnt++;
//     while (x) {
//         cnt++;
//         x /= 10;
//     }
//     return cnt == N;
// }

// bool check(int x) {
//     rep(i, M) {
//         int s = S[i]-1; 
//         int c = C[i];
//         string S = to_string(x);
//         if (S[s] - '0' != c) return false;
//     }
//     return true;
// }


// int main() {
//     cin >> N >> M;
//     rep(i, M) cin >> S[i] >> C[i];
//     for (int i = 0; i < 1000; i++) {
//         if (count(i) && check(i)) {
//             cout << i << endl;
//             return 0;
//         }
//     }
//     cout << -1 << endl;
//     return 0;
// }