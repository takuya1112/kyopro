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

Node * find(Node *u, int k) {
    while( u!= NIL && k != u->key) {
        if (k < u->key) u = u->left;
        else u = u->right;
    }
    return u;
}

Node * treeMinimum(Node *x) {
    while(x->left != NIL) x = x->left;
    return x;
}

Node * treeSuccessor(Node * x) {
    if (x->right != NIL) return treeMinimum(x->right);
    Node *y = x->parent;
    while( y != NIL && x == y->right) {
        x = y;
        y = y->parent;
    }
    return y;
}

void treeDelete(Node *z) {
    Node *y;
    Node *x;

    if (z->left == NIL || z->right == NIL) y = z;
    else y = treeSuccessor(z);

    if (y->left != NIL) {
        x = y->left;
    } else {
        x = y->right;
    }

    if (x != NIL) {
        x->parent = y->parent;
    }

    if (y->parent == NIL) {
        root = x;
    } else {
        if (y == y->parent->left) {
            y->parent->left = x;
        } else {
            y->parent->right = x;
        }
    }

    if (y != z) {
        z->key = y->key;
    }
    free(y);
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
        } else if (com == "delete") {
            scanf("%d", &x);
            treeDelete(find(root, x));
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

//     while(root != NIL) {
//         p = root;
//         if (new_node->val < root->val) root = root->l;
//         else root = root->r;
//     }

//     new_node->p = p;
//     if (p == NIL) T = new_node;
//     else if (new_node->val < p->val) p->l = new_node;
//     else p->r = new_node;
// }

// Node * find(Node* u, int k) {
//     while(u != NIL && u->val != k) {
//         if (k < u->val) u = u->l;
//         else u = u->r;
//     }
//     return u;
// }

// void del(Node* u) {
//     Node* p = u->p;
//     Node* l  = u->l;
//     Node* r = u->r;

//     if (l == NIL && r == NIL) {
//         u->p = NIL;
//         if (u->val < p->val) p->l = NIL;
//         else p->r = NIL;
//     } else if (l != NIL && r == NIL) {
//         l->p = p;
//         if (u->val < p->val) {
//             p->l = l;
//         } else {
//             p->r = l;
//         }
//         u->p = NIL;
//         u->l = NIL;
//     } else if (l == NIL && r != NIL) {
//         r->p = p;
//         if (u->val < p->val) {
//             p->l = r;
//         } else {
//             p->r = r;
//         }
//         u->p = NIL;
//         u->r = NIL;
//     } else {
//         Node* nxt = r;
//         while(nxt->l != NIL) nxt = nxt->l;
//         u->val = nxt->val;
//         del(nxt);
//     }
// }

// void preorder(Node* u) {
//     if (u == NIL) return;
//     printf(" %d", u->val);
//     preorder(u->l);
//     preorder(u->r);
// }

// void inorder(Node* u) {
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
//             Node* t = find(T, k);
//             if (t != NIL) printf("yes\n");
//             else printf("no\n");
//         } else if (cmd == "delete") {
//             cin >> k;
//             Node* t = find(T, k); 
//             if (t != NIL) del(t);
//         } else if (cmd == "print") {
//             inorder(T);
//             printf("\n");
//             preorder(T);
//             printf("\n");
//         }
//     }
//     return 0;
// }