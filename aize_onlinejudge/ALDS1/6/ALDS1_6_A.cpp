#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define chmin(x, y) x = min(x, y)
typedef long long ll; const int inf = INT_MAX / 2;
#define MAX 2000001
#define VMAX 10000

int main() {
    int n, i, j;
    cin >> n;
    vector<int> A(n + 1), B(n + 1), C(VMAX + 1, 0);
    rep(i, 0, n) {
        cin >> A[i + 1];
        C[A[i + 1]]++;
    }
    
    rep(i, 1, VMAX + 1) C[i] = C[i] + C[i - 1];

    rep(i, 1, n + 1) {
        B[C[A[i]]] = A[i];
        C[A[i]]--; 
    }

    rep(i, 1, n + 1) {
        if (i > 1) cout << ' ';
        cout << B[i];
    }
    cout << '\n';
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i = a; i >= b; i--)
// #define all(x) (x).begin(),(x).end()
// #define rall(x) (x).rbegin(),(x).rend()
// #define chmin(x, y) x = min(x, y)
// typedef long long ll; const int inf = INT_MAX / 2;

// const int MAX = 10005;

// int main() {
//     int N;
//     cin >> N;
//     vector<int> A(N), B(N);
//     rep(i, 0, N) cin >> A[i];

//     auto countingSort = [&]() {
//         vector<int> counter(MAX, 0);
//         rep(i, 0, N) counter[A[i]]++;
//         rep(i, 1, MAX) counter[i] = counter[i] + counter[i - 1];

//         rrep(i, N - 1, 0) {
//             B[counter[A[i]] - 1] = A[i];
//             counter[A[i]]--;
//         }
//     };
//     countingSort();
//     rep(i, 0, N) {
//         if (i) cout << ' ';
//         cout << B[i];
//     } 
//     cout << endl;
//     return 0;
// }