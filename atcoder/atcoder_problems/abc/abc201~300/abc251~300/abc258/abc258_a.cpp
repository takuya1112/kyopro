#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define ll long long


int main() {
    int x;
    cin >> x;
    int H = x < 60 ? 21 : 22;
    int M = x % 60;
    cout << H << ":" << setw(2) << setfill('0') << M << '\n';
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i,n) for (int i = 0; i < (n); ++i)

// int main() {
//     int K; cin >> K;
//     int H = 21, M = 0;
//     if (K >= 60) H++;
//     M += K % 60; 
//     printf("%d:%02d\n", H, M);
//     return 0;
// }