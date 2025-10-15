#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int A[5];
    rep(i, 0, 5) cin >> A[i];

    vector<int> V;
    rep(i, 0, 5) V.push_back(i);
    
    int ans = inf;
    do {
        int t = 0;
        rep(i, 0, 5) {
            int vi = V[i];
            if (0 < t % 10) t = t - (t % 10) + 10;
            t += A[vi];
        }
        ans = min(ans, t);
    } while (next_permutation(all(V)));

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
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     int a, b, c, d, e;
//     cin >> a >> b >> c >> d >> e;
//     const int N = 5;

//     vector<int> Time = {a, b, c, d, e};
//     vector<int> nextTime(N);
//     rep(i, 0, N) {
//         if (Time[i] % 10 == 0) nextTime[i] = Time[i];
//         else nextTime[i] = Time[i] - Time[i] % 10 + 10;

//         // nextTime[i] = (Time[i] + 9) / 10 * 10;
//     }

//     int BestTime = inf;
//     rep(i, 0, N) {
//         int SumTime = 0;
//         rep(j, 0, N) {
//             if (i == j) {
//                 SumTime += Time[j];
//             }
//             else {
//                 SumTime += nextTime[j];
//             }
//         }
//         BestTime = min(BestTime, SumTime);
//     }
//     cout << BestTime << endl;
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i = a; i >= b; i--)
// #define all(x) (x).begin(),(x).end()
// typedef long long ll; const int inf = INT_MAX / 2;

// const int mx = 10; 

// int main() {
//     vector<int> A(5);
//     rep(i, 0, 5) cin >> A[i];

//     int ans = 0;
//     int min_a = mx;
//     rep(i, 0, 5) {
//         int last = A[i] % 10;
//         if (last == 0) ans += A[i];
//         else ans += A[i] + 10 - last;

//         if (last != 0) min_a = min(min_a, last);
//     }

//     if (min_a == mx) cout << ans << endl;
//     else cout << ans - 10 + min_a << endl;
//     return 0;
// }