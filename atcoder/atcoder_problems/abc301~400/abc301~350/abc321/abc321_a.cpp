#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i + 1 < s.size(); i++) {
        if (s[i] <= s[i + 1]) {
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
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i = a; i >= b; i--)
// #define all(x) (x).begin(),(x).end()
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     int N;
//     cin >> N;

//     bool ok = true;
//     int pre = -1;
//     while (N) {
//         if (pre >= N % 10) ok = false;
//         pre = N % 10;
//         N /= 10;
//     }
//     if (ok) cout << "Yes" << endl;
//     else cout << "No" << endl;
//     return 0;
// }