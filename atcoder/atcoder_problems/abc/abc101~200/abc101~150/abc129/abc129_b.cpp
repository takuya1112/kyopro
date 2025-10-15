#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i,n,m) for (int i = (n); i < (m); ++i)

int main(){
    int N;
    cin >> N;
    vector<int> W(N);
    rep(i,0,N) cin >> W[i];
    rep(i,1,N) W[i] += W[i-1];

    int ans = W[N-1];
    rep(T, 0, N-1) {
        int S1 = W[T];
        int S2 = W[N-1] - S1;
        ans = min(ans ,abs(S1 - S2));
    }
    cout << ans << endl;
    return 0;
}