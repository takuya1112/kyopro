#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define chmin(x, y) x = min(x, y)
typedef long long ll; const int inf = INT_MAX / 2;

#define MAX 200000

int L[MAX / 2 + 2], R[MAX / 2 + 2];

ll merge(int A[], int n, int left, int mid, int right) {
    int i, j, k;
    ll cnt = 0;
    int n1 = mid - left;
    int n2 = right - mid;
    rep(i, 0, n1) L[i] = A[left + i];
    rep(i, 0, n2) R[i] = A[mid + i];

    L[n1] = R[n2] = inf;
    i = j = 0;
    rep(k, left, right) {
        if (L[i] <= R[j]) {
            A[k] = L[i++]; 
        } else {
            A[k] = R[j++];
            cnt += n1 - i;
        }
    }
    return cnt;
}

ll mergeSort(int A[], int n, int left, int right) {
    int mid;
    ll v1, v2, v3;
    if (left + 1 < right) {
        mid = (left + right) / 2;
        v1 = mergeSort(A, n, left, mid);
        v2 = mergeSort(A, n, mid, right);
        v3 = merge(A, n, left, mid, right);
        return v1 + v2 + v3;
    } else return 0;
}

int main() {
    int A[MAX], n, i;
    cin >> n;
    rep(i, 0, n) cin >> A[i];

    ll ans = mergeSort(A, n, 0, n);
    cout << ans << endl;
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

// const int MAX = 200010;
// vector<int> L(MAX / 2 + 1), R(MAX / 2 + 1);

// int main() {
//     int n;
//     cin >> n;
//     vector<int> A(n);
//     rep(i, 0, n) cin >> A[i];

//     ll cnt = 0;

//     auto merge = [&](int left, int mid, int right) -> void {
//         int n1 = mid - left;
//         int n2 = right - mid;
//         rep(i, 0, n1) L[i] = A[left + i];
//         rep(i, 0, n2) R[i] = A[mid + i];
//         L[n1] = R[n2] = inf;

//         int i = 0, j = 0;
//         rep(k, left, right) {
//             if (L[i] <= R[j]) {
//                 A[k] = L[i++];
//             } else {
//                 A[k] = R[j++];
//                 cnt += n1 - i;
//             }
//         }
//     };


//     auto mergeSort = [&](auto mergeSort, int left, int right) -> void {
//         if (left + 1 <  right) {
//             int mid = (left + right) / 2;
//             mergeSort(mergeSort, left, mid);
//             mergeSort(mergeSort, mid, right);
//             merge(left, mid, right);
//         }
//     };

//     mergeSort(mergeSort, 0, n);

//     cout << cnt << endl;
//     return 0;
// }