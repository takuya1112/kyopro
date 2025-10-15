#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int n, k, q;
    cin >> n >> k >> q;

    vector<int> p(n, k - q);
    rep(i, 0, q) {
        int a;
        cin >> a;
        a--;
        p[a]++;
    }
    rep(i, 0, n) {
        if (p[i] <= 0) cout << "No\n";
        else cout << "Yes\n";
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
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     int N, K, Q;
//     cin >> N >> K >> Q;
//     vector<int> A(N);
//     rep(qi, 0, Q) {
//         int a;
//         cin >> a;
//         a--;
//         A[a]++;
//     }
    
//     rep(i, 0, N) {
//         if (K - Q + A[i] >= 1) cout << "Yes" << endl;
//         else cout << "No" << endl; 
//     }
//     return 0;
// }