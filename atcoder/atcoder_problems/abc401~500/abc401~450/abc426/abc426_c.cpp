#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define chmin(x, y) x = min(x, y)
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> pc(n + 1, 1);
    pc[0] = 0;
    int o = 1;

    while (q--) {
        int x, y;
        cin >> x >> y;
        int res = 0;
        while (o <= x) {
            res += pc[o];
            pc[y] += pc[o];
            o++;
        }
        cout << res << '\n';
    }
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
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     int N, Q;
//     cin >> N >> Q;

//     int cur = 0;
//     int min_y = inf;
//     int cnt = 0;
//     rep(i, 0, Q) {
//         int x, y;
//         cin >> x >> y;
//         if (cur >= x) cout << 0 << endl;
//         else {
//             if(min_y > x) {
//                 cout << x - cur << endl;  
//                 cur = max(cur, x);
//                 if (min_y > y) {

//                 }
//                 min_y = min(min_y, y);
//             } 
//             else {
//                 cout << x - cur << endl;
//             }
            
//         }
 
//     }
//     return 0;
// }