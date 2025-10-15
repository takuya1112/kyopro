#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll;

int N, X, Y;

ll calc(int level, bool is_red) {
    if (level == 1) return is_red ? 0 : 1;
    if (is_red) {
        return calc(level - 1, true) + calc(level, false) * X;
    } else {
        return calc(level - 1, true) + calc(level - 1, false) * Y; 
    }
}

int main() {
    cin >> N >> X >> Y;
    cout << calc(N, true) << endl;
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i = a; i >= b; i--)
// #define all(x) (x).begin(),(x).end()
// typedef long long ll;

// int main() {
//     int n, x, y;
//     cin >> n >> x >> y;
//     vector<ll> r(n+1), b(n+1); 
//     r[n] = 1;
//     rrep(i, n, 2) {
//         r[i-1] += r[i];
//         b[i] += r[i] * x;

//         r[i-1] += b[i];
//         b[i-1] += b[i] * y;
//     }
//     cout << b[1] << endl;
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i = a; i >= b; i--)
// #define all(x) (x).begin(),(x).end()
// typedef long long ll;

// int N, X, Y;
// vector<ll> r(11, 0), b(11, 0);

// void f(int rest) {
//     if (rest == 0) {
//         cout << b[0] << endl;
//     } else {
//         ll n = r[rest];
//         r[rest-1] += n;
//         b[rest] += X * n;
    
//         ll m = b[rest];
//         r[rest-1] += m;
//         b[rest-1] += Y * m;

//         f(rest-1);
//     }

// }

// int main() {
//     cin >> N >> X >> Y;
//     N--;
//     r[N] = 1;

//     f(N);
//     return 0;
// }