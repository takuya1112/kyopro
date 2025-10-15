#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
#define SENTINEL INT_MAX

struct Card {
    string suit;
    int value;
};

struct Card L[MAX / 2 + 2], R[MAX / 2 + 2];

void merge(struct Card A[], int n, int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left;
    int n2 = right - mid;
    for (i = 0; i < n1; i++) L[i] = A[left + i];
    for (i = 0; i < n2; i++) R[i] = A[mid + i];
    L[n1].value = R[n2].value = SENTINEL;
    i = j = 0;
    for (k = left; k < right; k++) {
        if (L[i].value <= R[j].value) {
            A[k] = L[i++];
        } else {
            A[k] = R[j++]; 
        }
    }
}

void mergeSort(struct Card A[], int n, int left, int right) {
    int mid;
    if (left + 1 < right) {
        mid = (left + right) / 2;
        mergeSort(A, n, left, mid);
        mergeSort(A, n, mid, right);
        merge(A, n, left, mid, right);
    }
}

int partition(struct Card A[], int n, int p, int r) {
    int i, j;
    struct Card t, x;
    x = A[r];
    i = p - 1;
    for (j = p; j < r; j++) {
        if (A[j].value <= x.value) {
            i++;
            t = A[i]; A[i] = A[j]; A[j] = t;
        }
    }
    t = A[i + 1]; A[i + 1] = A[r]; A[r] = t;
    return i + 1;
}

void quickSort(struct Card A[], int n, int p, int r) {
    int q;
    if (p < r) {
        q = partition(A, n, p, r);
        quickSort(A, n, p, q - 1);
        quickSort(A, n, q + 1, r);
    }
}

int main() {
    int n, i, v;
    struct Card A[MAX], B[MAX];

    string s;
    int stable = 1;

    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> s >> v;
        A[i].suit = B[i].suit = s;
        A[i].value = B[i].value = v;
    }

    mergeSort(A, n, 0, n);
    quickSort(B, n, 0, n - 1);

    for (i = 0; i < n; i++) {
        if (A[i].suit != B[i].suit) stable = 0;
    }

    if (stable) cout << "Stable" << endl;
    else cout << "Not stable" << endl;
    
    for (i = 0; i < n; i++) {
        cout << B[i].suit << ' ' << B[i].value << endl;
    }
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
//     vector<pair<char, int>> A(N), B;
//     rep(i, 0, N) cin >> A[i].first >> A[i].second;
//     map<int, string> mp;
//     rep(i, 0, N) mp[A[i].second] += A[i].first;


//     auto partition = [&](int p, int r) -> int {
//         int x = A[r].second;
//         int i = p - 1;
//         rep(j, p, r) {
//             if (A[j].second <= x) {
//                 i++;
//                 swap(A[i], A[j]);
//             }
//         }
//         swap(A[i + 1], A[r]);
//         return i + 1;
//     };

//     auto quicksort = [&](auto quicksort, int p, int r) -> void {
//         if (p < r) {
//             int q = partition(p, r);
//             quicksort(quicksort, p, q - 1);
//             quicksort(quicksort, q + 1, r);
//         }
//     };
//     quicksort(quicksort, 0, N - 1);

//     bool ok = true;
//     map<int, int> cnt;
//     rep(i, 0, N) {
//         int n = A[i].second;
//         char c1 = A[i].first;
//         char c2 = mp[n][cnt[n]];
//         if (c1 != c2) ok = false;
//         cnt[n]++;
//     }

//     if (ok) cout << "Stable" << endl;
//     else cout << "Not stable" << endl;
//     rep(i, 0, N) {
//         cout << A[i].first << ' ' << A[i].second << endl;
//     }
//     return 0;
// }