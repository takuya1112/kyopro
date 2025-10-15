#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n; 
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    int x; 
    cin >> x;
    rep(i, n) {
        if (a[i] == x) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)

// int main() {
//     int N;
//     cin >> N;
//     vector<int> A(N);
//     rep(i, N) cin >> A[i];
//     int X;
//     cin >> X;
//     if (find(A.begin(), A.end(), X) != A.end())cout << "Yes" << endl;
//     else cout << "No" << endl; 
//     return 0;
// }