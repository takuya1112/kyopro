#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> R(N);
    rep(i, N) cin >> R[i];
    sort(R.begin(), R.end());
    float ans = 0;
    for (int i = N -K; i < N; i++){
        ans += R[i];
        ans /= 2;
    }
    printf("%.10f\n", ans);
    return 0;
}