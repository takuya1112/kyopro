#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    vector<int> a(4);
    rep(i, 0, 4) cin >> a[i];
    sort(all(a));
    if (a[0] == a[1] && a[2] == a[3]) {
        cout << 2 << endl;
    } else if (a[0] == a[1]) {
        cout << 1 << endl;
    } else if (a[1] == a[2]) {
        cout << 1 << endl;
    } else if (a[2] == a[3]) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
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
//     vector<int> A(4);
//     rep(i, 0, 4) cin >> A[i];
//     vector<bool> used(4, false);
//     int ans = 0;
//     rep(i, 0, 4) rep(j, i + 1, 4) {
//         if (A[i] == A[j] && used[i] == false && used[j] == false) {
//             ans++;
//             used[i] = true;
//             used[j] = true;
//         } 
//     }
//     cout << ans << endl;
//     return 0;
// }