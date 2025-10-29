#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    char com[20];
    priority_queue<int> PQ;

    while (1) {
        scanf("%s", com);
        if (com[0] == 'i') {
            int key; scanf("%d", &key);
            PQ.push(key);
        } else if (com[1] == 'x') {
            printf("%d\n", PQ.top());
            PQ.pop();
        } else if (com[0] == 'e') {
            break;
        }
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
//     int k;
//     string cmd;

//     priority_queue<int> pq;
//     while (1) {
//         cin >> cmd;
//         if (cmd == "insert") {
//             cin >> k;
//             pq.push(k);
//         } else if (cmd == "extract") {
//             cout << pq.top() << endl;
//             pq.pop();
//         } else break;
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i = a; i >= b; i--)
// #define all(x) (x).begin(),(x).end()
// #define rall(x) (x).rbegin(),(x).rend()
// #define chmin(x, y) x = min(x, y)
// #define chmax(x, y) x = max(x, y)
// typedef long long ll; const int inf = INT_MAX / 2;
// #define MAX 2000000
// #define INFTY (1 << 30)

// int H, A[MAX + 1];

// void maxHeapify(int i) {
//     int l, r, largest = i;
//     l = 2 * i;
//     r = 2 * i + 1;

//     if (l <= H && A[l] > A[largest]) largest = l;
//     if (r <= H && A[r] > A[largest]) largest = r;

//     if (largest != i) {
//         swap(A[i], A[largest]);
//         maxHeapify(largest);
//     }
// }

// int extract() {
//     int maxv;
//     if (H < 1) return -INFTY;
//     maxv = A[1];
//     A[1] = A[H--];
//     maxHeapify(1);
//     return maxv;
// }

// void increaseKey(int i, int key) {
//     if (key < A[i]) return;
//     A[i] = key;
//     while (i > 1 && A[i / 2] < A[i]) {
//         swap(A[i], A[i / 2]);
//         i = i / 2;
//     }
// }

// void insert(int key) {
//     H++;
//     A[H] = -INFTY;
//     increaseKey(H, key);
// }

// int main() {
//     int key;
//     string com;

//     while (1) {
//         cin >> com;
//         if (com == "end") break;
//         else if (com == "insert") {
//             cin >> key;
//             insert(key);
//         } else {
//             printf("%d\n", extract());
//         }
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i = a; i >= b; i--)
// #define all(x) (x).begin(),(x).end()
// #define rall(x) (x).rbegin(),(x).rend()
// #define chmin(x, y) x = min(x, y)
// #define chmax(x, y) x = max(x, y)
// typedef long long ll; const int inf = INT_MAX / 2;

// const int MAX = 2000010;
// int A[MAX], cur = 1;

// void maxHeap(int x) {
//     int p = x / 2;
//     if (p >= 1) if (A[p] < A[x]) {
//         swap(A[p], A[x]);
//         maxHeap(p);
//     }
// }

// void heap(int x) {
//     int l, r, largest = x;

//     l = x * 2;
//     r = x * 2 + 1;
//     if (l <= cur && A[l] > A[largest]) largest = l;
//     if (r <= cur && A[r] > A[largest]) largest = r;

//     if (largest != x) {
//         swap(A[x], A[largest]);
//         heap(largest);
//     }
// }

// int main() {
//     int k;
//     string cmd;
    
//     while(1) {
//         cin >> cmd;
//         if (cmd == "insert") {
//             cin >> k;
//             A[cur] = k;
//             maxHeap(cur);
//             cur++;
//         } else if (cmd == "extract") {
//             printf("%d\n", A[1]);
//             A[1] = 0;
//             cur--;
//             swap(A[cur], A[1]);
//             heap(1);
//         } else break;
//     }
//     return 0;
// }