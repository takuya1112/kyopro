#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
typedef long long ll; const int inf = INT_MAX / 2;
#define MAX 100000

int parent(int i) {return i / 2; }
int left(int i) {return 2 * i; }
int right(int i) {return 2 * i + 1; }

int main() {
    int H, A[MAX + 1];

    cin >> H;
    rep(i, 1, H + 1) cin >> A[i];

    rep(i, 1, H + 1) {
        cout << "node " << i << ": key = " << A[i] << ", ";
        if (parent(i) >= 1) cout << "parent key = " << A[parent(i)] << ", ";
        if (left(i) <= H) cout << "left key = " << A[left(i)] << ", ";
        if (right(i) <= H) cout << "right key = " << A[right(i)] << ", ";
        cout << endl;
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
// #define chmax(x, y) x = max(x, y)
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     int H;
//     cin >> H;
//     vector<int> node(H + 1);
//     rep(i, 1, H + 1) cin >> node[i];

//     rep(i, 1, H + 1) {
//         printf("node %d: ", i);
//         printf("key = %d, ", node[i]);
//         if(i / 2) printf("parent key = %d, ", node[i / 2]);
//         if (2 * i <= H) printf("left key = %d, ", node[i * 2]);
//         if (2 * i + 1 <= H) printf("right key = %d, ", node[i * 2 + 1]);
//         printf("\n");

//     }
//     return 0;
// }