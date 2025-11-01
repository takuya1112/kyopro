#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
typedef long long ll; const int inf = INT_MAX / 2;

#define NMAX 105
#define WMAX 10005
#define DIAGONAL 1
#define TOP 0

struct Item {
    int value, weight;
};

int N, W;
Item items[NMAX + 1];
int C[NMAX + 1][WMAX + 1], G[NMAX + 1][WMAX + 1];

void compute(int &maxValue, vector<int> &selection) {
    for (int w = 0; w <= W; w++) {
        C[0][w] = 0;
        G[0][w] = DIAGONAL;
    }
    
    for (int i = 1; i <= N; i++) C[i][0] = 0;

    for (int i = 1; i <= N; i++) {
        for (int w = 1; w <= W; w++) {
            C[i][w] = C[i - 1][w];
            G[i][w] = TOP;
            if (items[i].weight > w) continue;
            if (items[i].value + C[i - 1][w - items[i].weight] > C[i - 1][w]) {
                C[i][w] = items[i].value + C[i - 1][w - items[i].weight];
                G[i][w] = DIAGONAL;
            }
        }
    }

    maxValue = C[N][W];
    selection.clear();
    for (int i = N, w = W; i >= 1; i--) {
        if (G[i][w] == DIAGONAL) {
            selection.push_back(i);
            w -= items[i].weight;
        }
    }

    reverse(all(selection));
}

void input() {
    cin >> N >> W;
    for (int i = 1; i <= N; i++) {
        cin >> items[i].value >> items[i].weight;
    }
}

int main() {
    int maxValue;
    vector<int> selection;
    input();
    compute(maxValue, selection);
    cout << maxValue << endl;
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

//     vector<vector<int>> dp(n + 1, vector<int> (MAX));
//     rep(i, 0, n) {
//         rep(j, 0, MAX) {
//             if (j >= weight[i]) {
//                 dp[i + 1][j] = max(dp[i][j], dp[i][j - weight[i]] + value[i]);
//             } else {
//                 dp[i + 1][j] = dp[i][j];
//             }
//         }


//     }
//     cout << dp[n][w] << endl;
//     return 0;
// }