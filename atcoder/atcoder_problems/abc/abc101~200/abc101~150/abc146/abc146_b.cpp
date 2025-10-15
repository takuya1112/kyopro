#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int N; string S;
    cin >> N >> S;
    for (char c : S){
        int x = c - 'A';
        x = (x + N) % 26;
        printf("%c", char(x+'A'));
    }
    printf("\n");
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)

// int main() {
//     int N;
//     string S;
//     cin >> N >> S;
//     for (int i = 0; i < S.size(); i++){
//         if (S[i] + N <= 'Z') S[i] += N;
//         else S[i] += N - 26;
//     }
//     cout << S << endl;
//     return 0;
// }