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
    ll A, B, C, K;
    cin >> A >> B >> C >> K;
    if (K % 2 == 0) cout << A - B << endl;
    else cout << B - A << endl;
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
//     ll A, B, C, K;
//     cin >> A >> B >> C >> K;

//     int ans = A - B;
//     if (K % 2 == 0) cout << ans << endl;
//     else cout << - ans << endl;
//     return 0;
// }