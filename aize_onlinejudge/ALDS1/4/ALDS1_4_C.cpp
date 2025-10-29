#include <bits/stdc++.h>
using namespace std;
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

    string com, str;
    map<string, bool> T;

    rep(i, 0, n) {
        cin >> com >> str;
        if ( com[0] == 'i') T[str] = true;
        else {
            if (T[str]) printf("yes\n");
            else printf("no\n");
        }
    }
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

//     string cmd, s;
//     map<string, int> mp;
//     rep(i, 0, n) {
//         cin >> cmd;
//         if (cmd == "insert") {
//             cin >> s;
//             mp[s]++;
//         } else if (cmd == "find") {
//             cin >> s;
//             if (mp.find(s) != mp.end()) cout << "yes" << endl;
//             else cout << "no" << endl;
//         }
//     }
//     return 0;
// }