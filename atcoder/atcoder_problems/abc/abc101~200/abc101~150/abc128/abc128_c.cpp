#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N, M; 
    cin >> N >> M;
    vector<int> a(N);
    rep(i, M) {
        int k;
        cin >> k;
        rep(j, k) {
            int s;
            cin >> s;
            s--;
            a[s] |= 1 << i;
        }
    }

    int P = 0;
    rep(i, M) {
        int x;
        cin >> x;
        P |= x << i;
    }
    
    int ans = 0;
    for (int bit = 0; bit < (1 << N); bit++) {
        int t = 0;
        rep(i, N) {
            if (bit >> i & 1) {
                t ^= a[i];
            }
        }
        if (t == P) ans++;
    }
    cout << ans << endl;
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)
// #define ll long long

// int main() {
//     int N, M; 
//     cin >> N >> M;
//     vector<int> S(N, 0); 
//     rep(i, M) {
//         int k;
//         cin >> k;
//         rep(j, k) {
//             int s;
//             cin >> s;
//             s --;
//             S[s] |= 1 << i;
//         }
//     }
//     int P = 0;
//     rep(i, M) {
//         int p;
//         cin >> p;
//         if (p) P |= 1 << i;
//     }

//     int ans = 0;
//     for (int bit = 0; bit < (1 << N); bit++) {
//         int sum = 0;
//         for (int i = 0; i < N; i++) {
//             if (bit >> i & 1) {
//                 sum ^= S[i];
//             }
//         }
//         if (sum == P) ans++;
//     }
//     cout << ans << endl;
//     return 0;
// }