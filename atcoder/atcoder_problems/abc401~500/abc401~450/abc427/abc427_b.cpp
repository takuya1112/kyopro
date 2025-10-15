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

int f(int x) {
    int res = 0;
    for (char c : to_string(x)) res += c - '0';
    return res;
}


int main() {
    int n;
    cin >> n;

    vector<int> a(n + 1);
    a[0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            a[i] += f(a[j]);
        }
    }
    cout << a[n] << endl;
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
//     int N;
//     cin >> N;

//     vector<int> ans;
//     ans.push_back(1);

//     rep(i, 1, N + 1) {
//         int s = 0;
//         rep(j, 0, i + 1) {
//             int a = ans[j]; 
//             while (a) {
//                 s += a % 10;
//                 a /= 10;    
//             }
//         }
//         ans.push_back(s);
//     }
//     cout << ans.back() << endl;
//     return 0;
// }