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
const int MOD = 1e4;

// ========================================
//                  solve
// ========================================

int main() {
    int N, K;
    cin >> N >> K;
    vint A(N, -1);
    rep(i, K) {
        int a, b;
        cin >> a >> b;
        a--;
        A[a] = b;
    }

    vector dp(N + 1, vector(4, vector(4, 0)));
    dp[0][0][0] = 1;
    rep(i, N) rep(j, 4) rep(k, 4) {
        if (dp[i][j][k] == 0) continue;
        rep2(l, 1, 4) {
            if (l == j && l == k) continue;
            if (A[i] != -1 && A[i] != l) continue;
            dp[i + 1][l][j] = (dp[i + 1][l][j] + dp[i][j][k]) % 10000;
        }
    }

    ll res = 0;
    rep2(j, 1, 4) rep2(k, 1, 4) res = (res + dp[N][j][k]) % 10000;
    cout << res << endl;
}

// mycode wa
// int main() {
//     int N, K;
//     cin >> N >> K;
//     map<int, int> A;
//     rep(i, K) {
//         int a, b;
//         b--;
//         cin >> a >> b;
//         A.insert({a, b});
//     }

//     vector<vector<vint>> dp(N + 1, vector<vint>(3, vint(3)));
//     rep(i, K) dp[0][i][0] = 1;
//     rep(i, N) {             
//         if (A.find(i + 1) != A.end()) {
//             int b = A[i + 1];
//             rep(j, 2)  {
//                 dp[i + 1][b][j + 1] += dp[i][b][j];
//                 dp[i + 1][b][j + 1] %= MOD;
//             }   
//             rep(j, 3) {
//                 if (j == b) continue;
//                 rep(k, 2) {
//                     dp[i + 1][j][0] += dp[i][b][k];
//                     dp[i + 1][j][0] %= MOD;
//                 }
//             }   
//         } else {
//             rep(j, 3) {
//                 rep(k, 2) {
//                     dp[i + 1][j][k + 1] += dp[i][j][k];
//                     dp[i + 1][j][k + 1] %= MOD;
//                     rep(l, 3) {
//                         if (l == k) continue;
//                         rep(m, 2) {
//                             dp[i + 1][l][m] += dp[i][j][k];
//                             dp[i + 1][l][m] %= MOD;
//                         }
//                     }
//                 }
//             }
//         } 
//     }

//     cout << dp[N] << endl;
//     return 0;
// }