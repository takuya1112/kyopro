#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
typedef long long ll; const int inf = INT_MAX / 2;

#define MAX 10000
#define NIL -1

struct Node {int parent, left, right; };

Node T[MAX];
int n, D[MAX], H[MAX];

void setDepth(int u, int d) {
    if ( u == NIL) return;
    D[u] = d;
    setDepth(T[u].left, d + 1);
    setDepth(T[u].right, d + 1);
}

int setHeight(int u) {
    int h1 = 0, h2 = 0;
    if (T[u].left != NIL) 
        h1 = setHeight(T[u].left) + 1;
    if (T[u].right != NIL) 
        h2 = setHeight(T[u].right) + 1;
    return H[u] = (h1 > h2 ? h1 : h2);
}

int getSibling(int u) {
    if (T[u].parent == NIL) return NIL;
    if (T[T[u].parent].left != u && T[T[u].parent].left != NIL) 
        return T[T[u].parent].left;
    if (T[T[u].parent].right != u && T[T[u].parent].right != NIL) 
        return T[T[u].parent].right;
    return NIL;
}


void print(int u) {
    printf("node %d: ", u);
    printf("parent = %d, ", T[u].parent);
    printf("sibling = %d, ", getSibling(u));
    int deg = 0;
    if (T[u].left != NIL) deg++;
    if (T[u].right != NIL) deg++;
    printf("degree = %d, ", deg);
    printf("depth = %d, ", D[u]);
    printf("height = %d, ", H[u]);

    if (T[u].parent == NIL) cout << "root" << endl;
    else if (T[u].left == NIL && T[u].right == NIL) cout << "leaf" << endl;
    else cout << "internal node" << endl;
}

int main() {
    int v, l, r, root = 0;
    cin >> n;

    rep(i, 0, n) T[i].parent = NIL;

    rep(i, 0, n) {
        cin >> v >> l >> r;
        T[v].left = l;
        T[v].right = r;

        if (l != NIL) T[l].parent = v;
        if (r != NIL) T[r].parent = v;
    }

    rep(i, 0, n) if (T[i].parent == NIL) root = i;

    setDepth(root, 0);
    setHeight(root);

    rep(i, 0, n) print(i);

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


// const int NIL = -1;

// struct Node {int parent, left, right, sibling;};

// int main() {
//     int N;
//     cin >> N;
//     vector<Node> G(N);
//     rep(i, 0, N) G[i].parent = G[i].left = G[i].right = G[i].sibling =  NIL;

//     rep(i, 0, N) {
//         int id, left, right;
//         cin >> id >> left >> right;

//         G[id].left = left;
//         G[id].right = right;
        
//         if (left != -1) {
//             G[left].parent = id;
//             G[left].sibling = right;
//         } 
//         if (right != -1) {
//             G[right].parent = id;  
//             G[right].sibling = left;
//         } 
//     }
    
//     auto countDegree = [&](int id) -> int {
//         int cnt = 0;
//         if (G[id].left != -1) cnt++;
//         if (G[id].right != -1) cnt++;
//         return cnt;
//     };

//     auto check = [&](int id) -> string {
//         if (G[id].parent == -1) return "root";
//         else if (G[id].left == -1 && G[id].right == -1) return "leaf";
//         else return "internal node";
//     };

//     vector<int> D(N), H(N);

//     auto f = [&](auto f, int v, int p) -> void {
//         D[v] = p;
//         if (G[v].left != -1) f(f, G[v].left, p + 1);
        
//         if (G[v].right != -1) f(f, G[v].right, p + 1); 
//         if (G[v].parent != -1) chmax(H[G[v].parent], H[v] + 1);
//     };

//     auto print = [&](int id) {
//         cout << "node " << id << ": ";
//         cout << "parent = " << G[id].parent << ", ";
//         cout << "sibling = " << G[id].sibling << ", ";
//         cout << "degree = " << countDegree(id) << ", ";
//         cout << "depth = " << D[id] << ", ";
//         cout << "height = " << H[id] << ", ";
//         cout << check(id) << endl;
//     };

//     int r = -1;
//     rep(i, 0, N) {
//         if (G[i].parent == -1) r = i;
//     }

//     f(f, r, 0);
//     rep(i, 0, N) {
//         print(i);
//     }
//     return 0;
// }