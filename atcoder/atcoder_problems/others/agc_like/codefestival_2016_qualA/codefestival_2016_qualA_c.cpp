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
    string S; int K;
    cin >> S >> K;
    int N = S.size();

    rep(i, 0, N) {
        int c = (26 + 'a' - S[i]) % 26;
        if (K >= c) {
            S[i] = 'a';
            K -= c;
        }
    }
    S.back() += K % 26;
    cout << S << endl;
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
//     string S; int K;
//     cin >> S >> K;

//     rep(i, 0, S.size()) {
//         if (S[i] == 'a') continue;

//         int diff = 'z' - S[i] + 1;
//         if (diff > K) continue;

//         S[i] = S[i] + diff - 26;
//         K -= diff;
//     }
//     if (K) {
//         K %= 26;
//         S.back() = (S.back() - 'a' + K ) % 26 + 'a';
//     }
//     cout << S << endl;
//     return 0;
// }