#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll;

int main() {
    int k, x;
    cin >> k >> x;
    if (500 * k >= x) cout << "Yes" << endl;
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
//     int K, X;
//     cin >> K >> X;
//     int ans = 500 * K;
//     if (ans >= X) cout << "Yes\n";
//     else cout << "No\n";
//     return 0;
// }