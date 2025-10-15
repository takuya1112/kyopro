#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int N, L, R; string S;
    cin >> N >> L >> R >> S;
    for (int i = L-1; i < R; i++) {
        if (S[i] == 'x') {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)
// #define ll long long

// int main() {
//     int N, L, R;
//     string S;
//     cin >> N >> L >> R >> S;
//     L--;
//     R--;
//     for (int i = L; i <= R; i++) {
//         if (S[i] == 'x') {
//             cout << "No" << endl;
//             return 0;
//         } 
//     }
//     cout << "Yes" << endl;
//     return 0;
// }