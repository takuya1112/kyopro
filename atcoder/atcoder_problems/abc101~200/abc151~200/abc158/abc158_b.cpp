#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    ll n, a, b;
    cin >> n >> a >> b;
    ll c = a + b;
    ll ans = a * (n / c);
    ans += min(n % c, a);
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

// int main() {
//     ll N, A, B;
//     cin >> N >> A >> B;
//     ll C = A + B;
//     ll ans = 0, cnt = N / C, reminder = N % C;

//     ans += A * cnt;
//     ans += min(A, reminder);
//     cout << ans << endl;
//     return 0;
// }