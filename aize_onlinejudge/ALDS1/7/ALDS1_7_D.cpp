#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
typedef long long ll; const int inf = INT_MAX / 2;

int n, pos;
vector<int> pre, in, post;

void rec(int l, int r) {
    if (l >= r) return;
    int root = pre[pos++];
    int m = distance(in.begin(), find(in.begin(), in.end(), root));
    rec(l, m);
    rec(m + 1, r);
    post.push_back(root);
}

void solve() {
    pos = 0;
    rec(0, pre.size());
    rep(i, 0, n) {
        if (i) cout << " ";
        cout << post[i];
    }
    cout << endl;
}

int main() {
    int k;
    cin >> n;

    rep(i, 0, n) {
        cin >> k;
        pre.push_back(k);
    }
    rep(i, 0, n) {
        cin >> k;
        in.push_back(k);
    }

    solve();
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
// const int MAX = 50;
// const int NIL = -1;

// struct Node {
//     int p;
//     int r;
//     int l;
// };

// int N;
// vector<int> preorder(MAX), inorder(MAX);


// Node T[MAX];
// vector<bool> used(MAX);

// void f(vector<int> pre, vector<int> in) {
//     int root = pre[0];

//     bool l = true;
//     vector<int> inorderL, inorderR;
//     rep(i, 0, in.size()) {
//         if (in[i] == NIL) break;
//         if (in[i] == root) {
//             l = false;
//             continue;
//         }
//         if (l) inorderL.push_back(in[i]);
//         else inorderR.push_back(in[i]);
//     }

//     l = true;
//     vector<int> preorderL, preorderR;
//     rep(i, 1, pre.size()) {
//         if (pre[i] == NIL) break;
//         if (find(all(inorderL), pre[i]) != inorderL.end()) preorderL.push_back(pre[i]);
//         else preorderR.push_back(pre[i]);
//     }

//     if (preorderL.size()) {
//         T[root].l = preorderL[0];
//         T[preorderL[0]].p = root;
//         f(preorderL, inorderL);  
//     } 
    
//     if (preorderR.size()) {
//         T[root].r = preorderR[0];
//         T[preorderR[0]].p = root;
//         f(preorderR, inorderR);  
//     }
// };


// int main() {
//     cin >> N;
//     rep(i, 0, N) cin >> preorder[i];
//     rep(i, 0, N) cin >> inorder[i];
//     preorder[N] = NIL;
//     inorder[N] = NIL;

//     rep(i, 0, N) {
//         preorder[i]--;
//         inorder[i]--;
//     }

//     rep(i, 0, N) T[i].p = T[i].r = T[i].l = NIL;

   
//     int root = preorder[0];
//     f(preorder, inorder);

//     vector<int> ans;
//     auto g = [&](auto g, int u) -> void {
//         if (u == NIL) return;
//         g(g, T[u].l); 
//         g(g, T[u].r);
//         ans.push_back(u + 1);
//     };

//     g(g, root);
//     rep(i, 0, ans.size()) {
//         if (i) cout << ' ';
//         cout << ans[i];
//     } cout << endl;
//     return 0;
// }