#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> cnt(M);
    rep(i, 0, N) {
        int k;
        cin >> k;
        rep(j, 0, k) {
            int a;
            cin >> a;
            a--;
            cnt[a]++;
        }
    }

    int ans = 0;
    rep(i, 0, M) {
        if (cnt[i] == N) ans++;
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
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     int N, M;
//     cin >> N >> M;
//     vector<vector<int>> A(N, vector<int>(M, 0));

//     rep(i, 0, N) {
//         int k;
//         cin >> k;
//         rep(j, 0, k) {
//             int a;
//             cin >> a;
//             a--;
//             A[i][a] = 1;
//         }
//     }

//     int ans = 0;
//     rep(i, 0, M) {
//         bool ok = true;
//         rep(j, 0, N) {
//             if (!A[j][i]) ok = false;  
//         }
//         if (ok) ans++;
//     }
//     cout << ans << endl;
//     return 0;
// }