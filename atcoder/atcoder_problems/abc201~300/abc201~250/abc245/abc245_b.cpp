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
    int N;
    cin >> N;
    set<int> A;
    rep(i, 0, N) {
        int a;
        cin >> a;
        A.insert(a);
    }

    rep(i, 0, N + 1) {
        if (A.count(i)) continue;
        cout << i << endl;
        break;
    }
    return 0;
}