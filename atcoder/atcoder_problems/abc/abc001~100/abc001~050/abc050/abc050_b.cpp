#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
typedef long long ll; const int inf = INT_MAX / 2;

int calc(vector<int> T, int P, int X) {
    int sum = 0;
    T[P] = X;
    rep(i, 0, T.size()) sum += T[i];
    return sum;
}

int main() {
    int N, M, P, X;
    cin >> N;
    vector<int> T(N);
    rep(i, 0, N) cin >> T[i];

    cin >> M;
    rep(i, 0, M) {
        cin >> P >> X;
        P--;
        cout << calc(T, P, X) << endl;
    }
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
//     cin >> N;
//     vector<int> T(N);
//     rep(i, 0, N) cin >> T[i];

//     cin >> M;
//     vector<int> P(M), X(M);
//     rep(i, 0, M) cin >> P[i] >> X[i];

//     int sum = 0;
//     rep(i, 0, N) sum += T[i];

//     rep(i, 0, M) {
//         int p = P[i], x = X[i];
//         p--;
//         int t = T[p];
//         cout << sum - (t - x) << endl;
//     }
//     return 0;
// }