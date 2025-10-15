#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    ll N, M; 
    cin >> N >> M; 
    vector<ll> P(N);
    rep(i, N) cin >> P[i];
    P.push_back(0);
    
    vector<ll> S;
    rep(i, P.size()){
        rep(j, P.size()) {
            S.push_back(P[i] + P[j]);
        }
    }
    sort(S.begin(), S.end());

    ll res = 0;
    for (ll a : S) {
        auto it = upper_bound(S.begin(), S.end(), M - a);
        if (it == S.begin()) continue;
        --it;
        res = max(res, a + *it);
    }
    cout << res << endl;
    return 0;
}