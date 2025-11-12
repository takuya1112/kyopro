#ifndef ONLINE_JUDGE
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
using namespace std;

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

// ========================================
//                  solve
// ========================================

int N, M;
int ** dp; 

void func() {
    int codeTable[M];
    rep(i, M) cin >> codeTable[i];

    int num;
    dp[0][128] = 0;

    rep2(count, 1, N + 1) {
        cin >> num;
        for (int i = 0; i <= 255; i++) {
            if (dp[count - 1][i] != INF) {
                rep (k, M) {
                    if (i + codeTable[k] > 255) {
                        dp[count][255] = min(dp[count][255], dp[count - 1][i] + (num - 255) * (num - 255));
                    } else if (i + codeTable[k] < 0) {
                        dp[count][0] = min(dp[count][0], dp[count - 1][i] + num * num);
                    } else {
                        dp[count][i + codeTable[k]] = min(dp[count][i + codeTable[k]], dp[count - 1][i] + (num - (i + codeTable[k])) * (num - (i + codeTable[k])));
                    }
                }
            }
        }
    }

    int ans = INF;
    rep(i, 256) chmin(ans, dp[N][i]);
    cout << ans << '\n';
}

int main() {
    dp = new int*[20001];
    rep(i, 20001) {
        dp[i] = new int[256];
    }

    while (true) {
        cin >> N >> M;

        if (N == 0 && M == 0) break;
        rep(i, N + 1) {
            rep(k, 256) dp[i][k] = INF;
        }
        func();
    }
    return 0;
}

// mycode AC
// int main() {
//     int N, M;
//     while (true) {
//         cin >> N >> M;
//         if (N == 0 && M == 0) break;
//         vint C(M), X(N);
//         rep(i, M) cin >> C[i];
//         rep(i, N) cin >> X[i];

//         vint dp(256, INF);
//         dp[128] = 0;
//         rep(i, N) {
//             vint nxt(256, INF);
//             rep(j, 256) {
//                 if (dp[j] == INF) continue;
//                 rep(k, M) {
//                     int l = j + C[k];
//                     if (l > 255) chmin(l, 255);
//                     if (l < 0) chmax(l, 0);
//                     chmin(nxt[l], dp[j] +  (l - X[i]) * (l - X[i]));
//                 }
//             }   
//             swap(dp, nxt);
//         }
//         int ans = INF;
//         rep(i, 256) chmin(ans, dp[i]);
//         cout << ans << endl;
//     }

//     return 0;
// }