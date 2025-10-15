#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int A, B, M;
    cin >> A >> B >> M;
    vector<int> a(A), b(B), x(M), y(M), c(M);
    rep(i, 0, A) cin >> a[i];
    rep(i, 0, B) cin >> b[i];
    rep(i, 0, M) cin >> x[i] >> y[i] >> c[i];

    auto min_a = min_element(all(a));
    auto min_b = min_element(all(b));
    int ans = *min_a +  *min_b;

    rep(i, 0, M) {
        int ai = a[x[i] - 1];
        int bi = b[y[i] - 1];
        ans = min(ans, ai + bi - c[i]);
    }
    cout << ans << endl;
    return 0;
}