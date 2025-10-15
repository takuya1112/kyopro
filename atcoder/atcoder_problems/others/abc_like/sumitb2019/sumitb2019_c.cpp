#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N; cin >> N;
    rep(i, N + 1) {
        int rest = N - i * 100;
        if (0 <= rest && rest <= 5 * i) {
            puts("1");
            return 0;
        }
        if (rest < 0) break;
    }
    puts("0");
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)

// int count(int x) {
//     int cnt = x / 100;
//     return cnt;
// }

// int main() {
//     int X; cin >> X;
//     int cnt = count(X);
//     int x = X % 100;
//     for (int i = 0; i < cnt; i++) {
//         if (x >= 5) x -= 5;
//         else if (x >= 4) x -= 4;
//         else if (x >= 3) x -= 3;
//         else if (x >= 2) x -= 2;
//         else if (x >= 1) x -= 1;
//     } 
//     if (x) cout << 0 << endl;
//     else cout << 1 << endl;
//     return 0;
// }