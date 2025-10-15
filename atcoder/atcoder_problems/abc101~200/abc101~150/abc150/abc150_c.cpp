#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<int> p(n), q(n);
    rep(i, 0, n) cin >> p[i];
    rep(i, 0, n) cin >> q[i];

    vector<int> a(n);
    rep(i, 0, n) a[i] = i + 1;
    
    map<vector<int>, int> mp;
    do {
        mp[a] = mp.size();
    } while (next_permutation(all(a)));

    int ans = abs(mp[p] - mp[q]);
    cout << ans << endl;
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i=a;i>=b;i--)
// #define all(x) (x).begin(),(x).end()
// typedef long long ll;

// int main() {
//     int N;
//     cin >> N;
//     vector<int> P(N), Q(N);
//     rep(i, 0, N) cin >> P[i];
//     rep(i, 0, N) cin >> Q[i];

//     vector<int> order;
//     rep(i, 1, N+1) order.push_back(i);

//     int a = 0, b = 0, cnt = 1;
//     do {
//         if (P == order) a = cnt;
//         if (Q == order) b = cnt;
//         cnt++;
//     } while (next_permutation(all(order)));
//     printf("%d\n", abs(a - b));
//     return 0;
// }