#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int N, K;
vector<vector<int>> t;

bool f(int n, int x) {
    if (n == N) {
        if (x == 0) return false;
        else return true;
    } else {
        rep(i, 0, K) {
            if (!f(n+1, x ^ t[n][i])) return false;
        }
        return true;
    }
}

int main() {
    cin >> N >> K;
    t = vector<vector<int>>(N, vector<int>(K, 0));
    rep(i, 0, N) rep(j, 0, K) cin >> t[i][j];
    if (f(0, 0)) cout << "Nothing" << '\n';
    else cout << "Found" << '\n';
    return 0;
}