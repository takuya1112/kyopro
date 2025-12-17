#ifndef ONLINE_JUDGE
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
using namespace std;

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

template <class T>
std::vector<long long> dijkstra(int s, const std::vector<std::vector<std::pair<int, T>>>& graph) {
    int N = graph.size();
    std::vector<long long> dist(N, LINF);
    dist[s] = 0;

    std::priority_queue<
        std::pair<long long, int>, 
        std::vector<std::pair<long long, int>>,
        std::greater<std::pair<long long, int>>
    > pq;
    pq.push({0, s});

    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();
        if (dist[u] < d) continue;
        for (auto [v, c] : graph[u]) {
            long long nc = d + c;
            if (dist[v] > nc) {
                dist[v] = nc;
                pq.push({nc, v});
            }
        }
    }
    return dist;
}

template <class T, T (*op)(T, T), T (*e)()>
struct segtree {
    int n;
    std::vector<T> data;

    segtree(int n_) { init(n_); }
    segtree(const std::vector<T>& v) { init(v.size()); build(v); }

    void init(int n_) {
        n = 1;
        while (n < n_) n <<= 1;
        data.assign(2 * n - 1, e());
    }

    void build (const std::vector<T>& v) {
        for (int i = 0; i < v.size(); i++) data[i + n - 1] = v[i];
        for (int i = n - 2; i >= 0; --i) data[i] = op(data[i * 2 + 1], data[i * 2 + 2]);
    }

    void set(int k, T a) {
        k += n - 1;
        data[k] = a;
        while (k > 0) {
            k = (k - 1) / 2;
            data[k] = op(data[k * 2 + 1], data[k * 2 + 2]);
        }
    }

    T query(int a, int b, int k = 0, int l = 0, int r = -1) {
        if (r == -1) r = n;
        if (r <= a || b <= l) return e();
        if (a <= l && r <= b) return data[k];
        T vl = query(a, b, k * 2 + 1, l, (l + r) / 2);
        T vr = query(a, b, k * 2 + 2, (l + r) / 2, r);
        return op(vl, vr);
    }
};


ll op_min(ll a, ll b) { return std::min(a, b); }
ll e_min() { return LINF; }

using SegRMQ = segtree<ll, op_min, e_min>;


int main() {
    int N, M, S, T, u, v; ll a, b;
    cin >> N >> M >> S >> T;
    S--; T--;

    vector<vector<pair<int, ll>>> graph_y(N), graph_s(N);
    rep(i, M) {
        cin >> u >> v >> a >> b;
        u--; v--;
        graph_y[u].pb(mp(v, a));
        graph_y[v].pb(mp(u, a));
        graph_s[u].pb(mp(v, b));
        graph_s[v].pb(mp(u, b));
    }

    vector<ll> dist(N);
    vector<ll> dist1 = dijkstra(S, graph_y);
    vector<ll> dist2 = dijkstra(T, graph_s);
    rep(i, N) dist[i] = dist1[i] + dist2[i];

    SegRMQ seg(dist);
    rep(i, N) {
        cout << (ll)1e15 - seg.query(i, N) << endl;
    }
    return 0;
}