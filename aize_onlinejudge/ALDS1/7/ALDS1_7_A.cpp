#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define chmin(x, y) x = min(x, y)
typedef long long ll; const int inf = INT_MAX / 2;

#define MAX 100005
#define NIL -1

struct Node { int p, l, r; };

Node T[MAX];
int n, D[MAX];

void print(int u) {
    int i, c;
    cout << "node " << u << ": ";
    cout << "parent = " << T[u].p << ", ";
    cout << "depth = " << D[u] << ", ";

    if (T[u].p == NIL) cout << "root, ";
    else if (T[u].l == NIL) cout << "leaf, ";
    else cout << "internal node, ";

    cout << "[";

    for (i = 0, c = T[u].l; c != NIL; i++, c = T[c].r) {
        if (i) cout << ", ";
        cout << c;
    }

    cout << "]" << endl;
}

void rec(int u, int p) {
    D[u] = p;
    if (T[u].r != NIL) rec(T[u].r, p);
    if (T[u].l != NIL) rec(T[u].l, p + 1);
}

int main() {
    int i, j, d, v, c, l, r;
    cin >> n;
    rep(i, 0, n) T[i].p = T[i].l = T[i].r = NIL;

    rep(i, 0, n) {
        cin >> v >> d;
        rep(j, 0, d) {
            cin >> c;
            if (j == 0) T[v].l = c;
            else T[l].r = c;
            l = c;
            T[c].p = v;
        }
    }

    rep(i, 0, n) {
        if (T[i].p == NIL) r = i;
    }

    rec(r, 0);
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
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     int N;
//     cin >> N;
//     vector<int> P(N, -1);
//     vector<vector<int>> G(N);
//     rep(i, 0, N) {
//         int id, k;
//         cin >> id >> k;
//         rep(j, 0, k) {
//             int c;
//             cin >> c;
//             G[id].push_back(c);
//             P[c] = id;
//         }
//     }

//     auto f = [&](auto f, int c) -> int {
//         if (P[c] == -1) return 0;
//         return  f(f, P[c]) + 1;
//     };

//     auto g = [&](int c) -> string {
//         if (P[c] == -1) return "root, ";
//         else if (G[c].size() == 0) return "leaf, ";
//         else return "internal node, ";
//     };

//     rep(c, 0, N) {
//         cout << "node " << c << ": ";
//         cout << "parent = " << P[c] << ", ";
//         cout << "depth = " << f(f, c) << ", ";
//         cout << g(c);
//         cout << '[';
//         rep(i, 0, G[c].size()) {
//             if (i) cout << ", ";
//             cout << G[c][i];
//         }
//         cout << ']';
//         cout << endl;
//     }
//     return 0;
// }