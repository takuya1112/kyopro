#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define ll long long
const ll INF = 1LL << 60;

int calc_digit(ll n) {
    int res = 0; 
    while (n) {
        res++;
        n /= 10;
    }
    return res;
}


int main() {
    ll N; cin >> N;
    ll res = INF;
    for (ll a = 1; a * a <= N; a++) {
        if (N % a != 0) continue;
        ll b = N / a;
        ll tmp = max(calc_digit(a), calc_digit(b));
        res = min(res, tmp);
    }
    cout << res << endl;
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 1; i < (n); ++i)
// #define ll long long

// int count(int x) {
//     int cnt = 0;
//     while (x) {
//         cnt++;
//         x /= 10;
//     }
//     return cnt;
// }

// int ans = 100;
// int main() {
//     ll N;
//     cin >> N;
//     int Max = sqrt(N) + 1.5;
//     rep(a, Max) {
//         ll b = N / a;
//         if ((ll) a * b == N) {
//             ans = min(ans, max(count(a), count(b)));
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }




// int main(){
//     long long N;
//     cin >> N;
//     int ans = 100000;
//     for (long long A = 1; A <= sqrt(N); A++){
//         if (N % A == 0){
//             long long B = N / A;
//             int count = 0;
//             if (A >= B){
//                 long long a = A;
//                 while (a > 0) {a /= 10; count ++;} 
//             }else {
//                 long long b = B;
//                 while (b > 0) {b /= 10; count ++;} 
//             } 
//             ans = min(ans, count);
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }