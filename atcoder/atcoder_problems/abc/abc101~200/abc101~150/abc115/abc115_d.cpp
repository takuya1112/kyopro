#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

ll patty[51], total[51];

ll f(int level, ll x) {
    if (level == 0) return 1;

    if (x < 1) return 0;
    x--;

    if (x < total[level - 1]) return f(level - 1, x);
    x -= total[level - 1];

    if (x < 1) return patty[level - 1] + 1;
    x --;

    if (x < total[level - 1]) return patty[level - 1] + 1 + f(level - 1, x);
    x -= total[level - 1];

    return patty[level - 1] * 2 + 1;
}


int main() {
    int N; ll X;
    cin >> N >> X;
    X --;

    patty[0] = 1;
    total[0] = 1;
    rep(i, 1, N+1) {
        patty[i] = patty[i-1] * 2 + 1;
        total[i] = total[i-1] * 2 + 3;
    }

    cout << f(N, X) << endl;
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

// int N; ll X;
// ll patty[51], total[51];

// ll f(int level, ll x) {
//     if (level == 0) return 1;

//     if (x < 1) return 0;
//     x--;
    
//     if (x < total[level -1]) return f(level - 1, x);
//     x -= total[level -1];
    
//     if (x < 1) return patty[level - 1] + 1;
//     x--;
    
//     if (x < total[level - 1]) return patty[level - 1] + 1 + f(level - 1, x);
//     x -= total[level - 1];

//     return patty[level - 1] * 2 + 1;
// }

// int main() {
//     cin >> N >> X;
//     X--;

//     total[0] = 1;
//     rep(i, 1, N + 1) total[i] = total[i-1] * 2 + 3;

//     patty[0] = 1;
//     rep(i, 1, N + 1) patty[i] = patty[i-1] * 2 + 1;

//     cout << f(N, X) << endl;
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i = a; i >= b; i--)
// #define all(x) (x).begin(),(x).end()
// typedef long long ll; const int inf = INT_MAX / 2;

// map<ll, string> memo;

// string make_burger(int n, string s) {
//     if (n == 0) return s;
//     if (memo.count(n)) return memo[n];
//     else {
//         string pre_level = make_burger(n-1, s);
//         return memo[n] = "B" + pre_level + "P" + pre_level + "B";
//     }
// }

// int main() {
//     int N, X;
//     cin >> N >> X;
//     string burger = make_burger(N, "P");
//     string ans =  burger.substr(burger.size() - X, X);
//     int cnt = 0;
//     rep(i, 0, ans.size()) if (ans[i] == 'P') cnt++;
//     cout << cnt << endl;
//     return 0;
// }