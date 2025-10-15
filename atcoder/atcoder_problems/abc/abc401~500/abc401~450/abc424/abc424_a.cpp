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
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b || b == c || c == a) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}