#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N;
    cin >> N;
    vector<int> x(N), y(N), h(N);
    rep(i, N) cin >> x[i] >> y[i] >> h[i];

    rep(cx, 101) rep(cy, 101) {
        int H = 1;
        rep(i, N) if (h[i]) H = h[i] + abs(cx - x[i]) + abs(cy - y[i]);
        int ok = 1;
        rep(i, N) if (max(H - abs(x[i] - cx) - abs(y[i] - cy), 0) != h[i]) ok = 0;
        if (ok) {
            printf("%d %d %d\n", cx, cy, H);
            return 0;
        }
    }
}



// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     int N;
//     cin >> N;
//     vector<int> x(N), y(N), h(N);
//     for (int i = 0; i < N; i++) cin >> x[i] >> y[i] >> h[i];
    
    
//     for (int cx = 0; cx < 101; cx++){
//         for (int cy = 0; cy < 101; cy++){

//             int H = 1;
//             for (int i = 0; i < N; i++){
                
//                 if (h[i]){
//                     H = h[i] + abs(x[i] - cx) + (y[i] - cy);
//                 }
//                 int ok = 1;
//                 for (int j = 0; j < N; j++){
//                     if (h[j] != max(H - abs(x[j] - cx) - abs(y[j] - cy), 0)) ok = 0;
                
//                 }if (ok) {
//                     cout << cx << " " << cy << " " << H << endl;
//                     return 0;
//                 }
//             }
//         }
//     }
// }