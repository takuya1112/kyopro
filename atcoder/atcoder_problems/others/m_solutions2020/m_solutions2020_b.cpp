#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int A, B, C, K;
    cin >> A >> B >> C >> K;
    int t = 0;
    while (A >= B) {
        B *= 2;
        t++;
    }

    while (B >= C) {
        C *= 2;
        t++;
    }
    if (t <= K) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)

// int main() {
//     int A, B, C, K;
//     cin >> A >> B >> C >> K;
//     int cnt = 0;
//     while (A >= B) {
//         B *= 2;
//         cnt++;
//     }

//     while (B >= C) {
//         C *= 2;
//         cnt++;
//     }

//     if (K >= cnt) cout << "Yes" << endl;
//     else cout << "No" << endl;
//     return 0;
// }