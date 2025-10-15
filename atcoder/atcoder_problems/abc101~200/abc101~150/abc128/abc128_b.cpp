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
    int N;
    cin >> N;
    vector<tuple<string, int, int>> A;
    rep(i, 1, N + 1) {
        string s;
        int p;
        cin >> s >> p;
        p = -p;
        A.push_back(tie(s, p, i));
    }
    sort(all(A));
    rep(i, 0, N) {
        cout << get<2>(A[i]) << endl;
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
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     int N;
//     cin >> N;
//     vector<tuple<string, int, int>> S(N);
//     rep(i, 0, N) {
//         string s;
//         int p;
//         cin >> s >> p;
//         S[i] = make_tuple(s, 100 - p, i + 1);
//     }

//     sort(all(S));
//     rep(i, 0, N) {
//         cout << get<2>(S[i]) << endl;
//     }
//     return 0;
// }