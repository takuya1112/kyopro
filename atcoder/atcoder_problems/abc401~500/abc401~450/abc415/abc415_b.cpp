#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    string s;
    cin >> s;

    auto take = [&]() {
        rep(i, s.size()) if (s[i] == '#') {
            s[i] = '.';
            return i;
        }
        return -1;
    };

    while (1) {
        int i = take();
        if (i == -1) break;
        int j = take();
        cout << i + 1 << "," << j+1 << endl;
    }
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)

// int main() {
//     string S;
//     cin >> S;
//     int cnt = 0;
//     rep(i, S.size()) {
//         if (S[i] == '#') {
//             if (cnt == 0) {
//                 cout << i+1 << ",";
//                 cnt ++;
//             }
//             else {
//                 cout << i+1 << endl;
//                 cnt = 0;
//             }
//         }
//     }
//     return 0;
// }