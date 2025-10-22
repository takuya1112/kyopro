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
    int s, a, b, x;
    cin >> s >> a >> b >> x;

    int len = 0;
    len += (x / (a + b)) * a;
    len += min(x % (a + b), a);

    int ans = len * s;
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
// #define chmin(x, y) x = min(x, y)
// #define chmax(x, y) x = max(x, y)
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     int s, a, b, x;
//     cin >> s >> a >> b >> x;
//     int len = 0;
//     int mode = 0, cnt = 0;
//     rep(i, 0, x) {
//         if (mode == 0) len++;

//         cnt++;
//         if (mode == 0 && cnt == a) {
//             mode = 1;
//             cnt = 0;
//         } else if (mode == 1 && cnt == b) {
//             mode = 0;
//             cnt = 0;
//         }
//     }
//     int ans = len * s;
//     cout << ans << endl;
//     return 0;
// }


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
//     int s, a, b, x;
//     cin >> s >> a >> b >> x;
//     int ans = 0, t = 0;

//     while (x > t) {
//         ans += s * min(a, x - t);
//         t += a;
//         t += b;
//     }
//     cout << ans << endl;
//     return 0;
// }