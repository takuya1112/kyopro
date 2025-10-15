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
    int A, B, K;
    cin >> A >> B >> K;
    if (B - A + 1 >= 2 * K) {
        rep(i, 0, K) {
            cout << A + i << endl;
        }
        rrep(i, K - 1, 0) {
            cout << B - i << endl;
        }
    } else {
        rep(i, A, B + 1) {
            cout << i << endl;
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
// #define rall(x) (x).rbegin(),(x).rend()
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     int A, B, K;
//     cin >> A >> B >> K;
//     B ++;

//     set<int> s;
//     rep(i, A, min(A + K, B)) {
//         s.insert(i);
//     }

//     rep(i, max(B - K, A), B) {
//         s.insert(i);
//     }

//     for (auto it : s) {
//         cout << it << endl;
//     }
//     return 0;
// }