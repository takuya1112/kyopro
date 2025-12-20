#ifndef ONLINE_JUDGE
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

// --- utility ---
using pii = pair<int, int>; using pll = pair<long long, long long>;
using pil = pair<int, long long>; using pli = pair<long long, int>; 
using dint = array<int, 2>; using dll = array<long long, 2>;
using tint = array<int, 3>; using tll = array<long long, 3>;
using fint = array<int, 4>; using fll = array<long long, 4>;
using qint = array<int, 5>; using qll = array<long long, 5>;
using vi = vector<int>; using vvi = vector<vi>; using vvvi = vector<vvi>; using vvvvi = vector<vvvi>;
using vll = vector<long long>; using vvll = vector<vll>; using vvvll = vector<vvll>; using vvvvll = vector<vvvll>;
using vd = vector<double>; using vvd = vector<vd>; using vvvd = vector<vvd>;
using vs = vector<string>;
using ll = long long; using ull = unsigned long long;
using uint = unsigned int; using ld = long double;
using i128 = __int128_t; using u128 = __uint128_t;
template <class T> using pq = priority_queue<T, vector<T>>;
template <class T> using pq_m = priority_queue<T, vector<T>, greater<T>>;
template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return true;}return false;}
template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return true;}return false;}

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
    int N, M;
    cin >> N >> M;
    vi C(N), D(N);
    rep(i, N) cin >> C[i] >> D[i];
    vvi E(N), E1(N);
    rep(i, M) {
        int u, v;
        cin >> u >> v;
        u--; v--;
        E1[u].pb(v);
        E1[v].pb(u);
    }

    rep(i, N) {
        vi dist(N, INF);
        dist[i] = 0;
        queue<int> que;
        que.push(i);
        while (!que.empty()) {
            int v = que.front();
            que.pop();
            for (int u : E1[v]) {
                if (dist[u] != INF) continue;
                dist[u] = dist[v] + 1;
                if (dist[u] <= D[i]) {
                    E[i].pb(u);
                    que.push(u);
                }
            }
        }
    }

    vi dist(N, INF);
    dist[0] = 0;
    pq_m<pii> pq;
    pq.push(mp(0, 0));
    while (!pq.empty()) {
        auto [d, v] = pq.top();
        pq.pop();
        for (auto u : E[v]) {
            if (chmin(dist[u], d + C[v])) {
                pq.push(mp(dist[u], u));
            }
        }
    }
    cout << dist[N - 1] << endl;
    return 0;
}

// mycode TLE
// int N, K;
// pll taxi[5010];
// vector<vector<int>> graph(5010);

// template<class T>
// inline bool chmin(T &a, T b) {
//     if (a > b) {
//         a = b;
//         return true;
//     }
//     return false;
// }

// std::vector<long long> dijkstra() {
//     std::vector<long long> dist(N, LINF);
//     dist[0] = 0;

//     std::priority_queue<
//         std::pair<long long, int>, 
//         std::vector<std::pair<long long, int>>,
//         std::greater<std::pair<long long, int>>
//     > pq;
//     pq.push({0, 0});
    
//     auto solve = [&](int k, ll d) -> void {
//         auto [cost, count] = taxi[k];
//         cost += d;

//         auto dfs = [&](auto self, int u, int p, int cnt) -> void {
//             if (cnt == count) return;
//             for (int v : graph[u]) {
//                 if (v == p) continue;
//                 self(self, v, u, cnt + 1);
//                 if (dist[v] > cost) {
//                     dist[v] = cost;
//                     pq.push({cost, v});
//                 }
//             }
//         };
//         dfs(dfs, k, -1, 0);
//     };

//     while (!pq.empty()) {
//         auto [d, u] = pq.top();
//         pq.pop();
//         solve(u, d);
//     }
//     return dist;
// }

// int main() {
//     cin >> N >> K;
//     ll c, r;
//     rep(i, N) {
//         cin >> c >> r;
//         taxi[i] = mp(c, r);
//     }

//     int a, b; 
//     rep(i, K) {
//         cin >> a >> b;
//         a--; b--;
//         graph[a].pb(b);
//         graph[b].pb(a);
//     }
//     vector<ll> dist = dijkstra();
//     cout << dist[N-1] << endl;
//     return 0;
// }