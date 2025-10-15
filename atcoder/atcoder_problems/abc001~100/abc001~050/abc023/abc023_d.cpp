#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define ll long long
const ll INF = 1LL << 60;

int main() {
    int N;
    cin >> N;
    vector<ll> H(N), S(N);
    rep(i, N) cin >> H[i] >> S[i];

    ll left = 0, right = INF;
    while (right - left > 1) {
        ll mid = (left + right) / 2;

        bool ok = true;
        vector<ll> t(N, 0);
        rep(i, N) {
            if (mid < H[i]) ok = false;
            else t[i] = (mid - H[i]) / S[i];
        }

        sort(t.begin(), t.end());
        rep(i, N) {
            if (t[i] < i) ok = false;
        }
        if (ok) right = mid;
        else left = mid;
    }
    cout << right << endl;
    return 0;
}




// mycode worng ans
// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)
// #define ll long long
// using pint = pair<int, int>;

// int main() {
//     int N; cin >> N;
//     vector<ll> H(N), S(N);
//     rep(i, N) cin >> H[i] >> S[i];
    
//     return 0;
// }