#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)

bool solve(int n) {
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) cnt++;
    }
    if (cnt == 8 && n % 2 == 1) return true;
    return false;
}

int main() {
    int N, ans = 0;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        if (solve(i)) ans++;
    }
    cout << ans << endl;
    return 0;
}


// int main() {
//     int N; cin >> N;
//     int ans = 0;
//     for (int i = 1; i <= N; i++) {
//         int cnt = 0;
//         for (int j = 1; j <= N; j++) {
//             if (i % 2 == 0) continue;
//             if (i % j == 0) cnt += 1;  
//         }
//         if (cnt == 8) ans++;
//     }
//     cout << ans << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;


// int main(){
//     int N;
//     cin >> N;
//     int ans = 0;
//     for (int i = 1; i <= N; i += 2){
//         int count = 0;
//         for (int j = 1; 1LL * j *j <= i; j++){
//             if (i % j == 0) {
//                count ++; 
//                if (j * j != i) count ++;
//             }
//         }
//         if (count == 8) ans ++;
//     }
//     cout << ans << endl;
// }