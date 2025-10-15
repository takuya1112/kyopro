#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    vector<int> cnt(N);
    rep(i, 0, K) {
        int a, b;
        cin >> a >> b;
        a--;
        cnt[a]++;
        if (cnt[a] >= M) cout << a + 1 << ' ';
    }
    cout << '\n';
    return 0;
}