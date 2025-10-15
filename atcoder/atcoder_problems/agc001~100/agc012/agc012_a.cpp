#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N * 3);
    for (int i = 0; i < N * 3; i++) cin >> A[i];

    sort(A.begin(), A.end());

    long long ans = 0;
    for (int i = N; i < N * 3; i += 2){
        ans += A[i];
    }
    cout << ans << endl;
    return 0;
}