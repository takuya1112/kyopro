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
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];

    vector<int> s = a;
    sort(rall(s));

    rep(i, 0, n) {
        int ans = s[0];
        if (ans == a[i]) ans = s[1];
        cout << ans << endl;
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
//     int N;
//     cin >> N;
//     vector<int> A(N), B(N);
//     rep(i, 0, N) cin >> A[i];
//     B = A;
//     sort(rall(B));

//     rep(i, 0, N) {
//         if (A[i] != B[0]) cout << B[0] << endl;
//         else cout << B[1] << endl;
//     }
//     return 0;
// }