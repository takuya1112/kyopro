#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll;

int main() {
    int x; cin >> x;
    while (1) {
        bool ok = true;
        int n = sqrt(x);
        rep(i, 2, n) {
            if (x % i == 0) {
                ok = false;
                break;
            }
        }
        if (ok) break;
        ++x;
    }
    cout << x << endl;
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i=a;i>=b;i--)
// #define all(x) (x).begin(),(x).end()
// typedef long long ll;

// const int MAX = 100004;

// int next_Prime(int x) {
//     rep(i, x, MAX) {
//         bool is_Prime = true;
//         rep(j, 2, i+1) {
//             if (i <= j) break;
//             if (i % j == 0) is_Prime = false;
//         }
//         if (is_Prime) return i;
//     }
//     return 0;
// }

// int main() {
//     int x; cin >> x;
//     cout << next_Prime(x) << endl;
//     return 0;
// }