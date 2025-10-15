#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int N;
    string S;
    cin >> N >> S;

    int x = 0, res = 0;
    for (char c : S) {
        if (c == 'I') x++;
        else x--;

        res = max(x, res);
    }
    cout << res << endl;
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

// int main() {
//     int N;
//     string S;
//     cin >> N >> S;
    
//     int x = 0, ans = 0;
//     rep(i, 0, N) {
//         if (S[i] == 'I') x++;
//         else x--;
//         ans = max(ans, x);
//     }
//     cout << ans << endl;
//     return 0;
// }