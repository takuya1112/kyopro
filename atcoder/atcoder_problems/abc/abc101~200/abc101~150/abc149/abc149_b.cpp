#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll;

int main() {
    ll A, B, K; 
    cin >> A >> B >> K;
    ll eat = min(A, K);

    A -= eat;
    K -= eat;

    eat = min(B, K);

    B -= eat;
    K -= eat;

    printf("%lld %lld", A, B);
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
//     ll A, B, K;
//     cin >> A >> B >> K;
//     if (A >= K) {
//         cout << max(A - K, 0LL) << " " << B << endl;
//     } else {
//         K -= A;
//         cout << 0 << " " <<  max(B - K, 0LL) << endl;
//     }
//     return 0;
// }