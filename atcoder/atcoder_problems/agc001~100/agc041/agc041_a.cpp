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
    ll N, A, B;
    cin >> N >> A >> B;

    if (A % 2 == B % 2) cout << (B - A) / 2 << endl;
    else {
        ll ans = min(A - 1, N - B) + 1 + ((B - A - 1) / 2);
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
//     ll N, A, B;
//     cin >> N >> A >> B;

//     if (A % 2 == B % 2) cout << (B - A) / 2 << endl;
//     else {
//         ll ans = 0;
//         ll a = A - 1, b = N - B;
//         a++; b++;
//         if (a > b) {
//             A += b;
//             B += b; 
//             ans += b;
//         } 
//         else {
//             B -= a; 
//             A -= a; 
//             ans += a;
//         }
//         ans += (B - A) / 2;
//         cout << ans << endl;
//     }
//     return 0;
// }