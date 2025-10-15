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
    vector<int> A(N);
    rep(i, 0, N) cin >> A[i];

    int all = 1, bad = 1;
    rep(i, 0, N) {
        all *= 3;
        if (A[i] % 2 == 0) bad *= 2;
    }
    cout << all - bad << endl;
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
//     vector<int> A(N);
//     rep(i, 0, N) cin >> A[i];

//     vector<int> a(N);

//     int ans = 0;
//     auto f = [&](auto f, int n) {
//         if (n == N) {
//             int cnt = 0;
//             rep(i, 0, N) if (a[i] % 2 == 0) cnt++;
//             if (cnt) ans++;
//             return;
//         }

//         a[n] = A[n] - 1; 
//         f(f, n + 1);
//         a[n] = A[n];
//         f(f, n + 1);
//         a[n] = A[n] + 1;
//         f(f, n + 1);
//     };

//     f(f, 0);
//     cout << ans << endl;
//     return 0;
// }