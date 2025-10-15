#include <iostream>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    int N, A, B;
    cin >> N >> A >> B;
    int ans = 0;
    rep(i,N+1){
        int res = 0;
        int n = i;
        while (n > 0){
            res += n % 10;
            n /= 10;
        }
        if (res >= A and res <= B) ans += i;
    }
    cout << ans << endl;
    return 0;
}




// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     int N, A, B;
//     cin >> N >> A >> B;
//     int ans = 0;
//     for (int i = 1; i <= N; i++){
//         int j = i;
//         int sum_dig = 0;
//         while(j){
//             sum_dig += j % 10;
//             j /= 10;
//         }
//         if (A <= sum_dig and sum_dig <= B) ans += i;
//     }
//     cout << ans << endl;
//     return 0;
// }