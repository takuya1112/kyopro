#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define chmin(x, y) x = min(x, y)
typedef long long ll; const int inf = INT_MAX / 2;

const int MAX = 1000;
const int VMAX = 10000;

int n, A[MAX], s;
int B[MAX], T[VMAX + 1];

int solve() {
    int ans = 0;

    bool V[MAX];
    rep(i, 0, n) {
        B[i] = A[i];
        V[i] = false;
    }

    sort(B, B + n);
    rep(i, 0, n) T[B[i]] = i;
    rep(i, 0, n) {
        if (V[i]) continue;
        int cur = i;
        int S = 0;
        int m = VMAX;
        int an = 0;
        while (1) {
            V[cur] = true;
            an++;
            int v = A[cur];
            m = min(m, v);
            S += v;
            cur = T[v];
            if (V[cur]) break;
        }
        ans += min(S + (an - 2) * m, m + S + (an + 1) * s);
    }
    return ans;
}   

int main() {
    cin >> n;
    s = VMAX;
    rep(i, 0, n) {
        cin >> A[i];
        s = min(s, A[i]);
    }
    int ans = solve();
    cout << ans << endl;
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

// #define pint pair<int, int>

// int main() {
//     int N;
//     cin >> N;
//     vector<int> w1(N), w2;
//     rep(i, 0, N) cin >> w1[i];

//     w2 = w1;
//     sort(all(w2));

//     map<int, int> mp;
//     rep(i, 0, N) mp[w2[i]] = i; 

//     vector<vector<int>> group;
//     vector<bool> visited(N);
//     vector<int> g;
//     auto f = [&] (auto f, int idx) {
//         if (visited[idx]) {
//             sort(all(g));
//             group.push_back(g);
//             return;
//         }

//         visited[idx] = true;
//         g.push_back(w1[idx]);
//         f(f, mp[w1[idx]]);
//     };

//     rep(i, 0, N) {
//         if (visited[i]) continue;
//         g.clear();
//         f(f, i);
//     }

//     int mini = w2[0];
//     ll ans = 0;
//     rep(i, 0, group.size()) {
//         ll cost1 = 0, cost2 = 0;
//         vector<int> v = group[i];

//         rep(j, 1, v.size()) {
//             cost1 += v[0] + v[j];
//         }

//         cost2 += (mini + v[0]) * 2;
//         rep(j, 1, v.size()) {
//             cost2 += mini + v[j];
//         }

//         ans += min(cost1, cost2);
//     }

    
//     cout << ans << endl;
//     return 0;
// }