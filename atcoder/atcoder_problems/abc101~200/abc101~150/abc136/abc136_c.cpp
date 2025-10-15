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
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i, 0, n) cin >> h[i];

    int pre = -inf;
    rep(i, 0, n) {
        if (pre <= h[i] - 1) {
            pre = h[i] -1;
        } else if (pre <= h[i]) {
            pre = h[i];
        } else {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
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
//     vector<int> H(N);
//     rep(i, 0, N) cin >> H[i];
    
//     reverse(all(H));
//     rep(i, 0, N-1) {
//         if (H[i] < H[i + 1]) H[i + 1]--;
//     }

//     bool ok = true;
//     rep(i, 0, N - 1) if (H[i] < H[i + 1]) ok = false;
 
//     if (ok) cout << "Yes" << endl;
//     else cout << "No" << endl;
//     return 0;
// }