#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll;

int f(int x) {
    if (x == 0) return 1;
    return x * f(x-1);
}

int main() {
    int n; cin >> n;
    cout << f(n) << endl;
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

// int make(int n) {
//     if (n == 0) return 1;
//     return n * make(n-1);
// }

// int main() {
//     int N; cin >> N;
//     cout << make(N) << endl;
//     return 0;
// }