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

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, 0, n) cin >> s[i];

    int x; string y;
    cin >> x >> y;
    x--;
    if (s[x] == y) cout << "Yes" << endl;
    else cout << "No" << endl;
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
//     vector<string> S(N);
//     rep(i, 0, N) cin >> S[i];

//     int x; string y;
//     cin >> x >> y;
//     x--;

//     if (S[x] == y) cout << "Yes" << endl;
//     else cout << "No" << endl;

//     return 0;
// }