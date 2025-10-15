#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
typedef long long ll; const int inf = INT_MAX / 2;

string rotate(string s) {
    return s.substr(1) + s[0];
}

int main() {
    string s, t;
    cin >> s >> t;
    int N = s.size();

    rep(i, 0, N) {
        if (s == t) {
            cout << "Yes" << endl;
            return 0;
        }

        s = rotate(s);
    }
    cout << "No" << endl;
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i = a; i >= b; i--)
// #define all(x) (x).begin(),(x).end()
// #define rall(x) (x).rbegin(),(x).rend()
// typedef long long ll; const int inf = INT_MAX / 2;

// string change(string s) {
//     string t;
//     t += s[s.size() - 1];
//     rep(i, 0, s.size() - 1) {
//         t += s[i];
//     }
//     return t;
// }

// int main() {
//     string S, T;
//     cin >> S >> T;

//     rep(i, 0, S.size()) {
//         S = change(S);
//         if (S == T) {
//             cout << "Yes" << endl;
//             return 0;
//         }
//     }
//     cout << "No" << endl;
//     return 0;
// }