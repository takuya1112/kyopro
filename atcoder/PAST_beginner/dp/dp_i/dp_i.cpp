#ifndef ONLINE_JUDGE
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

// --- utility ---
template<class S, class T> inline bool chmax(S &a, T b) { return (a < b ? a = b, 1 : 0); }
template<class S, class T> inline bool chmin(S &a, T b) { return (a > b ? a = b, 1 : 0); }

using pint = pair<int, int>;
using pll = pair<long long, long long>;
using pd = pair<double, double>;
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

int N; double P[3300];
double dp[3300][3300];

int main() {
    cin >> N;
    rep(i, N) cin >> P[i];

    dp[0][0] = 1;
    rep(i, N) rep(omote, N + 1) {
        dp[i + 1][omote] += dp[i][omote] * (1 - P[i]);
        dp[i + 1][omote + 1] += dp[i][omote] * P[i];
    }

    double ans = 0;
    rep(omote, N + 1) {
        if (N - omote < omote) ans += dp[N][omote];
    }
    printf("%.10lf\n", ans);
    return 0;
}

// mycode WA
// int main() {
//     int N;
//     cin >> N;
//     vector<double> P(N);
//     rep(i, N) cin >> P[i];

//     vector<vector<pd>> dp(N + 1, vector<pd>(N / 2 + 1));
//     dp[0][0] = {1, 0};

//     rep(i, N / 2) {
//         vector<vector<pd>> nxt(N + 1, vector<pd>(N / 2 + 1));
//         rep(j, N) {
//             dp[j + 1][i].first += dp[j][i].first * P[j];

//             dp[j + 1][i + 1].first += dp[j][i].first * (1 - P[j]);
//             cout << dp << endl;
//         }
//     }
//     return 0;
// }