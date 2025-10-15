#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int N; string S;
    cin >> N >> S;
    if (N < 3) {
        cout << "No\n";
    } else {
        if (S[N - 3] == 't' && S[N - 2] == 'e' && S[N - 1] == 'a') {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
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
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     int N; string S;
//     cin >> N >> S;
//     if (N < 3) {
//         cout << "No" << endl;
//         return 0;
//     }
//     string t = S.substr(N - 3, 3);
//     if (t == "tea") cout << "Yes" << endl;
//     else cout << "No" << endl;
//     return 0;
// }