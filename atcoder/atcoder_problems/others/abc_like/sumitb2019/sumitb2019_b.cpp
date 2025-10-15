#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N; 
    cin >> N;
    for (int X = 1; X <= N; X++) {
        double x = X;
        x = (int)(x * 1.08);
        if (x == N) {
            cout << X << endl;
            return 0;
        }
    }
    cout << ":(" << endl;
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)

// int main() {
//     int N;
//     cin >> N;
//     for (int i = 1; i <= N; i++) {
//         if ((int)(i * 1.08) == N) {
//             cout << i << endl;
//             return 0;
//         }
//     }
//     cout << ":(" << endl;
//     return 0;
// }