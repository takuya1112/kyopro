#include <stdio.h>
#define MAX 100000

int A[MAX], n;

int partition(int p, int r) {
    int x, i, j, t;
    x = A[r];
    i = p - 1;
    for (j = p; j < r; j++) {
        if (A[j] <= x) {
            i++;
            t = A[i]; A[i] = A[j]; A[j] = t;
        }
    }
    t = A[i + 1]; A[i + 1] = A[r]; A[r] = t;
    return i + 1;
}

int main() {
    int i, q;
    scanf("%d", &n);
    for(i = 0; i < n; i++) scanf("%d", &A[i]);

    q = partition(0, n - 1);
    for (i = 0; i < n; i++) {
        if (i) printf(" ");
        if (i == q) printf("[");
        printf("%d", A[i]);
        if (i == q) printf("]");
    }
    printf("\n");
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

// int main() {
//     int N;
//     cin >> N;
//     vector<int> A(N);
//     rep(i, 0, N) cin >> A[i];

//     auto partition = [&](int p, int r) -> int {
//         int x = A[r];
//         int i = p - 1;
//         for (int j = p; j < r; j ++) {
//             if (A[j] <= x) {
//                 i++;
//                 swap(A[i], A[j]);
//             }
//         }
//         swap(A[i + 1], A[r]);
//         return i + 1;
//     };

//     int n = partition(0, N - 1);
//     rep(i, 0, n) cout << A[i] << ' ';
//     cout << '[' << A[n] << ']';
//     rep(i, n + 1, N) cout << ' ' << A[i]; 
//     cout << endl;
//     return 0;
// }