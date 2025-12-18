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
using P = pair<ll, ll>;
struct edge { ll to, cost, val; };

// ========================================
//                  solve
// ========================================

ll N, M, K, a, b, c, d, ans;
ll t[200010], D[200010];
vector<edge> g[200010];

ll dijkstra() {
    rep2(i, 1, N) D[i] = LINF;

    std::priority_queue<P, std::vector<P>, std::greater<P>> pq;
    pq.push({0, 0});
    ll v, co;
    P p;

    while (!pq.empty()) {
        p = pq.top(); pq.pop();
        v = p.second;
        for (auto e : g[v]) {
            co = e.cost;
            if (p.first % e.val) {
                co += (p.first / e.val + 1) * e.val;
            } else {
                co += p.first;
            }

            if (D[e.to] > co && K >= co) {
                D[e.to] = co;
                pq.push({ D[e.to], e.to });
            }
        }
    }
    return D[N - 1];
}

int main() {
    scanf("%lld %lld %lld", &N, &M, &K);
    rep2(i, 1, N - 1) scanf("%lld", &t[i]);
    rep(i, M) {
        scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
        a--; b--;
        g[a].pb({ b, c + t[b], d });
        g[b].pb({ a, c + t[a], d });
    }
    ans = dijkstra();
    if (ans <= K) {
        cout << ans << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}


// mycode AC
// int main() {
//     int N, M; ll K;
//     cin >> N >> M >> K;
//     vector<ll> time(N);
//     rep2(i, 1, N-1) cin >> time[i];

//     vector<vector<tuple<ll, ll, ll>>> graph(N);
//     rep(i, M) {
//         ll a, b, c, d;
//         cin >> a >> b >> c >> d;
//         a--; b--;
//         graph[a].pb(mt(b, c, d));
//         graph[b].pb(mt(a, c, d));
//     }

//     auto dijkstra = [&](int s) -> vector<ll> {
//         std::vector<long long> dist(N, LINF);
//         dist[s] = 0;

//         std::priority_queue<
//             std::pair<long long, int>, 
//             std::vector<std::pair<long long, int>>,
//             std::greater<std::pair<long long, int>>
//         > pq;
//         pq.push({0, s});

//         while (!pq.empty()) {
//             auto [d, u] = pq.top();
//             pq.pop();
//             if (dist[u] < d) continue;
//             for (auto [v, c, t] : graph[u]) {
//                 long long nc = d + c + time[v];
//                 if (d % t != 0) nc += t - (d % t);
//                 if (dist[v] > nc) {
//                     dist[v] = nc;
//                     pq.push({nc, v});
//                 }
//             }
//         }
//         return dist;
//     };

//     vector<ll> dist = dijkstra(0);
//     if (dist[N-1] == LINF || dist[N-1] > K) cout << -1 << endl;
//     else cout << dist[N-1] << endl;
//     return 0;
// }