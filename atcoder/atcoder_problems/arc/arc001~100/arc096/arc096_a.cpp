#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int A, B, C, X, Y; 
    cin >> A >> B >> C >> X >> Y;

    int ans = INT_MAX;
    rep(k, 100001) {
        int s = 2 * C * k;
        s += max(X - k, 0) * A;
        s += max(Y - k, 0) * B;
        ans = min(ans, s);
    }
    cout << ans << endl;
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)

// int main() {
//     int A, B, C, X, Y;
//     cin >> A >> B >> C >> X >> Y;
//     int ans = 0;
//     if (A + B > C * 2) {
//         if (X < Y) {
//             ans += C * 2 * X; 
//             Y -= X;
//             X = 0;
//         }
//         else {
//             ans += C * 2 * Y;
//             X -= Y;
//             Y = 0;
//         }
//     }
//     else {
//         ans += A * X + B * Y;
//         X = 0;
//         Y = 0;
//     }

//     if (X > Y) {
//         if (A > C * 2) {
//             ans += C * 2 * X;
//             X = 0;
//         }
//         else {
//             ans += A * X;
//         }
//     }
//     else if (Y > X) {
//         if (B > C * 2) {
//             ans += C * 2 * Y;
//             Y = 0;
//         }
//         else {
//             ans += B * Y;
//         }
//     }

//     cout << ans << endl;
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main(){
//     int A, B, C, X, Y;
//     cin >> A >> B >> C >> X >> Y;

//     long long ans = A * X + B * Y;

//     int loop = 0;
//     if (X >= Y) loop = X * 2;
//     else loop = Y * 2;
//     for (int ab = 0; ab <= loop; ab++){
//         long long check = ab * C;
//         int x = X - (ab/2);
//         int y = Y - (ab/2);
//         if (0 < x) check += A * (x);
//         if (0 < y) check += B * (y);
//         ans = min(ans, check);
//     }
//     cout << ans << endl;
//     return 0;
// }