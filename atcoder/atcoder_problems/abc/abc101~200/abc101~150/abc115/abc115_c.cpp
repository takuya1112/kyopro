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
    int N, K;
    cin >> N >> K;
    vector<int> H(N);
    rep(i, 0, N) cin >> H[i];

    sort(all(H));

    int ans = inf;
    rep(L, 0, N - K + 1) {
        int R = L + K - 1;
        ans = min(ans, H[R] - H[L]);
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
//     int N, K;
//     cin >> N >> K;
//     vector<int> H(N);
//     rep(i, 0, N) cin >> H[i];
    
//     sort(all(H));

//     int ans = inf;
//     for (int i = 0; i <= N - K; i++) {
//         ans = min(ans, H[i + K -1] - H[i]);
//     }
//     cout << ans << endl;
//     return 0;
// }