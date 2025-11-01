#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int N, sum = 0, res = 0;
    cin >> N;
    vector<int> s(N);
    rep(i, 0, N) {
        cin >> s[i];
        sum += s[i];
    }

    if (sum % 10 != 0) res = sum;
    else {
        rep(i, 0, N) {
            if ((sum - s[i]) % 10 != 0) res = max(res, sum - s[i]);
        }
    }
    cout << res << endl;
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
// #define chmin(x, y) x = min(x, y)
// #define chmax(x, y) x = max(x, y)
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     int n;
//     cin >> n;
//     vector<int> s(n);
//     rep(i, 0, n) cin >> s[i];

//     int sum = 0;
//     rep(i, 0, n) sum += s[i];

//     sort(all(s));

//     int ans = 0;
//     if (sum % 10) ans = sum;
//     rep(i, 0, n) {
//         if ((sum - s[i]) % 10) ans = max(ans, sum - s[i]);
//     }
//     cout << ans << endl;
//     return 0;
// }