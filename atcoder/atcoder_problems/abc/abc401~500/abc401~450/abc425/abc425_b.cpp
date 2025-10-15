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
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];

    set<int> st;
    rep(i, 1, n + 1) st.insert(i);

    rep(i, 0, n) {
        if (a[i] != -1) st.erase(a[i]);
    }

    rep(i, 0, n) {
        if (a[i] == -1) {
            a[i] = *st.begin();
            st.erase(st.begin());
        }
    }

    if (st.size() > 0) {
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;
    rep(i, 0, n) cout << a[i] << ' ';
    cout << endl;
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
//     int N;
//     cin >> N;
//     vector<int> A(N);
//     rep(i, 0, N) cin >> A[i];

//     vector<int> P(N);
//     rep(i, 0, N) P[i] = i + 1;

//     do {
//         bool ok = true;
//         rep(i, 0, N) {
//             if (A[i] == -1) continue;
//             if (A[i] != P[i]) ok = false;
//         }
//         if (ok) {
//             cout << "Yes" << endl;
//             rep(i, 0, N) cout << P[i] << ' ';
//             cout << endl;
//             return 0;
//         }
        
//     } while (next_permutation(all(P)));
//     cout << "No" << endl;
//     return 0;
// }