#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> b(N), w(M);
    rep(i, N) cin >> b[i];  
    rep(i, M) cin >> w[i];  

    sort(b.rbegin(), b.rend());
    sort(w.rbegin(), w.rend());

    ll ans = 0;
    ll sumb = 0;
    ll maxw = 0, sumw = 0;
    rep(i, N) {
        sumb += b[i];
        if (i < M) sumw += w[i];
        maxw = max(maxw, sumw);
        ans = max(ans, sumb + maxw);
    }
    cout << ans << endl;
    return 0;
}





// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)
// #define ll long long

// int main() {
//     int N, M; 
//     cin >> N >> M;
//     vector<ll> B(N), W(M);

//     rep(i, N) cin >> B[i];
//     sort(B.begin(), B.end(), greater<>());

//     rep(i, M) cin >> W[i];
//     sort(W.begin(), W.end(), greater<>());

//     rep(i, N-1) B[i+1] += B[i];
//     rep(i, M-1) W[i+1] += W[i];

//     ll ans = 0;
//     ll w = 0;
//     int j = -1;
//     rep(i, N) {
//         if (j + 1 < M && w < W[j+1]) {
//             w = W[j+1];
//             j++;
//         } 
//         ans = max(ans, (ll)B[i] + w);
//     }
//     cout << ans << endl;
//     return 0;
// }