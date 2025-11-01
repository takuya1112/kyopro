#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
typedef long long ll; const int inf = INT_MAX / 2;

struct Item {
    int value, weight;
};

int main() {
    int N, W, ans = -1;
    cin >> N >> W;
    Item array[N];
    int table[W + 1];
    for (int i = 0; i < W + 1; i++) table[i] = 0;

    for (int i = 0; i < N; i++) {
        cin >> array[i].value >> array[i].weight;
    }

    for (int i = 1; i <= W; i++) {
        for (int k = 0; k < N; k++) {
            if (i >= array[k].weight) {
                table[i] = max(table[i], array[k].value + table[i - array[k].weight]);
                ans = max(table[i], ans);
            }
        }
    }
    cout << ans << endl;
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i = a; i >= b; i--)
// #define all(x) (x).begin(),(x).end()
// #define rall(x) (x).rbegin(),(x).rend()
// #define chmin(x, y) x = min(x, y)
// #define chmax(x, y) x = max(x, y)
// typedef long long ll; const int inf = INT_MAX / 2;

// const int MAX = 10010;

// int main() {
//     int n, w;
//     cin >> n >> w;
//     vector<int> value(n), weight(n);
//     rep(i, 0, n) cin >> value[i] >> weight[i];

//     vector<vector<int>> dp(n + 1, vector<int>(MAX));

//     rep(i, 0, n) {
//         rep(j, 0, MAX) {
//             if (j >= weight[i]) {
//                 dp[i + 1][j] = max(max(dp[i][j], dp[i][j - weight[i]] + value[i]), dp[i + 1][j - weight[i]] + value[i]);
//             } else dp[i + 1][j] = dp[i][j];
//         }
//     }

//     cout << dp[n][w] << endl;
//     return 0;
// }