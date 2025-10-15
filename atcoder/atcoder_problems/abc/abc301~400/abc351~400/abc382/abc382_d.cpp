#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> ans;
    auto f = [&](auto f, vector<int> a) {
        if (a.size() == n) {
            ans.push_back(a);
            return;
        }

        int l = 1;
        if (a.size() > 0) l = a.back() + 10;
        a.push_back(l);
        while (a.back() + 10 * (n - a.size()) <= m) {
            f(f, a);
            a.back()++;
        }
    };
     
    f(f, vector<int>());

    cout << ans.size() << endl;
    for (auto a : ans) {
        rep(i, 0, n) cout << a[i] << ' ';
        cout << '\n';
    }
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i = a; i >= b; i--)
// #define all(x) (x).begin(),(x).end()
// typedef long long ll; const int inf = INT_MAX / 2;

// int N, M;
// vector<vector<int>> ans;
// vector<vector<vector<int>>> memo;

// void make(vector<int> v, int cnt) {
//     if (cnt == N) ans.push_back(v);
//     int x = v[v.size() - 1];
//     rep(i, 0, memo[cnt][x].size()) {
//         v.push_back(memo[cnt][x][i]);
//         make(v, cnt + 1);
//         v.pop_back();
//     }
// }

// void f(int x, int cnt) {
//     if (cnt == N) {
//         return;
//     }
//     if (memo[cnt][x].size()) {
//         return;
//     }

//     rep(i, 10, M) {
//         int s = x + i;
//         if (s > M - 10 * (N - cnt -1)) continue;
//         memo[cnt][x].push_back(s);
//         f(s, cnt + 1);
//     }
// }

// int main() {
//     cin >> N >> M;
//     memo = vector<vector<vector<int>>> (M + 1, vector<vector<int>>(M + 1));

//     rep(i, 1, M - 10 * (N - 1) + 1) {
//         memo[0][i].push_back(i);
//         f(i, 1);
//     }
//     rep(i, 1, M - 10 * (N - 1) + 1) {
//         make({i}, 1);
//     }
    
    
//     cout << ans.size() << endl;
//     rep(i, 0, ans.size()) {
//         rep(j, 0, ans[i].size()) {
//             if (j) cout << " ";
//             cout << ans[i][j];
//         }
//         cout << '\n';
//     }
//     return 0;
// }