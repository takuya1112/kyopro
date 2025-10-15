#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    rep(i, 0, N) cin >> A[i];

    vector<ll> coins(20, 0);
    coins[0] = 1;
    coins[1] = 5;
    rep(i, 2, 20) coins[i] = coins[i - 2] * 10;

    int ans = inf;
    auto f = [&](auto f, vector<int> a) {
        if (a.size() == K) {
            ll sum = 0;
            for (int i : a) {
                sum += A[i];
            }

            int cnt = 0;
            rrep(i, 19, 0) {
                cnt += sum / coins[i];
                sum %= coins[i];
            }
            ans = min(ans, cnt);
            return;
        }

        int l = 0;
        if (a.size()) l = a.back() + 1;
        a.push_back(l);
        while (a.back() < N) {
            f(f, a);
            a.back()++;
        }


    };
    f(f, vector<int> ());
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
//     int N, K;
//     cin >> N >> K;
//     vector<int> A(N);
//     rep(i, 0, N) cin >> A[i];

//     vector<ll> coins(10);
//     coins[0] = 1;
//     rep(i, 0, 9) coins[i + 1] = coins[i] * 10;
    

//     int ans = inf;
//     auto f = [&](auto f, vector<int> a) {
//         if (a.size() == K) {
//             ll sum = 0;
//             for (int i : a) {
//                 sum += A[i];
//             }

//             int cnt = 0;
//             rrep(i, 9, 0) {
//                 cnt += sum / (coins[i] * 5);
//                 sum %= coins[i] * 5;

//                 cnt += sum / coins[i];
//                 sum %= coins[i];
//             }
//             ans = min(ans, cnt);
//             return;
//         }

//         int l = 0;
//         if (a.size()) l = a.back() + 1;
//         a.push_back(l);
//         while (a.back() < N) {
//             f(f, a);
//             a.back()++;
//         }


//     };
//     f(f, vector<int> ());
//     cout << ans << endl;
//     return 0;
// }