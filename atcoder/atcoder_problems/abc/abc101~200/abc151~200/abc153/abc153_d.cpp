#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll;

ll f(ll x) {
    if (x == 1) return 1;
    ll a = f(x/2);
    return a * 2 + 1;
}

int main() {
    ll h; cin >> h;
    cout << f(h) << endl;
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i=a;i>=b;i--)
// #define all(x) (x).begin(),(x).end()
// typedef long long ll;


// ll attack(ll x) {
//     if (x == 1) {
//         return 1;
//     }
//     return 2 * attack(x/2) + 1;
// }

// int main() {
//     ll H; cin >> H;
//     cout << attack(H) << endl;
//     return 0;
// }