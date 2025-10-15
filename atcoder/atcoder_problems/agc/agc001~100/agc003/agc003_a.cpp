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
    string S;
    cin >> S;

    vector<bool> v(4);
    rep(i, 0, S.size()) {
        if (S[i] == 'N') v[0] = true;
        if (S[i] == 'W') v[1] = true;
        if (S[i] == 'S') v[2] = true;
        if (S[i] == 'E') v[3] = true;
    }
    
    if (v[0] == v[2] && v[1] == v[3]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}