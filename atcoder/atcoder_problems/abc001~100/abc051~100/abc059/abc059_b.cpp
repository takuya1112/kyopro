#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    string A, B;
    cin >> A >> B;

    if (A.size() < B.size()) cout << "LESS" << endl;
    else if (A.size() > B.size()) cout << "GREATER" << endl;
    else if (A < B) cout << "LESS" << endl;
    else if (A > B) cout << "GREATER" << endl;
    else cout << "EQUAL" << endl;
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
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     string A, B;
//     cin >> A >> B;
//     if (A.size() > B.size()) {
//         int num = A.size() - B.size();
//         B.insert(0, num, '0');
//     } else if (B.size() > A.size()) {
//         int num = B.size() - A.size();
//         A.insert(0, num, '0');
//     }
    
//     if (A == B) cout << "EQUAL" << endl;
//     else if (A > B) cout << "GREATER" << endl;
//     else cout << "LESS" << endl;
//     return 0;
// }