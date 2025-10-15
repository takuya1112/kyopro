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

    vector<int> cnt(2, 0);
    rep(i, 0, S.size()) {
        cnt[S[i] - '0'] ++;
    }

    int ans = min(cnt[0], cnt[1]) * 2;
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

//     int n = 0, k = 0;
//     rep(i, 0, S.size()) {
//         if (S[i] == '0') n++;
//         else k++;
//     }

//     int ans = 2 * min(n, k);
//     cout << ans << endl;
//     return 0;
// }