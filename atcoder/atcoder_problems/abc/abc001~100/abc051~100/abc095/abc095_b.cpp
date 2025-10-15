#include <iostream>
using namespace std;

int main(){
    int N, X, sum_m = 0, min_m = 1100;
    cin >> N >> X;
    for (int i = 0; i < N; i++){
        int m;
        cin >> m;
        sum_m += m;
        min_m = min(m, min_m);
    }
    cout << N + ((X - sum_m)/min_m) << endl;
    return 0;
}





// #include <iostream>
// using namespace std;

// int main(){
//     int N, X, ans = 0, mn_m = 1100;
//     cin >> N >> X;
//     for (int i = 0; i < N; i++){
//         int m;
//         cin >> m;
//         if (m < mn_m) mn_m = m;
//         X -= m;
//         ans += 1;
//     }
//     ans += X / mn_m;
//     cout << ans << endl;
//     return 0;
// }