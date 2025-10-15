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
    vector<int> b(n-1);
    rep(i, 0, n-1) cin >> b[i];

    vector<int> a(n);
    a[0] = b[0];
    rep(i, 1, n-1) {
        a[i] = min(b[i], b[i-1]);
    }
    a[n-1] = b[n-2];
    
    int ans = 0;
    rep(i, 0, n) ans += a[i];
    cout << ans << endl;
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
//     vector<int> A(N, inf), B(N-1);
//     rep(i, 0, N-1) cin >> B[i];

//     rep(i, 0, N-1) {
//         A[i] = min(B[i], A[i]);
//         A[i+1] = min(B[i], A[i+1]);
//     }
//     int ans = 0;
//     rep(i, 0, N) {
//         ans += A[i];
//     }
//     cout << ans << endl;
//     return 0;
// }