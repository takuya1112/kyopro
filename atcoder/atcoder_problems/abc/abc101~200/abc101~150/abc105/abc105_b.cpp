#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define yes "Yes"
#define no "No"

int N;

string solve() {
    for (int d4 = 0; d4 < 101; d4++) {
        for (int d7 = 0; d7 < 101; d7++) {
            if (d4 * 4 + d7 * 7 == N) return yes;
        }
    }
    return no;
}


int main() {
    cin >> N;
    cout << solve() << endl;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)

// int main() {
//     int N;
//     cin >> N;
//     int cake = 4, donut = 7;
//     rep(i, N)rep(j, N) {
//         if (cake * i + donut * j == N) {
//             cout << "Yes" << endl;
//             return 0;
//         }
//     }
//     cout << "No" << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){
//     int N; 
//     cin >> N;
//     int x = N / 4;
//     int y = N / 7;
//     for (int i = 0; i <= x; i++){
//         for (int j = 0; j <= y; j++){
//             if ((i * 4) + (j * 7) == N){
//                 cout << "Yes" << endl;
//                 return 0;
//             }
//         }
//     }
//     cout << "No" << endl;
//     return 0;
// }


