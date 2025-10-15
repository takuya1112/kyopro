#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int k;
    cin >> k;
    queue<ll> que;
    rep(i, 1, 10) que.push(i);

    rep (i, 0, k-1) {
        ll s = que.front(); que.pop();
        rep(j, -1, 2) {
            int d = s % 10 + j;
            if (d < 0 || d > 9) continue;
            que.push(s * 10 + d); 
        }
    }
    cout << que.front() << endl;
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
//     int k; 
//     cin >> k;
//     vector<ll> a;
//     rep(i, 1, 10) a.push_back(i);
//     while (1) {
//         if (k <= a.size()) {
//             cout << a[k - 1] << endl;
//             return 0;
//         }
//         k -= a.size();
//         vector<ll> old;
//         swap(old, a);
//         for (ll x : old) {
//             rep(i, -1, 2) {
//                 int d = x % 10 + i;
//                 if (d < 0 || d > 9) continue;
//                 ll nx = x * 10 + d;
//                 a.push_back(nx);
//             }
//         }
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
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     int K;
//     cin >> K;
//     vector<ll> n(1, 9);
//     while (n.back() <= K) {
//         ll b = n.back();
//         n.push_back(b * 3);
//     }
//     int k = n.size();

//     vector<ll> ans;
//     auto f = [&](auto f, ll x, int cnt) {
//         ans.push_back(x);
//         if (cnt == k) {
//             return;
//         }
//         int a = x % 10;
//         if (a > 0) f(f, 10 * x + a - 1, cnt + 1);
//         f(f, 10 * x + a, cnt + 1);
//         if (a < 9) f(f, 10 * x + a + 1, cnt + 1);
    
//     };

//     rep(i, 1, 10) {
//         f(f, {i}, 1);
//     }
//     sort(all(ans));
//     cout << ans[K - 1] << endl;
//     return 0;
// }