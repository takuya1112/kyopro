#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    vector<int> L(N);
    for (int i = 0; i < N; i++){
        cin >> L[i];
    }
    sort(L.begin(), L.end());
    reverse(L.begin(), L.end());
    int ans = 0;
    for (int i = 0; i < K; i++) ans += L[i];
    cout << ans << endl;
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)

// int main() {
//     int N, K;
//     cin >> N >> K;
//     vector<int> L(N);
//     rep(i, N) cin >> L[i];
//     sort(L.begin(), L.end(), greater<>());
//     int ans = 0; 
//     rep(i, K) ans += L[i];
//     cout << ans << endl;
//     return 0;
// }