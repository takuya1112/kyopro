#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
typedef long long ll; const int inf = INT_MAX / 2;

int f(int x) {
    if (x % 100 != 0) return 0;
    return f(x / 100) + 1;
}

int main() {
    int D, N;
    cin >> D >> N;

    int cnt = 0;
    for (int x = 1;; x++) {
        if (f(x) == D) {
            cnt++;
            if (cnt == N) {
                cout << x << endl;
                return 0;
            }
        }
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
//     int D, N;
//     cin >> D >> N;

//     int n = pow(100, D);
//     int ans = n * N;
//     if (N == 100) ans += n;
//     cout << ans << endl;
//     return 0;
// }