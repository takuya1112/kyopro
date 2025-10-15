#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int N, cnt; string S;

int main() {
    cin >> N >> S;
    for (int i = 0; i < 1000; i++) {
        int a[3] = {i / 100, (i / 10) % 10, i % 10};
        int prosess = 0;
        for (int j = 0; j < N; j++) {
            if (prosess <= 2 && a[prosess] == (int)(S[j] - '0')) prosess++;
        }
        if (prosess == 3) cnt += 1;
    }
    cout << cnt << endl;
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)

// int N; 
// string S;

// bool solve(string x) {
//     int check = 0;
//     for (int i = 0; i < S.size(); i++) {
//         if (x[check] == S[i]) check++;
//         if (check >= 3) return true;
//     }
//     return false;
// }

// int main() {
//     cin >> N >> S;
//     int ans = 0;
//     for (int i = 0; i < 1000; i++) {
//         string s = to_string(i);
//         if (s.size() < 3) s = string(3 - s.size(), '0') + s;
//         if (solve(s)) ans++;
//     }
//     cout << ans << endl;
//     return 0;
// }