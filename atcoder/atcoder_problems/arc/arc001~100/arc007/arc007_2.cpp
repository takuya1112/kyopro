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
    int N, M;
    cin >> N >> M;

    vector<int> a(N + 1);
    rep(i, 0, N + 1) a[i] = i;

    rep(i, 0, M) {
        int disk;
        cin >> disk;
        
        auto idx = find(all(a), disk) - a.begin();
        swap(a[0], a[idx]);
    }
    rep(i, 1, N + 1) cout << a[i] << '\n';
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
//     int N, M;
//     cin >> N >> M;

    
//     vector<int> a(N + 1);
//     rep(i, 0, N + 1) a[i] = i;

//     rep(i, 0, M) {
//         int disk;
//         cin >> disk;
        
//         rep(j, 1, N + 1) {
//             if (a[j] == disk) {
//                 a[j] = a[0];
//                 a[0] = disk;
//                 continue;
//             }
//         }
//     }

//     rep(i, 1, N + 1) cout << a[i] << '\n';
//     return 0;
// }