#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
typedef long long ll; const int inf = INT_MAX / 2;

int dp[50];

int fib(int n) {
    if (n == 0 || n == 1) return dp[n] = 1;
    if (dp[n] != -1) return dp[n];
    return dp[n] = fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    rep(i, 0, 50) dp[i] = -1;

    cin >> n;
    printf("%d\n", fib(n));
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i = a; i >= b; i--)
// #define all(x) (x).begin(),(x).end()
// #define rall(x) (x).rbegin(),(x).rend()
// #define chmin(x, y) x = min(x, y)
// #define chmax(x, y) x = max(x, y)
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     int n;
//     cin >> n;

//     vector<int> fibo(50);
//     fibo[0] = 1;
//     fibo[1] = 1;

//     rep(i, 2, n + 1) {
//         fibo[i] = fibo[i - 1] + fibo[i - 2];
//     } 
//     cout << fibo[n] << endl;
//     return 0;
// }