#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)

bool f(int x) {
    int kata = 0;
    while (x) {
        kata++;
        x /= 10;
    }
    return kata % 2 == 1;
}

int main() {
    int N;
    cin >> N;
    int ans = 0;
    for (int i = 1; i <= N; i++) {
        if (f(i)) ans++;
    }
    cout << ans << endl;
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)

// int count(int n) {
//     int cnt = 0;
//     while (n) {
//         cnt += 1;
//         n /= 10;
//     }
//     return cnt;
// }

// int main() {
//     int N;
//     cin >> N;
//     int ans = 0;
//     for (int i = 1; i <= N; i++) {
//         if (count(i) % 2 == 1) ans++;
//     }
//     cout << ans << endl;
//     return 0;
// }