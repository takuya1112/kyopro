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
    ll A, B, C;
    cin >> A >> B >> C;

    if (A % 2 == 0 || B % 2 == 0 || C % 2 == 0) cout << 0 << endl;
    else cout << min(A * B, min(A * C, B * C));
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
//     vector<ll> A(3);
//     rep(i, 0, 3) cin >> A[i];

//     sort(all(A));
//     bool ok = false;
//     rep(i, 0, 3) if (A[i] % 2 == 0) ok = true;
//     if (ok)  cout << 0 << endl;
//     else cout << A[0] * A[1] << endl;
//     return 0;
// }