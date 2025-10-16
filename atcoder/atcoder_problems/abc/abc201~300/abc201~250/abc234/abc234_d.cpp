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
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    rep(i, 0, n) cin >> p[i];

    vector<bool> c(n + 1);
    int ans = 0;
    rep(i, 0, k) c[p[i]] = true;
    while (!c[ans]) ++ ans;
    cout << ans << endl;

    rep(i, k, n) {
        c[p[i]] = true;
        if (p[i] > ans) {
            ++ans;
            while (!c[ans]) ++ans;
        }
        cout << ans << endl;
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
// #define chmax(x, y) x = max(x, y)
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     int n, k;
//     cin >> n >> k;
//     vector<int> p(n);
//     rep(i, 0, n) cin >> p[i];

//     priority_queue<int, vector<int>, greater<int>> q;
//     rep(i, 0, k - 1) q.push(p[i]);

//     rep(i, k-1, n) {
//         q.push(p[i]);
//         if (q.size() > k) q.pop();
//         cout << q.top() << endl;
//     }
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
//     int N, K;
//     cin >> N >> K;
//     vector<int> P(N);
//     rep(i, 0, N) cin >> P[i];

   
//     vector<int> ans;
//     vector<bool> visited(N);

//     int a = N - K + 1;
//     rrep(i, N - 1, K-1) {
//         ans.push_back(a);

//         if (a <= P[i]) a--;
//         while (visited[a - 1]) a--;
//         visited[P[i] - 1] = true;
//     }

//     rrep(i, ans.size() - 1, 0) cout << ans[i] << ' ';
//     cout << endl;
//     return 0;
// }