#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
typedef long long ll; const int inf = INT_MAX / 2;

bool check(string s) {
    if (s[0] != 'A') return false;

    int cnt = 0;
    rep(i, 2, s.size() - 1) {
        if (s[i] == 'C') cnt++;
    }
    if (cnt != 1) return false;

    int upper = 0;
    rep(i, 0, s.size()) {
        if (s[i] >= 'A' && s[i] <= 'Z') upper++;
    }

    if (upper != 2) return false;

    return true;
}

int main() {
    string S;
    cin >> S;

    if (check(S)) {
        cout << "AC" << endl;
    } else {
        cout << "WA" << endl;
    }
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

// int main() {
//     string S;
//     cin >> S;

//     bool ok = true;
//     if (S[0] == 'A') {
//         S[0] = 'a';
//     } else ok = false;
    
//     int cnt = 0;
//     rep(i, 2, S.size() - 1) {
//         if (S[i] == 'C') {
//             cnt++;
//             S[i] = 'c';
//         }
//     }
//     if (cnt != 1) ok = false;

//     rep(i, 0, S.size()) {
//         if (isupper(S[i])) ok = false;
//     }
//     if (ok) cout << "AC" << endl;
//     else cout << "WA" << endl;
//     return 0;
// }