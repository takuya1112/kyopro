#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    int N = 8;
    vector<string> S(N);
    rep(i,N) cin >> S[i];

    int ans = 0;
    rep(i,N) rep(j,N) {
        if (S[i][j] == '#') continue;
        bool ok = true;
        rep(k,N) if (S[i][k] == '#') ok = false;
        rep(k,N) if (S[k][j] == '#') ok = false;
        if (ok) ans ++;
    }
    cout << ans << endl;
    return 0;
}