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
    string O, E;
    cin >> O >> E;
    rep(i, 0, E.size()) cout << O[i] << E[i];
    if (O.size() > E.size()) cout << O.back() << endl;
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
//     string O, E;
//     cin >> O >> E;

//     string ans;
//     rep(i, 0, O.size()) {
//         ans += O[i];
//         if (i < E.size()) ans += E[i];
//     }
//     cout << ans << endl;
//     return 0;
// }