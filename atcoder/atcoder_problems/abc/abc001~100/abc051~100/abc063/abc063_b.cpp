#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    string S;
    cin >> S;
    
    vector<int> num(26, 0);
    rep(i, 0, S.size()) {
        num[S[i] - 'a']++;
    }
    bool res = true;
    rep(i, 0, 26) if (num[i] > 1) res = false;

    if (res) cout << "yes" << endl;
    else cout << "no" << endl;
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
//     string S;
//     cin >> S;
//     set<char> checked;
//     rep(i, 0, S.size()) {
//         char c = S[i];
//         if (checked.count(c)) {
//             cout << "no" << endl;
//             return 0; 
//         } 
//         checked.insert(c);
//     }
//     cout << "yes" << endl;
//     return 0;
// }