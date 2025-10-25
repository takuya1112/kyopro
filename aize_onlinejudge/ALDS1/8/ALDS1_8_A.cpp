#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
typedef long long ll; const int inf = INT_MAX / 2;

struct Node {
    int key;
    Node *right, *left, *parent;
};

Node *root, *NIL;

void insert(int k) {
    Node *y = NIL;
    Node *x = root;
    Node *z;

    z = (Node *)malloc(sizeof(Node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;

    while( x != NIL) {
        y = x;
        if (z->key < x->key) x = x->left;
        else x = x->right;
    }

    z->parent = y;
    if (y == NIL) root = z;
    else if (z->key < y->key) y->left = z;
    else y->right = z;
}

void inorder(Node* u) {
    if (u == NIL) return;
    inorder(u->left);
    printf(" %d", u->key);
    inorder(u->right);
}

void preorder(Node* u) {
    if (u == NIL) return;
    printf(" %d", u->key);
    preorder(u->left);
    preorder(u->right);
}

int main() {
    int n, x;
    string com;

    scanf("%d", &n);

    rep(i, 0, n) {
        cin >> com;
        if (com == "insert") {
            scanf("%d", &x);
            insert(x);
        } else if (com == "print") {
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
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

// struct Node { 
//     int val;
//     Node *p, *l, *r; 
// };

// Node* T = nullptr;

// void insert(int val) {
//     Node* new_node = new Node {val, nullptr, nullptr, nullptr};
//     Node* p = nullptr;
//     Node* root = T;

//     while (root != nullptr) {
//         p = root;
//         if (new_node->val < root->val) root = root->l;
//         else root = root->r;
//     }

//     new_node->p = p;
//     if (p == nullptr) T = new_node;
//     else if (new_node->val < p->val) p->l = new_node;
//     else p->r = new_node;
// }

// void preorder(Node* u) {
//     if (u == nullptr) return;
//     cout << " " << u->val; 
//     preorder(u->l);
//     preorder(u->r);
// }

// void inorder(Node* u) {
//     if (u == nullptr) return;
//     inorder(u->l);
//     cout << " " << u->val; 
//     inorder(u->r);
// }



// int main() {
//     int n;
//     cin >> n;

//     rep(i, 0, n) {
//         string cmd;
//         cin >> cmd;
//         if (cmd == "insert") {
//             int val;
//             cin >> val;
//             insert(val);
//         } else {
//             inorder(T);
//             cout << endl;
//             preorder(T);
//             cout << endl;
//         }   
//     }
//     return 0;
// }