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
    int N;
    cin >> N;
    vector<int> A(N + 1), B(N);
    rep(i, 0, N + 1) cin >> A[i];
    rep(i, 0, N) cin >> B[i];

    ll ans = 0;
    rep(i, 0, N) {
        int left = min(A[i], B[i]);
        ans += left;
        A[i] -= left;
        B[i] -= left;

        int right = min(A[i + 1], B[i]);
        ans += right;
        A[i + 1] -= right;
        B[i] -= right;
    }
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
//     vector<int> A(N + 1), B(N);
//     rep(i, 0, N + 1) cin >> A[i];
//     rep(i, 0, N) cin >> B[i];

//     ll ans = 0;
//     rep(i, 0, N) {
//         if (A[i] >= B[i]) ans += B[i];
//         else ans += A[i];

//         int a = A[i], b = B[i];
//         A[i] = max(a - b, 0);
//         B[i] = max(b - a, 0);

//         if (A[i + 1] >= B[i]) ans += B[i];
//         else ans += A[i + 1];

//         a = A[i + 1], b = B[i]; 
//         A[i + 1] = max(a - b, 0);
//         B[i] = max(b - a, 0);
//     }


//     cout << ans << endl;
//     return 0;
// }