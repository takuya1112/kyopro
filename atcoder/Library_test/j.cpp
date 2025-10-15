#include <bits/stdc++.h>
#include <atcoder/segtree>
using namespace std;
using namespace atcoder;

// セグメント木のための二項演算関数 op と、単位元を返す関数 e
int op(int a, int b) { return max(a, b); }
int e() { return -1; }

// セグメント木上の二分探索のための判定関数 (v は入力から受け取る)
// 区間 [x, j) の最大値 seg_val が v 未満であるような最大の j を求めたい
int v;
bool f(int seg_val) { return seg_val < v; }

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) cin >> A[i];

    // セグメント木の設定
    segtree<int, op, e> seg(A);

    // 各クエリ処理
    while (Q--) {
        int t;
        cin >> t;
        if (t == 1) {
            int x, v;
            cin >> x >> v;
            --x;
            seg.set(x, v);
        } else if (t == 2) {
            int l, r;
            cin >> l >> r;
            --l;
            cout << seg.prod(l, r) << endl;
        } else if (t == 3) {
            int x;
            cin >> x >> v;
            --x;
            cout << seg.max_right<f>(x) + 1 << endl;
        }
    }
}