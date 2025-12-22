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
template<class T> ostream& operator << (ostream& s, const array<T, 2>& P)
{ return s << '<' << P[0] << ", " << P[1] << '>'; }
template<class T> ostream& operator << (ostream& s, const array<T, 3>& P)
{ return s << '<' << P[0] << ", " << P[1] << ", " << P[2] << '>'; }
template<class T> ostream& operator << (ostream& s, const array<T, 4>& P)
{ return s << '<' << P[0] << ", " << P[1] << ", " << P[2] << ", " << P[3] << '>'; }
template<class T> ostream& operator << (ostream& s, const deque<T>& P)
{ for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
template<class T> ostream& operator << (ostream& s, const set<T>& P)
{ for (auto it : P) { s << "<" << it << "> "; } return s; }
template<class T> ostream& operator << (ostream& s, const multiset<T>& P)
{ for (auto it : P) { s << "<" << it << "> "; } return s; }
template<class T> ostream& operator << (ostream& s, const unordered_set<T>& P)
{ for (auto it : P) { s << "<" << it << "> "; } return s; }
template<class T1, class T2> ostream& operator << (ostream& s, const map<T1,T2>& P)
{ for (auto it : P) { s << "<" << it.first << "->" << it.second << "> "; } return s; }
template<class T1, class T2> ostream& operator << (ostream& s, const unordered_map<T1,T2>& P)
{ for (auto it : P) { s << "<" << it.first << "->" << it.second << "> "; } return s; }
#endif // ONLINE_JUDGE

namespace {

template<typename T1, typename T2> ostream& operator << (ostream& os, const pair<T1,T2>& p)
{ return os << p.first << " " << p.second; }
template<typename T1, typename T2> istream& operator >> (istream& is, pair<T1,T2>& p)
{ return is >> p.first >> p.second; }
template<typename T> ostream& operator << (ostream& os, const vector<T>& v)
{ for (int i = 0; i < (int)v.size(); ++i) { os << (i ? " " : "") << v[i]; } return os; }
template<typename T> istream& operator >> (istream& is, vector<T> &v)
{ for (auto &x : v) { is >> x; } return is; }

istream &operator >> (istream &is, __int128_t &x) {
    string S;
    is >> S;
    x = 0;
    int flag = 0;
    for (auto &c : S) {
        if (c == '-') {
        flag = true;
        continue;
        }
        x *= 10;
        x += c - '0';
    }
    if (flag) x = -x;
    return is;
}

istream &operator >> (istream &is, __uint128_t &x) {
    string S;
    is >> S;
    x = 0;
    for (auto &c : S) {
        x *= 10;
        x += c - '0';
    }
    return is;
}

ostream &operator << (ostream &os, __int128_t x) {
    if (x == 0) return os << 0;
    if (x < 0) os << '-', x = -x;
    string S;
    while (x) S.push_back('0' + x % 10), x /= 10;
    reverse(begin(S), end(S));
    return os << S;
}
ostream &operator << (ostream &os, __uint128_t x) {
    if (x == 0) return os << 0;
    string S;
    while (x) S.push_back('0' + x % 10), x /= 10;
    reverse(begin(S), end(S));
    return os << S;
}

struct FastIO {
    FastIO() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout << fixed << setprecision(15);
    }
} fastio;

void read() {}
template <class T, class... Ts>
void read(T& a, Ts&... b) {
    cin >> a;
    read(b...);
}

void print() { cout << '\n'; }
template <class T, class... Ts>
void print(const T& a, const Ts&... b) {
    cout << a;
    if constexpr (sizeof...(b)) cout << ' ';
    print(b...);
}

}

// --- modular ---
// using mint = modint998244353;
// using mint = modint1000000007;

// --- constants ---
const int INF = 1e9;
const ll LINF = 4e18;

// ========================================
//                  solve
// ========================================

int N, M, K, S, P, Q;
vi E[101010];
bool zombie[101010];

bool danger[101010];
int dist[101010];

void bfs() {
    queue<int> que;

    rep(i, N) {
        if (zombie[i]) {
            dist[i] = 0;
            que.push(i);
        }
        else dist[i] = -1;
    }

    while (!que.empty()) {
        int cu = que.front(); que.pop();

        for (auto to : E[cu]) {
            if (dist[to] < 0) {
                dist[to] = dist[cu] + 1;
                que.push(to);
            }
        }
    }

    rep(i, N) if (1 <= dist[i] && dist[i] <= S) danger[i] = true;
}

bool vis[101010];
ll D[101010];
ll dijk() {
    rep(i, N) D[i] = LINF;
    rep(i, N) vis[i] = false;

    pq_m<pair<ll, int>> que;

    D[0] = 0;
    que.push({0, 0});
    
    while (!que.empty()) {
        auto q = que.top(); que.pop();

        ll cst = q.fi;
        int cu = q.se;

        if (cu == N - 1) {
            if (danger[cu]) return cst - Q;
            else return cst - P;
        }

        if (vis[cu]) continue;
        vis[cu] = 1;

        for (auto to : E[cu]) {
            if (zombie[to]) continue;

            ll cst2 = cst;
            
            if (danger[to]) cst2 += Q;
            else cst2 += P;

            if (chmin(D[to], cst2)) que.push({D[to], to});
        }
    }

    return -1;
}

void solve() {
    read(N, M, K, S, P, Q);
    rep(i, K) {
        int c; read(c); c--;
        zombie[c] = true;
    }

    rep(i, M) {
        int a, b; read(a, b); a--; b--;
        E[a].pb(b);
        E[b].pb(a);
    }
    bfs();
    print(dijk());
}

int main() {
    int t = 1;
    while (t--) solve();
}

// mycode AC
// void solve() {
//     int N, M, K, S, P, Q;
//     read(N, M, K, S, P, Q);
//     vi C(N);
//     rep(i, K) {
//         int c;
//         read(c); c--;
//         C[c] = true;
//     };

//     vvi g(N);
//     rep(i, M) {
//         int a, b;
//         read(a, b);
//         a--; b--;
//         g[a].pb(b);
//         g[b].pb(a);
//     }

//     vi infected(N);
//     rep(i, N) {
//         if (!C[i]) continue;
//         std::vector<int> dist(N, -1);
//         dist[i] = 0;
//         infected[i] = true;
        
//         queue<int> que;
//         que.push(i);

//         while (!que.empty()) {
//             int u = que.front();
//             que.pop();
//             for (int& v : g[u]) {
//                 if (v == 0 || v == N - 1) continue;
//                 if (dist[v] != -1) continue;
//                 dist[v] = dist[u] + 1;
//                 if (dist[v] <= S) {
//                     infected[v] = true;
//                     que.push(v);
//                 }
//             }
//         }
//     }

//     auto dijkstra = [&](int s, const std::vector<std::vector<int>>& graph) -> void {
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
//             for (int v : graph[u]) {
//                 if (C[v]) continue;
//                 long long nc = d;
//                 if (infected[v]) nc += Q;
//                 else nc += P;
//                 if (dist[v] > nc) {
//                     dist[v] = nc;
//                     pq.push({nc, v});
//                 }
//             }
//         }
//         print(dist[N-1] - P);
//     };

//     dijkstra(0, g);
// }

// int main() {
//     int t = 1;
//     while (t--) solve();
//     return 0;
// }