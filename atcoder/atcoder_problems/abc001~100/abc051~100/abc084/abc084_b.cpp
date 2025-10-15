#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int A, B;
    string S;
    cin >> A >> B >> S;

    auto no = [&]() {
        cout << "No" << endl;
    };

    rep(i, 0, A) if (!('0' <= S[i] && S[i] <= '9')) {
       no(); return 0; 
    } 
    if (S[A] != '-') {
       no(); return 0; 
    } 
    rep(i, A + 1, A + B + 1) if (!('0' <= S[i] && S[i] <= '9')) {
      no(); return 0;  
    }
    cout << "Yes" << endl;
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
//     int A, B;
//     string S;
//     cin >> A >> B >> S;

//     bool change = false;
//     int a = 0, b = 0;
//     rep(i, 0, S.size()) {
//         if (S[i] == '-') {
//             change = true;
//             continue;
//         }
//         if (!change) a++;
//         else b++;   
//     }

//     if (a == A && b == B) cout << "Yes" << endl;
//     else cout << "No" << endl; 
//     return 0;
// }