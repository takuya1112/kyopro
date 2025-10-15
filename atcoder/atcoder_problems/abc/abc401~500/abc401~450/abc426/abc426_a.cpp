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
    map<string, int> mp;
    mp["Ocelot"] = 1;
    mp["Serval"] = 2;
    mp["Lynx"] = 3;

    string x, y;
    cin >> x >> y;
    if (mp[x] >= mp[y]) cout << "Yes\n";
    else cout << "No\n";
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
//     string X, Y;
//     cin >> X >> Y;
//     if (X == Y) cout << "Yes" << endl;
//     else if (X == "Lynx") cout << "Yes" << endl;
//     else if (X == "Serval" && Y == "Ocelot") cout << "Yes" << endl;
//     else cout << "No" << endl;
//     return 0;
// }