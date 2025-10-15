#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll;

int main() {
    int N; cin >> N;
    vector<string> dp(N+1);
    dp[1] = "1";
    rep(n, 2, N + 1) {
        dp[n] = dp[n-1] + " " + to_string(n) + " " + dp[n-1];
    } 
    cout << dp[N] << endl;
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

// map<int, string> memo;

// string S(int n) {
//     if (memo.find(n) != memo.end()) {
//         return memo[n];
//     }
//     if (n == 1) {
//         return "1";
//     } else {
//         string res = S(n - 1) + " " + to_string(n) + " " + S(n-1); 
//         memo[n] = res;
//         return res;
//     }
// }

// int main() {
//     int N; cin >> N;
//     string s = S(N);
//     rep(i, 0, s.size()) {
//         cout << s[i];
//     }
//     cout << endl;
//     return 0;
// }



//#include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i=a;i>=b;i--)
// #define all(x) (x).begin(),(x).end()
// typedef long long ll;

// int N;

// void f(int cnt, string s) {
//     if (cnt >= N) {
//         rep(i, 0, s.size()) {
//             cout << s[i];
//         }
//         cout << endl;
//     } else {

//         string sn = to_string(cnt + 1);
//         f(cnt+1, s + " " + sn +  " " + s);
//     }
// }

// int main() {
//     cin >> N;
//     f(0, "");
//     return 0;
// }