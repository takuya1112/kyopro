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

struct Node {int p, l, r; };
struct Node T[MAX];
int n;

void preParse(int u) {
    if (u == NIL) return;
    printf(" %d", u);
    preParse(T[u].l);
    preParse(T[u].r);
}

void inParse(int u) {
    if (u == NIL) return;
    inParse(T[u].l);
    printf(" %d", u);
    inParse(T[u].r);
}

void postParse(int u) {
    if (u == NIL) return;
    postParse(T[u].l);
    postParse(T[u].r);
    printf(" %d", u);
}

int main() {
    int v, l, r, root;
    scanf("%d", &n);
    rep(i, 0, n) T[i].p = NIL;

    rep(i, 0, n) {
        scanf("%d %d %d", &v, &l, &r);
        T[v].l = l;
        T[v].r = r;

        if (l != NIL) T[l].p = v;
        if (r != NIL) T[r].p = v;
    }

    rep(i, 0, n) if (T[i].p == NIL) root = i;
    
    printf("Preorder\n");
    preParse(root);
    printf("\n");

    printf("Inorder\n");
    inParse(root);
    printf("\n");

    printf("Postorder\n");
    postParse(root);
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
// #define chmax(x, y) x = max(x, y)
// typedef long long ll; const int inf = INT_MAX / 2;

// struct Node {int parent, left, right; };

// int main() {
//     int N;
//     cin >> N;
//     vector<Node> T(N);
//     rep(i, 0, N) T[i].parent = -1;
//     rep(i, 0, N) {
//         int id, left, right;
//         cin >> id >> left >> right;
//         T[id].left = left;
//         T[id].right = right;

//         T[left].parent = id;
//         T[right].parent = id;
//     }

//     int root = -1;
//     rep(i, 0, N) if (T[i].parent == -1) root = i;

//     auto preorder = [&](auto preorder, int p) -> void {
//         // 根節点、左部分木、右部分木の順
//         cout << ' ' << p;
        
//         if (T[p].left != -1) preorder(preorder, T[p].left);
//         if (T[p].right != -1) preorder(preorder, T[p].right);
//         if (p == root) cout << endl;
//     };

//     int first = root;
//     while (T[first].left != -1) first = T[first].left;

//     auto inorder = [&](auto inorder, int p) -> void {
//         // 左部分木、根節点、右部分木の順
//         if (T[p].left != -1) inorder(inorder, T[p].left);
        
//         cout << ' ' << p;

//         if (T[p].right != -1) inorder(inorder, T[p].right);
//         if (p == root) cout << endl;
//     };

//     auto postorder = [&](auto postorder, int p) -> void {
//         // 左部分木、右部分木、根節点
//         if (T[p].left != -1) postorder(postorder, T[p].left);
//         if (T[p].right != -1) postorder(postorder, T[p].right);

//         cout << ' ' << p;
//         if (p == root) cout << endl;
//     };

//     cout << "Preorder" << endl;
//     preorder(preorder, root);

//     cout << "Inorder" << endl;
//     inorder(inorder, root);

//     cout << "Postorder" << endl;
//     postorder(postorder, root);
//     return 0;
// }