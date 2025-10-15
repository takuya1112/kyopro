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
    int n; string s;
    cin >> n >> s;

    ll ans = LLONG_MAX;
    rep(ri, 0, 2) {
        ll now = 0;
        int ai = 0;
        rep(i, 0, n * 2) {
            if (s[i] == 'A') {
                now += abs(i - ai * 2);
                ai++;
            }
        }
        ans = min(ans, now);
        reverse(all(s));
    }
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
//     int N;
//     string S;
//     cin >> N >> S;

//     vector<ll> A;
//     vector<ll> B;
//     rep(i, 0, 2 * N) {
//         if (S[i] == 'A') A.push_back(i);
//         if (S[i] == 'B') B.push_back(i);
//     }

//     vector<ll> C(N);
//     queue<int> qa, qb;
//     rep(i, 0, N) {
//         if (B[i] < A[i]) {
//             while (!qa.empty() && qa.front() < B[i]) qa.pop();
//             C[i] = qa.size();
//         }
//         if (A[i] < B[i]) {
//             while (!qb.empty() && qb.front() < A[i]) qb.pop();
//             C[i] = qb.size();
//         }
//         qa.push(A[i]);
//         qb.push(B[i]);
//     }

//     auto solveA = [&]() -> ll {
//         ll ans = 0;
//         rep(i, 0, N) {
//             ans += abs(A[i] - B[i]);
//             if (A[i] < B[i]) ans -= 1;
//             ans -= C[i];
//         }
//         return ans;
//     };

//     auto solveB = [&]() -> ll {
//         ll ans = 0;
//         rep(i, 0, N) {
//             ans += abs(A[i] - B[i]);
//             if (B[i] < A[i]) ans -= 1;
//             ans -= C[i];
//         }
//         return ans;
//     };


//     cout << min(solveA(), solveB()) << endl;
//     return 0;
// }