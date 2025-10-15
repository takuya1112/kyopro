#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n, m; 
    cin >> n >> m;
    vector<int> a(n), b(m);
    rep(i,n) cin >> a[i];
    rep(i,m) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    multiset<int> s;
    rep(i,n) s.insert(a[i]);
    ll ans = 0;
    rep(i,m) {
        auto it = s.lower_bound(b[i]);
        if (it == s.end()) {
            cout << -1 << endl;
            return 0;
        }
        ans += *it;
        s.erase(it);
    }
    cout << ans << endl;
    return 0;
}