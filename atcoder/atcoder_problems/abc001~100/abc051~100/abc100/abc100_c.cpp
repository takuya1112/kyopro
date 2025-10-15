#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
typedef long long ll; const int inf = INT_MAX / 2;

int f(int x) {
    if (x % 2 != 0) return 0;
    return f(x / 2) + 1;
}

int main() {
    int N;
    cin >> N;

    int ans = 0;
    rep(i, 0, N) {
        int a;
        cin >> a;
        ans += f(a);
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

// int count(int x) {
//     int cnt = 0;
//     while (x % 2 == 0) {
//         x /= 2;
//         cnt++;
//     }
//     return cnt;
// }

// int main() {
//     int N; 
//     cin >> N;
//     vector<int> A(N);
//     rep(i, 0, N) cin >> A[i];

//     int ans = 0;
//     rep(i, 0, N) {
//         if (A[i] % 2) continue;
//         ans += count(A[i]);
//     }
//     cout << ans << endl;
//     return 0;
// }