#include <bits/stdc++.h>P
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n, q; string s;
    cin >> n >> q >> s;

    int p = 0;
    rep(qi, q) {
        int type, x;
        cin >> type >> x;
        if (type == 1) {
            p = (p-x+n) % n;
        } else {
            cout << s[(p+x-1) % n] << '\n';
        }
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)

// int main() {
//     int N, Q; string S;
//     cin >> N >> Q >> S;

//     int cnt = 0;
//     rep (i, Q) {
//         int t, x; 
//         cin >> t >> x;
//         if (t == 1) {
//             cnt += x;
//             cnt %= N;
//         }
//         else if (t == 2) {
//             if (x > cnt) cout << S[x - cnt -1] << endl;
//             else if (x <= cnt) cout << S[N - cnt + x -1] << endl;
//         }
//     }
//     return 0;
// }