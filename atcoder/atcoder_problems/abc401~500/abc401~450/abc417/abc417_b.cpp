#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];

    rep(i, 0, m) {
        int b;
        cin >> b;
        auto it = find(all(a), b);
        if (it == a.end()) continue;
        a.erase(it);
    }
    rep(i, 0, a.size()) cout << a[i] << ' ';
    cout << endl;
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
//     int N, M;
//     cin >> N >> M;
//     vector<ll> A(N), B(M);
//     rep(i, 0, N) cin >> A[i];
//     rep(i, 0, M) cin >> B[i];
//     map<ll, int> cnt;
//     rep(i, 0, M) {
//         cnt[B[i]] ++;
//     }

//     rep(i, 0, N) {
//         if (cnt[A[i]] > 0) {
//             cnt[A[i]]--;
//             A[i] = 0;
//         }
//     }
//     rep(i, 0, N) {
//         if (A[i]) cout << A[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }