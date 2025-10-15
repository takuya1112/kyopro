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
    string S;
    cin >> S;

    int ans = S.size();

    rep(i, 0, 2) {
        int cnt = 0;
        rep(j, 0, S.size()) {
            if ((j % 2 == 0) ^ (S[j] == (char)(i + '0'))) cnt++; 
        }
        ans = min(ans, cnt);
    }
    cout << ans << endl;
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
//     string S;
//     cin >> S;

//     int fb = 0, fw = 0;
//     rep(i, 0, S.size()) {
//         if (S[i] == '0') {
//             if (i % 2) fw++;
//             else fb++;
//         } else {
//             if (i % 2) fb++;
//             else fw++;
//         }
//     }
//     int ans = min(fb, fw);
//     cout << ans << endl;
//     return 0;
// }