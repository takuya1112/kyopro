#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int n = N, ans = 0;
    if (N % 10 == 0) cout << 10 << endl;
    else {
        while (n > 0){
            ans += n % 10;
            n /= 10;
        }
        cout << ans << endl;
    }
    
    return 0;
}



// int main(){
//     int N;
//     cin >> N;
//     int ans = 10000000;
//     for (int i = 1; i < N / 2 + 1; i++){
//         int saved_ans = 0;
//         int a = i;
//         int b = N - i;
//         while (a > 0){
//             saved_ans += a % 10;
//             a /= 10;
//         }
//         while (b > 0){
//             saved_ans += b % 10;
//             b /= 10;
//         }
//         ans = min(ans, saved_ans);
//     }
//     cout << ans << endl;
//     return 0;
// }