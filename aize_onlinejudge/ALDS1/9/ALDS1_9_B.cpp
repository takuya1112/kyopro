#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
typedef long long ll; const int inf = INT_MAX / 2;
#define MAX 2000000

int H, A[MAX + 1];

void maxHeapify(int i) {
    int l, r, largest;
    l = 2 * i;
    r = 2 * i + 1;

    if (l <= H && A[l] > A[i]) largest = l;
    else largest = i;
    if (r <= H && A[r] > A[largest]) largest = r;

    if (largest != i) {
        swap(A[i], A[largest]);
        maxHeapify(largest);
    }
}

int main() {
    cin >> H;
    rep(i, 1, H + 1) cin >> A[i];
    for (int i = H / 2; i >= 1; i--) maxHeapify(i);
    for (int i = 1; i <= H; i++) {
        cout << " " << A[i];
    }
    cout << endl;
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i = a; i >= b; i--)
// #define all(x) (x).begin(),(x).end()
// #define rall(x) (x).rbegin(),(x).rend()
// #define chmin(x, y) x = min(x, y)
// #define chmax(x, y) x = max(x, y)
// typedef long long ll; const int inf = INT_MAX / 2;

// const int MAX = 500010; 
// int H, A[MAX];

// int left(int x) {return 2 * x;}
// int right(int x) {return 2 * x + 1;}

// void maxHeapify(int x) {
//     int l = left(x);
//     int r = right(x);

//     int largest = x;
//     if (l <= H && A[l] > A[largest]) largest = l;
//     if (r <= H && A[r] > A[largest]) largest = r;

//     if (largest != x) {
//         swap(A[x], A[largest]);
//         maxHeapify(largest);
//     }
// }

// int main() {
//     cin >> H;
//     rep(i, 1, H + 1) cin >> A[i];

//     rrep(i, H / 2, 1) {
//         maxHeapify(i);
//     }
//     rep(i, 1, H + 1) {
//         if (i != 1) cout << ' ';
//         cout << A[i];
//     }
//     cout << endl;
//     return 0;
// }