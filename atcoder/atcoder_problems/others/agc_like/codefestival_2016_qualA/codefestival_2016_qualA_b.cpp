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
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, 0, N) cin >> A[i];

    int ans = 0;
    rep(i, 0, N) {
        int a = A[i] - 1;
        if (A[a] - 1 == i) ans++;
    }
    cout << ans / 2 << endl;
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
//     int N;
//     cin >> N;
//     vector<int> A(N);
//     rep(i, 0, N) cin >> A[i];

//     vector<bool> visited(N);
//     int ans = 0;
//     rep(i, 0, N) {
//         if (visited[i]) continue;
//         visited[i] = true;

//         int j = A[i] - 1;
//         if (i == A[j] - 1) {
//             ans++;
//             visited[j] = true;
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }