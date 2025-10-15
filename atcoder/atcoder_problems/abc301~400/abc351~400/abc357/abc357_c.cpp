#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll;

int main() {
    int n; cin >> n;

    vector<string> s = {"#"};
    rep(ni, 0, n) {
        int m = s.size(), m3 = m * 3;
        vector<string> t(m3, string(m3, '.'));
        rep(i, 0, m3) rep(j, 0, m3) t[i][j] = s[i%m][j%m];
        rep(i, 0, m) rep(j, 0, m) t[m+i][m+j] = '.';
        swap(s, t);
    }
    rep(i, 0, s.size()) cout << s[i] << endl;
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i = a; i >= b; i--)
// #define all(x) (x).begin(),(x).end()
// typedef long long ll;

// int N;

// void print(vector<vector<char>> a) {
//     rep(i, 0, a.size()) {
//         rep(j, 0, a[i].size()) {
//             cout << a[i][j];
//         }
//         cout << endl;
//     }
// }

// void f(int cnt, vector<vector<char>> a) {
//     if (cnt == N) {
//         print(a);
//     } else {
//         int k = pow(3, cnt+1);
//         int size = a.size();
//         vector<vector<char>> res(k, vector<char>(k, '.'));
//         rep(i, 0, a.size()) {
//             rep(j, 0, a.size()) {
//                 res[i][j] = a[i][j];
//                 res[i][size + j] = a[i][j];
//                 res[i][2 * size + j] = a[i][j];

//                 res[size + i][j] = a[i][j];
//                 res[size + i][2 * size + j] = a[i][j];

//                 res[2 * size + i][j] = a[i][j];
//                 res[2 * size + i][size + j] = a[i][j];
//                 res[2 * size + i][2 * size + j] = a[i][j];
//             }
//         }
//         f(cnt+1, res);
//     }
// }

// int main() {
//     cin >> N;
//     f(0, {{'#'}});
//     return 0;
// }