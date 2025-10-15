#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define rep(i,n,m) for (int i = (n); i < (m); ++i)

int main(){
    int H, W;
    cin >> H >> W;
    vector<vector<char>> S(55, vector<char>(55));
    rep(i,1,H+1) rep(j,1,W+1) cin >> S[i][j];

    int count = 0;
    rep(i,1,H+1) rep(j,1,W+1){
        if (S[i][j] == '#' and S[i-1][j] != '#' and S[i+1][j] != '#' and S[i][j-1] != '#' and S[i][j+1] != '#') count ++;
    }

    if (count == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}