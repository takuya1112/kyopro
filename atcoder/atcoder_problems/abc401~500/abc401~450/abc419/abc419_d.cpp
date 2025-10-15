#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int N, M;
    cin >> N >> M;
    string S, T;
    cin >> S >> T;
    vector<int> cum(N + 1);
    rep(i, 0, M) {
        int l, r;
        cin >> l >> r;
        l--;
        cum[l] += 1;
        cum[r] -= 1;
    }
    rep(i, 0, N) cum[i + 1] += cum[i];
    rep(i, 0, N) {
        if (cum[i] % 2 == 0) cout << S[i];
        else cout << T[i];
    }cout << '\n';
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
//     string S, T;
//     cin >> S >> T;

//     vector<int> ans(N);
//     rep(i, 0, M) {
//         int l, r;
//         cin >> l >> r;
//         l--; 
//         ans[l] += 1;
//         ans[r] -= 1;
//     }
//     rep(i, 0, N) ans[i] = (ans[i] + ans[i - 1]) % 2; 
//     rep(i, 0, N) {
//         if (ans[i]) cout << T[i];
//         else cout << S[i];
//     }
//     cout << '\n';
//     return 0;
// }