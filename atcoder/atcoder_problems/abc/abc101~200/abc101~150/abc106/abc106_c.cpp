#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    string S; ll K;
    cin >> S >> K;

    rep(i, 0, K) {
        if (S[i] != '1') {
            cout << S[i] << endl;
            return 0;
        }
    }
    cout << 1 << endl;
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
//     string S; ll K;
//     cin >> S >> K;

//     int first = 0;
//     rep(i, 0, S.size()) {
//         if (S[i] != '1') {
//             first = i;
//             break;
//         }
//     }

//     if (K >= first + 1) cout << S[first] << endl;
//     else cout << 1 << endl;
//     return 0;
// }