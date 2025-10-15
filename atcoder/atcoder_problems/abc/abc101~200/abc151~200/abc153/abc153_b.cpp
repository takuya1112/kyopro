#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll;

int main() {
    int h, n;
    cin >> h >> n;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) h -= a[i];
    if (h <= 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i=a;i>=b;i--)
// #define all(x) (x).begin(),(x).end()
// typedef long long ll;

// int main() {
//     int H, N; cin >> H >> N;
//     ll sum = 0;
//     rep(i, 0, N) {
//         int a; cin >> a;
//         sum += a;
//     }
//     if (sum >= H) cout << "Yes" << endl;
//     else cout << "No" << endl;
    
//     return 0;
// }