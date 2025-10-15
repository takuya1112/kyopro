#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll;

unordered_map<ll, ll> memo;
ll f(ll x) {
    if (x == 1) return 0;
    if (memo.count(x)) return memo[x];
    ll res = f(x/2) + f(x-x/2) + x;
    return memo[x] = res;
}

int main() {
    ll n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i = a; i >= b; i--)
// #define all(x) (x).begin(),(x).end()
// typedef long long ll;

// map<ll, ll> memo;

// ll f(ll x) {
//     if (x <= 1) return 0;
//     else if (memo.find(x) != memo.end()) return memo[x];
//     else {
//         ll n = f(x/2); 
//         ll m = f((x + 1) / 2);
//         memo[x] = x / 2 + (x + 1) / 2 + n + m;
//         return memo[x];
//     }
// }

// int main() {
//     ll N; cin >> N;
//     cout << f(N) << endl;
//     return 0;
// }