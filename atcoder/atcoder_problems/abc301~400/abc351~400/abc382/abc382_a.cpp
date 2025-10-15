#include <iostream>
#include <string>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N, D;
    string S;
    cin >> N >> D >> S;
    int ans = 0;
    for (char c: S){
        if (c == '@') ans++;
    }
    cout << N - ans + D << endl;
    return 0;
}




// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)

// int main() {
//     int N, D;
//     string S;
//     cin >> N >> D >> S;
//     int ans = 0;
//     rep(i, N){
//         if (S[i] == '.')
//         ans ++;
//     }
//     cout << ans + D << endl;
//     return 0;
// }