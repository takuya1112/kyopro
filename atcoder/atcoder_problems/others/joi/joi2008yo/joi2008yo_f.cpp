#ifndef ONLINE_JUDGE
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

// --- utility ---
using pint = pair<int, int>;
using pll = pair<long long, long long>;
using dint = array<int, 2>;
using dll = array<long long, 2>;
using tint = array<int, 3>;
using tll = array<long long, 3>;
using fint = array<int, 4>;
using fll = array<long long, 4>;
using qint = array<int, 5>;
using qll = array<long long, 5>;
using vint = vector<int>;
using vll = vector<long long>;
using vs = vector<string>;
using ll = long long;
using u32 = unsigned int;
using u64 = unsigned long long;
using i128 = __int128_t;
using u128 = __uint128_t;
template <class T> using pq = priority_queue<T, vector<T>>;
template <class T> using pq_g = priority_queue<T, vector<T>, greater<T>>;

// --- macros ---
#define rep(i, a) for (long long i = 0; i < (long long)(a); i++)
#define rep2(i, a, b) for (long long i = a; i < (long long)(b); i++)
#define rrep(i, a) for (long long i = (a)-1; i >= (long long)(0); --i)
#define rrep2(i, a, b) for (long long i = (b)-1; i >= (long long)(a); --i)
#define eb emplace_back
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define next_p(x) next_permutation(x.begin(), x.end())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

#ifndef ONLINE_JUDGE
// --- debug macros ---
#define debug(x) cout << #x << " = " << (x) << " (L" << __LINE__ << ")" << endl

// --- debug stream ---
template<class T1, class T2> ostream& operator << (ostream &s, pair<T1,T2> P)
{ return s << '<' << P.first << ", " << P.second << '>'; }
template<class T> ostream& operator << (ostream &s, array<T, 2> P)
{ return s << '<' << P[0] << ", " << P[1] << '>'; }
template<class T> ostream& operator << (ostream &s, array<T, 3> P)
{ return s << '<' << P[0] << ", " << P[1] << ", " << P[2] << '>'; }
template<class T> ostream& operator << (ostream &s, array<T, 4> P)
{ return s << '<' << P[0] << ", " << P[1] << ", " << P[2] << ", " << P[3] << '>'; }
template<class T> ostream& operator << (ostream &s, vector<T> P)
{ for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
template<class T> ostream& operator << (ostream &s, deque<T> P)
{ for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
template<class T> ostream& operator << (ostream &s, vector<vector<T> > P)
{ for (int i = 0; i < P.size(); ++i) { s << endl << P[i]; } return s << endl; }
template<class T> ostream& operator << (ostream &s, set<T> P)
{ for (auto it : P) { s << "<" << it << "> "; } return s; }
template<class T> ostream& operator << (ostream &s, multiset<T> P)
{ for (auto it : P) { s << "<" << it << "> "; } return s; }
template<class T> ostream& operator << (ostream &s, unordered_set<T> P)
{ for (auto it : P) { s << "<" << it << "> "; } return s; }
template<class T1, class T2> ostream& operator << (ostream &s, map<T1,T2> P)
{ for (auto it : P) { s << "<" << it.first << "->" << it.second << "> "; } return s; }
template<class T1, class T2> ostream& operator << (ostream &s, unordered_map<T1,T2> P)
{ for (auto it : P) { s << "<" << it.first << "->" << it.second << "> "; } return s; }
#endif // ONLINE_JUDGE

// --- modular ---
// using mint = modint998244353;
// using mint = modint1000000007;

// --- constants ---
const int INF = 1e9;
const ll LINF = 4e18;

// ========================================
//                  solve
// ========================================

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<vector<ll>> G(N, vector<ll>(N, INF));

    auto dijkstra = [&](int s) -> vector<ll> {
        vector<ll> dp(N, INF);
        vector<bool> seen(N, false);

        dp[s] = 0;
        for (int iter = 0; iter < N; iter) {
            ll min_dist = INF;
            int min_v = -1;
            for (int v = 0; v < N; v++) {
                if (seen[v]) continue;
                if (dp[v] < min_dist) {
                    min_dist = dp[v];
                    min_v = v;
                }
            }
            if (min_v == -1) break;

            seen[min_v] = true;
            for (int v = 0; v < N; v++) {
                dp[v] = min(dp[v], dp[min_v] + G[min_v][v]);
            }
        }
        return dp;
    };

    rep(qi, Q) {
        int type, a, b;
        ll w = 0;
        cin >> type >> a >> b;
        a--; b--;
        if (type == 1) {
            cin >> w;
            G[a][b] = min(G[a][b], w);
            G[b][a] = min(G[b][a], w);
        } else {
            const auto &dp = dijkstra(a);
            cout << (dp[b] < INF ? dp[b] : -1) << endl;
        }
    }
    return 0;
}


// template <class T>
// std::vector<long long> dijkstra(int s, const std::vector<std::vector<std::pair<int, T>>>& graph) {
//     int N = graph.size();
//     std::vector<long long> dist(N, LINF);
//     dist[s] = 0;

//     std::priority_queue<
//         std::pair<long long, int>, 
//         std::vector<std::pair<long long, int>>,
//         std::greater<std::pair<long long, int>>
//     > pq;
//     pq.push({0, s});

//     while (!pq.empty()) {
//         auto [d, u] = pq.top();
//         pq.pop();
//         if (dist[u] < d) continue;
//         for (auto [v, c] : graph[u]) {
//             int nc = d + c;
//             if (dist[v] > nc) {
//                 dist[v] = nc;
//                 pq.push({nc, v});
//             }
//         }
//     }
//     return dist;
// }

// int main() {
//     int N, K, cmd, a, b; ll w;
//     cin >> N >> K;

//     vector<vector<pair<int, ll>>> graph(N);
//     vector<ll> dist;
//     rep(i, K) {
//         cin >> cmd >> a >> b;
//         a--; b--;
//         if (cmd == 0) {
//             dist = dijkstra(a, graph);
//             if (dist[b] == LINF) cout << -1 << endl;
//             else cout << dist[b] << endl;
//         } else {
//             cin >> w;
//             graph[a].pb(mp(b, w));
//             graph[b].pb(mp(a, w));
//         }
//     }
//     return 0;
// }