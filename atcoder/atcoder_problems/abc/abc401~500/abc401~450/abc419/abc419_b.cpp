#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int q;
    cin >> q;
    priority_queue<int, vector<int>, greater<>> pq;
    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int x;
            cin >> x;
            pq.push(x);
        }
        else {
            int x = pq.top(); pq.pop();
            cout << x << '\n';
        }
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
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     int Q;
//     cin >> Q;
//     vector<int> ans;
//     rep(qi, 0, Q) {
//         int n;
//         cin >> n;
//         if (n == 1) {
//             int x;
//             cin >> x;
//             ans.push_back(x);
//         } else {
//             sort(all(ans));
//             cout << ans[0] << endl;
//             ans.erase(ans.begin(), ans.begin() + 1);
//         }
//     }
//     return 0;
// }