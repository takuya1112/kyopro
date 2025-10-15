#include <iostream>
using namespace std;

int main(){
    int N, ans = -1, max_record = -1;
    cin >> N;
    for (int i = 1; i <= N; i++){
        int j = i, record = 0;
        while (j % 2 == 0){
            j /= 2;
            record += 1;
        }
        if (record > max_record){
            max_record = record;
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)

// int count(int x) {
//     int cnt = 0;
//     while (x % 2 == 0) {
//         cnt++;
//         x /= 2;
//     }
//     return cnt;
// }

// int main() {
//     int N; 
//     cin >> N;
//     int ans = 1;
//     int cnt = 0;
//     for (int i = 2; i <= N; i++) {
//         int c = count(i);
//         if (c > cnt) {
//             cnt = c;
//             ans = i;
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }