#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define chmin(x, y) x = min(x, y)
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto nx : s) mp[nx]++;
    for (auto nx : mp) {
        if (nx.second == 1) {
            cout << nx.first << '\n';
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
// #define chmin(x, y) x = min(x, y)
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     string S;
//     cin >> S;
//     sort(all(S));
//     if (S[0] == S[1]) cout << S.back() << endl;
//     else cout << S[0] << endl;
//     return 0;
// }