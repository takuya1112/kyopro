#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> G(N);
    rep(i, 0, M) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    bool bipartite = true;
    vector<int> color(N, -1);
    auto f = [&](auto f, int v, int cur = 0) -> bool {    
        color[v] = cur;
        for (int u : G[v]) {
            if (color[u] != -1) {
                if (color[u] == cur) return false; 
                continue;
            }
            if (!f(f, u, 1 - cur)) return false;
        }
        return true;
    };

    rep(i, 0, N) {
        if (color[i] != -1) continue;
        if (!f(f, i)) bipartite = false;
    }


    if (bipartite) {
        int w = 0, b = 0;
        rep(i, 0, N) {
            if (color[i] == 0) w++;
            else b++;
        }
        cout << (ll)w * b - M << '\n';
    }
    else cout << (ll)N * (N - 1) / 2 - M << '\n';
    return 0;
}




// mycode worng ans
// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i = a; i >= b; i--)
// #define all(x) (x).begin(),(x).end()
// #define rall(x) (x).rbegin(),(x).rend()
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     int N, M;
//     cin >> N >> M;
//     vector<set<int>> G(N);

//     rep(i, 0, M) {
//         int a, b;
//         cin >> a >> b;
//         a--; b--;
//         G[a].insert(b);
//         G[b].insert(a);
//     }

//     ll ans = 0;
//     auto f = [&](auto f, int first, int v, vector<int> visited) -> void {
//         if (visited.size() == 4) {
//             if (G[first].find(v) != G[first].end()) return;
//             int a = first, b = v;
//             G[a].insert(b);
//             G[b].insert(a);
//             ans ++;
//             return;
//         } 

//         for (int u : G[v]) {
//             bool ok = true;
//             rep(i, 0, visited.size()) if (visited[i] == u) ok = false;
//             if (!ok) continue;
//             visited.push_back(u);
//             f(f, first, u, visited);
//             visited.pop_back();
//         }   
//     };

//     rep(i, 0, N) {
//         f(f, i, i, {i});
//     }
//     cout << ans << endl;
//     return 0;
// }