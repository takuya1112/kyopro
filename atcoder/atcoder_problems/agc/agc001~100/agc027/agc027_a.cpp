#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

int main(){
    int N, X;
    cin >> N >> X;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    sort(A.begin(), A.end());
    long long A_sum = accumulate(A.begin(), A.end(),0LL);

    if (A_sum == X){
        cout << N << endl;
        return 0;
    }

    
    int ans = 0;
    for (int i = 0; i < N; i++){
        if (X < A[i]) break;
        X -= A[i];
        ans += 1;
    }
    if (ans == N) ans -= 1;
    cout << ans << endl;
    return 0;
}