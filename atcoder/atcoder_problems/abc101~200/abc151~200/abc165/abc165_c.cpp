#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int n, m, q;
vector<int> a, b, c, d;
int ans;

void dfs(vector<int> A) {
    if (A.size() == n+1) {
        int now = 0;
        rep(i, 0, q) {
            if (A[b[i]] - A[a[i]] == c[i]) now += d[i];
        }
        ans = max(ans, now);
        return;
    }

    A.push_back(A.back());
    while (A.back() <= m) {
        dfs(A);
        A.back()++;
    }
}

int main() {
    cin >> n >> m >> q;
    a = b = c = d = vector<int>(q);
    rep(i, 0, q) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }
    dfs(vector<int>(1,1));
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
// typedef long long ll; const int inf = INT_MAX / 2;

// struct  alphabet {
//     int a;
//     int b;
//     int c;
//     int d;
// };


// int main() {
//     int N, M, Q;
//     cin >> N >> M >> Q;
//     vector<alphabet> num(Q);
//     rep(qi, 0, Q) {
//         cin >> num[qi].a;
//         cin >> num[qi].b;
//         cin >> num[qi].c;
//         cin >> num[qi].d;
//     }

//     ll ans = 0;
//     auto f = [&](auto f, vector<int> v) {
//         if (v.size() == N) {
//             rep(i, 0, N) cout << v[i] << " ";
//             cout << '\n';
//             ll score = 0;
//             rep(qi, 0, Q) {
//                 int a = num[qi].a - 1;
//                 int b = num[qi].b - 1;
//                 int c = num[qi].c;
//                 int d = num[qi].d;

//                 if (v[b] - v[a] == c) {
//                    score += d;
//                    continue;
//                 }
//             }
//             ans = max(ans, score);
//             return;
//         }

//         int l = 1;
//         if (v.size()) l = v.back();
//         v.push_back(l);
//         while (v.back() <= M) {
//             f(f, v);
//             v.back()++;
//         };
//     };
//     f(f, {});
//     cout << ans << endl;
//     return 0;
// }