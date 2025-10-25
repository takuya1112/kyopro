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

Node * find(Node *u, int k) {
    while(u != NIL && k != u->key) {
        if (k < u->key) u = u->left;
        else u = u->right;
    }
    return u;
}

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
        if (com[0] == 'f') {
            scanf("%d", &x);
            Node *t = find(root, x);
            if (t != NIL) printf("yes\n");
            else printf("no\n");
        } else if (com == "insert") {
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

// Node *T, *NIL;

// void insert(int val) {
//     Node* new_node = new Node {val, nullptr, nullptr, nullptr};

//     Node* p = NIL;
//     Node* root = T;

//     while (root != NIL) {
//         p = root;
//         if (new_node->val < root->val) root = root->l;
//         else root = root->r;
//     }

//     new_node->p = p;
//     if (p == NIL) T = new_node;
//     else if (new_node->val < p->val) p->l = new_node;
//     else p->r = new_node;
// }

// bool find(int val) {
//     Node* root = T;
//     while(root != NIL) {
//         if (root->val == val) return true;
//         if (val < root->val) root = root->l;
//         else root = root->r;
//     }
//     return false;
// }

// void preorder(Node *u) {
//     if (u == NIL) return;
//     printf(" %d", u->val);
//     preorder(u->l);
//     preorder(u->r);
// }

// void inorder(Node *u) {
//     if (u == NIL) return;
//     inorder(u->l);
//     printf(" %d", u->val);
//     inorder(u->r);
// }

// int main() {
//     int n, k;
//     string cmd;
//     cin >> n;
//     rep(i, 0, n) {
//         cin >> cmd;
//         if (cmd == "insert") {
//             cin >> k;
//             insert(k);
//         } else if (cmd == "find") {
//             cin >> k;
//             if (find(k)) cout << "yes" << endl;
//             else cout << "no" << endl; 
//         } else if (cmd == "print") {
//             inorder(T);
//             printf("\n");
//             preorder(T);
//             printf("\n");
//         }
//     }
//     return 0;
// }