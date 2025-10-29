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
    Node *next, *prev;
};

Node *nil;

Node* listSearch(int key) {
    Node *cur = nil->next;
    while (cur != nil && cur->key != key) {
        cur = cur->next;
    }
    return cur;
}

void init() {
    nil = (Node *)malloc(sizeof(Node));
    nil->next = nil;
    nil->prev = nil;
}

void printList() {
    Node *cur = nil->next;
    int isf = 0;
    while (1) {
        if (cur == nil) break;
        if (isf++ > 0) printf(" ");
        printf("%d", cur->key);
        cur = cur->next;
    }
    printf("\n");
}

void deleteNode(Node *t) {
    if (t == nil) return;
    t->prev->next = t->next;
    t->next->prev = t->prev;
    free(t);
}

void deleteFirst() {
    deleteNode(nil->next);
}

void deleteLast() {
    deleteNode(nil->prev);
}

void deleteKey(int key) {
    deleteNode(listSearch(key));
}

void insert(int key) {
    Node *x = (Node *)malloc(sizeof(Node));
    x->key = key;

    x->next = nil->next;
    nil->next->prev = x;
    nil->next = x;
    x->prev = nil;
}


int main() {
    int key, n;
    int size = 0;
    char com[20];
    int np = 0, nd = 0;
    scanf("%d", &n);
    init();
    rep(i, 0, n) {
        scanf("%s%d", com, &key);
        if (com[0] == 'i') {insert(key); np++; size++;}
        else if (com[0] == 'd') {
            if (strlen(com) > 6) {
                if (com[6] == 'F') deleteFirst();
                else if (com[6] == 'L') deleteLast();
                
            } else {deleteKey(key); nd++;}
            size--;
        }
    }
    printList();
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

// struct Nord {
//     int key;
//     Nord *front, *back;
// };

// Nord *FRONT = new Nord {inf, nullptr, nullptr};
// Nord *BACK = new Nord {inf, nullptr, nullptr};

// void insert(int x) {
//     Nord *new_item = new Nord {x, nullptr, nullptr};
//     Nord *first_item = FRONT->back;

//     new_item->front = FRONT;
//     FRONT->back = new_item;

//     new_item->back = first_item;
//     first_item->front = new_item;
// }

// void del(int x) {
//     Nord *now = FRONT->back;

//     while (now != BACK && now->key != x)  {
//         now = now->back;
//     }

//     Nord *front = now->front;

//     if (now == BACK) return;
//     now->back->front = front;
//     front->back = now->back;
//     delete(now);
// }

// void delfirst() {
//     Nord *front = FRONT;
//     Nord *now = FRONT->back;
//     Nord *back = now->back;

    
//     back->front = now->front;
//     front->back = now->back;
//     delete(now);
// }

// void dellast() {
//     Nord *back = BACK;
//     Nord *now = back->front;
//     Nord *front = now->front;

//     back->front = now->front;
//     front->back = now->back;
//     delete(now);
// }

// void print() {
//     Nord *now = FRONT->back;
//     if (FRONT->back == BACK) return;
//     while(now != BACK) {
//         if (now->front != FRONT) cout << ' '; 
//         cout << now->key;  
//         now = now->back;
//     }
//     cout << endl;
// }

// int main() {
//     int n, x;
//     string cmd;
//     cin >> n;
//     FRONT->back = BACK;
//     BACK->front = FRONT;
    
//     rep(i, 0, n) {
//         cin >> cmd;
//         if (cmd == "insert") {
//             cin >> x;
//             insert(x);
//         } else if (cmd == "delete") {
//             cin >> x;
//             del(x);
//         } else if (cmd == "deleteFirst") {
//             delfirst();
//         } else if (cmd == "deleteLast") {
//             dellast();
//         }   
//     }
//     print();
//     return 0;
// }