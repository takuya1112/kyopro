#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

const int mod = 1'000'000'007;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];
    int ans = 0;
    int x = 0;
    rep(i, 0, n) {
        ans = (ans + (ll)a[i] * x) % mod;
        x = (x + a[i]) % mod;
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
// typedef long long ll; const int inf = INT_MAX / 2;

// const int mod = pow(10, 9) + 7;

// int main() {
//     int N;
//     cin >> N;
//     vector<ll> A(N);
//     rep(i, 0, N) cin >> A[i];

//     vector<ll> B(N);
//     ll sum = 0;
//     rep(i, 1, N) sum += A[i]; 
//     B[0] = sum;

//     rep(i, 1, N) {
//         B[i] = B[i-1] - A[i];
//     }

//     ll ans = 0;
//     rep(i, 0, N){
//         ll a = A[i] % mod, b = B[i] % mod; 
//         ans += a * b;
//         ans %= mod;
//     }
//     cout << ans << endl;
//     return 0;
// }