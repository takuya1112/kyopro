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

    ll S = 0;
    vector<ll> A(N);
    rep(i, 0, N) {
        cin >> A[i];
        S += A[i];
    }

    ll minx = S, sum = 0;
    rep(i, 0, N) {
        sum += A[i];
        minx = min(minx, abs(sum - (S - sum)));
    }
    cout << minx << endl;
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
    
//     ll sum = 0;
//     rep(i, 0, N) sum += A[i];

//     ll ans = LONG_LONG_MAX;
//     ll n = 0;
//     rep(i, 0, N) {
//         n += A[i];
//         sum -= A[i];
//         ll diff = abs(sum - n);
//         ans = min(ans, diff);
//     }
//     cout << ans << endl;
//     return 0;
// }