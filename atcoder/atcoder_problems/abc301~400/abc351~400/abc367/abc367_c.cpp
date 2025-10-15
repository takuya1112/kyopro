#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a;i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll;

int main() {
    int n, k; 
    cin >> n >> k;
    vector<int> r(n);
    rep(i, 0, n) cin >> r[i];

    vector<int> x(n+1, 1);
    rrep(i, n-1, 0) {
        x[i] = x[i+1] * r[i];
    }

    rep(num, 0, x[0]) {
        vector<int> a(n);
        rep(i, 0, n) a[i] = num / x[i+1] % r[i] + 1;
        int s = 0;
        rep(i, 0, n) s += a[i];
        if (s % k) continue;
        rep(i, 0, n) cout << a[i] << ' ';
        cout << endl;
    }
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i=a;i>=b;i--)
// #define all(x) (x).begin(),(x).end()
// typedef long long ll;

// int main() {
//     int n, k;
//     cin >> n >> k;
//     int r[8];
//     rep(i, 0, n) cin >> r[i];

//     auto f = [&] (auto f, vector<int> a) -> void {
//         if (a.size() == n) {
//             int s = 0;
//             rep(i, 0, n) s += a[i];
//             if (s % k == 0) {
//                 rep(i, 0, n) cout << a[i] << " ";
//                 cout << endl;
//             }
//             return;
//         }

//         int i = a.size();
//         rep(x, 1, r[i] + 1) {
//             vector<int> na = a;
//             na.push_back(x);
//             f(f, na);
//         }
//     };
//     f(f, {});
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i=a;i>=b;i--)
// #define all(x) (x).begin(),(x).end()
// typedef long long ll;

// int N, K;
// vector<int> R(10);

// bool check(vector<int> a) {
//     int sum = 0;
//     rep(i, 0, N) {
//         sum += a[i];
//     }
//     if (sum % K == 0) return true;
//     else return false;
// }

// void print(vector<int> a) {
//     rep(i, 0, N) {
//         printf("%d%c", a[i], i == N-1 ? '\n' : ' ');
//     }
// }

// void f(vector<int> a) {
//     if (a.size() == N && check(a)) {
//         print(a);
//     } else {
//         int idx = a.size();
//         a.push_back(1);
//         while (a.back() <= R[idx]) {
//             f(a);
//             a.back()++;
//         }
//     }
// }


// int main() {
//     cin >> N >> K;
//     rep(i, 0, N) {
//         cin >> R[i];
//     }

//     f({});
//     return 0;
// }