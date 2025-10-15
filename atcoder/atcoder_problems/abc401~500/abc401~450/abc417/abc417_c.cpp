#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int N; cin >> N;
    map<int, int> counter;
    ll ans = 0;

    rep(i, 0, N) {
        int a; cin >> a;
        ans += counter[i - a];
        ++counter[i + a];
    }
    cout << ans << endl;
    return 0;
}


// mycode worng ans
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
//     vector<int> A(N);
//     rep(i, 0, N) cin >> A[i];
//     int ans = 0;
//     rep(i, 0, N) {
//         rep(j, A[i] + 1, N) {
//             ll sum = A[i] + A[j];
//             if (sum == j - i) ans++;
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }

