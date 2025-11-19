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

// --- modular ---
// using mint = modint998244353;
// using mint = modint1000000007;

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

// --- directions ---
const vector<int> dx = {1, 0, -1, 0};
const vector<int> dy = {0, 1, 0, -1};
const vector<int> dx8 = {1, 0, -1, 0, 1, -1, 1, -1};
const vector<int> dy8 = {0, 1, 0, -1, 1, 1, -1, -1};

// --- bit operations ---
int popcnt(int x) { return __builtin_popcount(x); }
int popcnt(unsigned int x) { return __builtin_popcount(x); }
int popcnt(long long x) { return __builtin_popcountll(x); }
int popcnt(unsigned long long x) { return __builtin_popcountll(x); }

int bsf(int x) { return __builtin_ctz(x); }
int bsf(unsigned int x) { return __builtin_ctz(x); }
int bsf(long long x) { return __builtin_ctzll(x); }
int bsf(unsigned long long x) { return __builtin_ctzll(x); }

// --- math utils ---
template<class T> T floor(T a, T b) {
if (a % b == 0 || a >= 0) return a / b;
else return -((-a) / b) - 1;
}
template<class T> T ceil(T x, T y) {
return floor(x + y - 1, y);
}
// --- constants ---

const int INF = 1e9;
const ll LINF = 4e18;


// ========================================
//                  solve
// ========================================

void chmin(pll &a, pll b) {
    if (a.first > b.first) a = b;
    else if (a.first == b.first) a.second += b.second;
}

struct edge {
    ll to, wg, lim;
};

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<edge>> G(n + 1);
    rep(i, m) {
        ll s, t, d, time;
        cin >> s >> t >> d >> time;
        G[s].push_back({t, d, time - d});
        G[t].push_back({s, d, time - d});
    }

    pll res = {LINF, 0};
    vector<vector<pll>> dp((1 << n), vector<pll> (n + 1, {LINF, 0}));
    dp[0][1] = {0, 1};


    rep(i, 1 << n) rep2(now, 1, n + 1) {
        if (dp[i][now].first == LINF) continue;
        for (auto e : G[now]) {
            if ((i >> (e.to - 1)) & 1) continue;
            if (e.lim >= dp[i][now].first) chmin(dp[i + (1 << (e.to - 1))][e.to], {dp[i][now].first + e.wg, dp[i][now].second});
        }
    }
    chmin(res, dp[(1 << n) - 1][1]);

    if (res.first == LINF) cout << "IMPOSSIBLE" << endl;
    else cout << res.first << ' ' << res.second << endl;
    return 0;
}

// mycode WA
// int main() {
//     int N, M;
//     cin >> N >> M;

//     vector<vector<pll>> G(N, vector<pll>(N, {LINF, LINF}));

//     ll s, t, d, time;
//     rep(i, M) {
//         cin >> s >> t >> d >> time;
//         s--; t--;
//         G[s][t] = {d, time};
//         G[t][s] = {d, time};
//     }

//     int MAX = 1 << N;
//     vector<vll> dp(N, vll(MAX, LINF));
//     dp[0][1] = 0;

//     rep(i, MAX) rep(j, N) { 
//         if (dp[j][i] == LINF) continue;
//         rep(k, N) {
//             if (i >> k & 1) continue;

//             auto [d, t] = G[j][k];
//             if (d == LINF) continue; 
//             if (dp[j][i] + d > t) continue;
//             chmin(dp[k][i | (1 << k)], dp[j][i] + d);
//         } 
//     }

//     map<ll, ll> mp;
//     rep(i, N) {
//         ll ans = dp[i][MAX - 1];
//         auto [d, t] = G[i][0];
//         if (d == LINF || ans == LINF) continue; 

//         if (i == 0) {
//             mp[ans]++;
//         } else {
//             if (ans + d > t) continue;
//             mp[ans + d]++;
//         }
//     }

//     if (mp.empty()) cout << "IMPOSSIBLE" << endl;
//     else {
//         auto it = mp.begin();
//         cout << it->first << ' ' << it->second << endl;
//     }
//     return 0;
// }