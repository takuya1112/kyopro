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
    int q;
    cin >> q;
    vector<int> x = {0};
    rep(qi, 0, q) {
        int type;
        cin >> type;
        if (type == 1) {
            char c;
            cin >> c;
            int nx = x.back() + (c == '(' ? 1 : -1);
            if (nx < 0) nx = -inf;
            x.push_back(nx);
        } else {
            x.pop_back();
        }
        if (x.back() == 0) cout << "Yes\n";
        else cout << "No\n";
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
// #define chmax(x, y) x = max(x, y)
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     int Q;
//     cin >> Q;
//     vector<int> A{0}, B{0};
//     rep(qi, 0, Q) {
//         int cmd;
//         cin >> cmd;
//         if (cmd == 1) {
//             char c;
//             cin >> c;
//             A.push_back(A.back() + (c == '(' ? 1 : -1));
//             B.push_back(min(B.back(), A.back())); 
//         } else {
//             A.pop_back();
//             B.pop_back();
//         }
//         cout << (A.back() == 0 && B.back() == 0 ? "Yes" : "No") << '\n'; 
//     }
//     return 0;
// }


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
//     int Q;
//     cin >> Q;

//     int ans = 0, cnt = 0;
//     bool ok = true;
//     stack<char> st;
//     rep(qi, 0, Q) {
//         int type;
//         cin >> type;

//         if (type == 1) {
//             char c;
//             cin >> c;
//             if (c == '(') ans += 1;
//             else {
//                 ans -= 1;
//                 if (ans < 0) ok = false;
//             } 
//             st.push(c);
//             if (!ok) cnt++;
//         } else {
//             if (cnt) cnt--;

//             if (st.top() == '(') ans -= 1;
//             else {
//                 ans += 1;
//                 if (cnt == 0) ok = true;
//             }
//             st.pop();
//         }
//         if (ans == 0 && ok) cout << "Yes" << endl;
//         else cout << "No" << endl;
//     }
//     return 0;
// }