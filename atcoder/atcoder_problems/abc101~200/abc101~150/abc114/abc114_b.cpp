#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    string S;
    cin >> S;
    int ans = inf;
    int n = S.size();
    rep(i, 0, n-2) {
        int x = (S[i] - '0') * 100 + (S[i+1] - '0') * 10 + (S[i+2] - '0');
        ans = min(ans, abs(x - 753));
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
// typedef long long ll;

// int main() {
//     string S; cin >> S;
//     int ans = 1000;
//     rep(i, 0, S.size()-2) {
//         int n = 0;
//         n += (S[i] - '0') * 100; 
//         n += (S[i+1] - '0') * 10; 
//         n += (S[i+2] - '0'); 
//         ans = min(ans, abs(753 - n));
//     }
//     cout << ans << endl;
//     return 0;
// }