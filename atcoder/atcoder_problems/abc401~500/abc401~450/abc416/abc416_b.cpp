#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    string s;
    cin >> s;
    int n = s.size();
    vector<char> t(n);
    for (int i = 0; i < n; i++) {
        if (s[i] == '#') {
            cout << '#';
        } else if (i == 0 || s[i - 1] == '#') {
            cout << 'o';
        } else {
            cout << '.';
        }
    }
    cout << endl;
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)
// #define ll long long

// int main() {
//     string S;
//     cin >> S;
//     string T = "";
//     bool first = true;
//     int cnt = 0;
//     rep(i, S.size()) {
//         if (first && S[i] == '.') {
//             T += 'o';
//             first = false;
//             cnt = 0;
//         }
//         else if (S[i] == '#') {
//            T += '#';
//            cnt ++;
//         }
//         else {
//             if (cnt >= 1) {
//                 T += 'o';
//                 cnt = 0;
//             }
//             else T += '.';
//         }
//     }
//     cout << T << endl;
//     return 0;
// }