#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int N, T, A;
    cin >> N >> T >> A;
    int H[1100];
    for (int i = 0; i < N; i++) cin >> H[i];

    int ans = 1;
    double ans_temp = fabs(A - (T- H[0] * 0.006));

    for (int i = 1; i < N; i++){
        double temp = fabs(A - (T- H[i] * 0.006));
        if (ans_temp > temp){
            ans_temp = temp;
            ans = i + 1;
        }
    }
    cout << ans << endl;
    return 0;
}