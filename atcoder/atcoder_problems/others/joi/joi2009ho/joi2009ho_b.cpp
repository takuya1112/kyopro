#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    ll D, N, M;
    cin >> D >> N >> M;
    vector<int> a(N+1, 0);
    for (int i = 1; i < N; i++) cin >> a[i];
    a[N] = D;
    sort(a.begin(), a.end());

    ll res = 0;
    for (int i = 0; i < M; i++) {
        ll k; 
        cin >> k;
        int it = lower_bound(a.begin(), a.end(), k) - a.begin();
        ll tmp = abs(a[it] - k);
        if (it > 0) tmp = min(tmp, abs(a[it-1] - k));
        res += tmp;
    }
    cout << res << endl;
    return 0;
}



// mycode worng ans
// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)
// #define ll long long

// ll d;

// int binary_search(int key) {

//     return 0;
// }

// int main() {
//     int n, m;
//     cin >> d >> n >> m;

//     ll A[n];
//     rep(i, n-1) cin >> A[i];

//     ll B[m];
//     rep(i, m) cin >> B[i];

//     ll ans = 0;
//     for (int i = 0; i < n; i++) {
//         ll min_dis = d;
//         for (int j = 0; j < m; j++) {
//             ;
//         }
//     }

//     return 0;
// }