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
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];

    int sum = 0;
    rep(i, 0, n) sum += a[i];

    sum -= m;
    if (find(all(a), sum) != a.end()) cout << "Yes" << endl;
    else cout << "No" << endl;
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
//     int N, M;
//     cin >> N >> M;
//     vector<int> A(N);
//     rep(i, 0, N) cin >> A[i];

//     bool ok = false;
//     rep(i, 0, N) {
//         int sum = 0;
//         rep(j, 0, N) {
//             if (j == i) continue;
//             sum += A[j];
//         }
//         if (sum == M) ok = true;
//     }
//     if (ok) cout << "Yes" << endl;
//     else cout << "No" << endl;
//     return 0;
// }