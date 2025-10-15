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
    string S;
    cin >> S;

    int N = S.size();

    bool ok = true;
    rep(i, 1, N) if (S[i] != '9') ok = false;
    
    int ans = 9 * (N - 1);
    if (ok) ans += S[0] - '0';
    else ans += S[0] - '0' - 1;
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
// #define rall(x) (x).rbegin(),(x).rend()
// typedef long long ll; const int inf = INT_MAX / 2;


// int main() {
//     string S;
//     cin >> S;

//     int cnt = S.size();
//     if (cnt == 1) {cout << S << endl; return 0;}
    
//     bool ok = true;
//     rep(i, 1, cnt) {
//         if (S[i] != '9') ok = false;
//     }

//     int ans = 9 * (cnt - 1);
//     if (ok) ans += S[0] - '0';
//     else ans += (S[0] - '0') - 1;
//     cout << ans << endl;
//     return 0;
// }