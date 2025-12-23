#ifdef LOCAL
#define _GLIBCXX_DEBUG
#endif

#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>; using pll = pair<long long, long long>;
using pil = pair<int, long long>; using pli = pair<long long, int>; 
using dint = array<int, 2>; using dll = array<long long, 2>;
using tint = array<int, 3>; using tll = array<long long, 3>;
using fint = array<int, 4>; using fll = array<long long, 4>;
using qint = array<int, 5>; using qll = array<long long, 5>;
using vi = vector<int>; using vvi = vector<vi>; using vvvi = vector<vvi>; using vvvvi = vector<vvvi>;
using vll = vector<long long>; using vvll = vector<vll>; using vvvll = vector<vvll>; using vvvvll = vector<vvvll>;
using vd = vector<double>; using vvd = vector<vd>; using vvvd = vector<vvd>; using vvvvd = vector<vvvd>;
using vld = vector<long double>; using vvld = vector<vld>; using vvvld = vector<vvld>; using vvvvld = vector<vvvld>;
using vpii = vector<pii>; using vvpii = vector<vpii>; using vvvpii = vector<vvpii>;
using vpil = vector<pil>; using vvpil = vector<vpil>; using vvvpil = vector<vvpil>;
using vpli = vector<pli>; using vvpli = vector<vpli>; using vvvpli = vector<vvpli>;
using vpll = vector<pll>; using vvpll = vector<vpll>; using vvvpll = vector<vvpll>;
using vc = vector<char>; using vvc = vector<vc>;
using vs = vector<string>; using vvs = vector<vs>;
using si = set<int>; using sll = set<long long>;
using spii = set<pii>; using spil = set<pil>; using spli = set<pli>; using spll = set<pll>;
using ss = set<string>; using sc = set<char>;
using ll = long long; using ull = unsigned long long;
using uint = unsigned int; using ld = long double;
using i128 = __int128_t; using u128 = __uint128_t;
const string abc = "abcdefghijklmnopqrstuvwxyz";
const string ABC = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const ll MOD = 1000000007;
const ll mod = 998244353;
const ld PI = 3.1415926535897932384626;
template <class T> using pq = priority_queue<T, vector<T>>;
template <class T> using pqg = priority_queue<T, vector<T>, greater<T>>;
template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return true;}return false;}
template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return true;}return false;}
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
#define elif else if 
#define next_p(x) next_permutation(x.begin(), x.end())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

template<typename T> int popcnt(T x) {
    return __builtin_popcountll((unsigned long long)x);
}
template<typename T> int bsf(T x) {
    if (x == 0) return -1;
    return __builtin_ctzll((unsigned long long)x);
}

template<typename T> T floor_div(T a, T b) {
    if (a % b == 0 || a >= 0) return a / b;
    else return -((-a) / b) - 1;
}
template<typename T> T ceil_div(T x, T y) {
    return floor_div(x + y - 1, y);
}

template<typename T> T gcda(T a, T b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        a %= b;
        swap(a, b);
    }
    return a;
}
template<typename T> T lcma(T a,T b) {
    if (a == 0 || b == 0) return 0;
    return a / gcda(a, b) * b;
}

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
using mint = modint998244353;
using Mint = modint1000000007;
using vm = vector<mint>; using vvm = vector<vm>; using vvvm = vector<vvm>; using vvvvm = vector<vvvm>;
using vM = vector<Mint>; using vvM = vector<vM>; using vvvM = vector<vvM>; using vvvvM = vector<vvvM>;
#endif

namespace {
// pair_out
template<typename T1, typename T2> ostream& operator << (ostream& os, const pair<T1,T2>& p)
{ return os << p.first << " " << p.second; }
// pair_in
template<typename T1, typename T2> istream& operator >> (istream& is, pair<T1,T2>& p)
{ return is >> p.first >> p.second; }
// vector_out
template<typename T> ostream& operator << (ostream& os, const vector<T>& v)
{ for (int i = 0; i < (int)v.size(); ++i) { os << (i ? " " : "") << v[i]; } return os; }
// vector_in
template<typename T> istream& operator >> (istream& is, vector<T> &v)
{ for (auto &x : v) { is >> x; } return is; }
//__int128_t_in
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
//__uint128_t_in
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
//__int128_t_out
ostream &operator << (ostream &os, __int128_t x) {
    if (x == 0) return os << 0;
    if (x < 0) os << '-', x = -x;
    string S;
    while (x) S.push_back('0' + x % 10), x /= 10;
    reverse(begin(S), end(S));
    return os << S;
}
//__uint128_t_out
ostream &operator << (ostream &os, __uint128_t x) {
    if (x == 0) return os << 0;
    string S;
    while (x) S.push_back('0' + x % 10), x /= 10;
    reverse(begin(S), end(S));
    return os << S;
}

#ifdef LOCAL
// ========== debug macro ==========
#define debug(x) cout << #x << " = " << (x) << " (L" << __LINE__ << ")\n";

// ========== debug stream ==========

// vector<vector>>_out;
template<typename T> ostream& operator << (ostream& os, const vector<vector<T>>& v)
{ for (int i = 0; i < (int)v.size(); ++i) { os << v[i] << "\n"; } return os; }
// map_out
template<typename T1, typename T2> ostream& operator << (ostream& os, const map<T1,T2>& m)
{ for (auto it : m) { os << it.first << ":" << it.second << " "; } return os; }
// unordered_map_out
template<typename T1, typename T2> ostream& operator << (ostream& os, const unordered_map<T1,T2>& m)
{ for (auto it : m) { os << it.first << ":" << it.second << " "; } return os; }
// set_out
template<typename T> ostream& operator << (ostream& os, const set<T>& st)
{ for (auto it : st) { os << it << " "; } return os; }
// multiset_out
template<typename T> ostream& operator << (ostream& os, const multiset<T>& st)
{ for (auto it : st) { os << it << " "; } return os; }
// unordered_set_out
template<typename T> ostream& operator << (ostream& os, const unordered_set<T>& st)
{ for (auto it : st) { os << it << " "; } return os; }
// queue_out
template<typename T> ostream& operator << (ostream& os, queue<T> q)
{ while (!q.empty()) { os << q.front() << " "; q.pop(); } return os; }
// deque_out
template<typename T> ostream& operator << (ostream& os, deque<T> q)
{ while (!q.empty()) { os << q.front() << " "; q.pop_front(); } return os; }
// stack_out
template<typename T> ostream& operator << (ostream& os, stack<T> st) 
{ while (!st.empty()) { os << st.top() << " "; st.pop(); } return os; }
// array2_out
template<typename T> ostream& operator << (ostream& os, const array<T, 2>& a)
{ return os << '<' << a[0] << " " << a[1] << '>'; }
// array3_out
template<typename T> ostream& operator << (ostream& os, const array<T, 3>& a)
{ return os << '<' << a[0] << " " << a[1] << " " << a[2] << '>'; }
// array4_out
template<typename T> ostream& operator << (ostream& os, const array<T, 4>& a)
{ return os << '<' << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << '>'; }
// array5_out
template<typename T> ostream& operator << (ostream& os, const array<T, 5>& a)
{ return os << '<' << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << '>'; }
// priority_queue_out
template<typename T, typename Container, typename Compare>
ostream& operator << (ostream& os, priority_queue<T, Container, Compare> pq)
{ while (!pq.empty()) { os << pq.top() << " "; pq.pop(); } return os; }

// ==================================
#endif

#if __has_include(<atcoder/all>)
// 998244353_in
istream& operator >> (istream& is, mint& x)
{ long long tmp; is >> tmp; x = tmp; return is; }
// 998244353_out
ostream& operator << (ostream& os, mint& x) 
{ os << x.val(); return os; }
// 1000000007_in
istream& operator >> (istream& is, Mint& x)
{ long long tmp; is >> tmp; x = tmp; return is; }
// 1000000007_out
ostream& operator << (ostream& os, Mint& x)
{ os << x.val(); return os; }
#endif

struct FastIO {
    FastIO() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout << fixed << setprecision(15);
    }
} fastio;

void read() {}
template <typename T, typename... Ts>
void read(T& a, Ts&... b) {
    cin >> a;
    read(b...);
}

void print() { cout << '\n'; }
template <typename T, typename... Ts>
void print(const T& a, const Ts&... b) {
    cout << a;
    if constexpr (sizeof...(b)) cout << ' ';
    print(b...);
}

}

// ========== constants ==========
const int INF = 1e9;
const ll LINF = 4e18;

// ========================================
//                  solve
// ========================================

void solve() {
    int m;
    cin >> m;
    vs s(3);
    rep(i, 3) read(s[i]);

    int ans = INF;
    vi p = {0, 1, 2};
    rep(d, 10) {
        char c = '0' + d;
        do {
            int t = -1;
            rep(i, 3) {
                t++;
                while ( t < 300 && s[p[i]][t%m] != c) t++;
            }
            if (t < 300) ans = min(ans, t);
        } while (next_p(p));
    }
    if (ans == INF) print(-1);
    else print(ans);
}

// void solve() {
//     int m;
//     read(m);
//     vs s(3);
//     rep(i, 3) read(s[i]);

//     ll ans = LINF;
//     rep(i0, m) rep(i1, m) rep(i2, m) {
//         if (s[0][i0] != s[1][i1]) continue;
//         if (s[0][i0] != s[2][i2]) continue;
//         ll now = 0;
//         now = i0;

//         {
//             ll t = i1;
//             if (i0 == i1) t += m;
//             now = max(now, t);
//         }

//         {
//             ll t = i2;
//             if (i0 == i2) t += m;
//             if (i1 == i2) t += m;
//             now = max(now, t);
//         }
//         ans = min(ans, now);
//     }
//     if (ans == LINF) print(-1);
//     else print(ans);
// }

// void solve() {
//     int m;
//     read(m);
//     vs s(3);
//     rep(i, 3) read(s[i]);

//     ll ans = LINF;
//     rep(t0, 300) rep(t1, 300) rep(t2, 300) {
//         if (t0 == t1) continue;
//         if (t0 == t2) continue;
//         if (t1 == t2) continue;

//         if (s[0][t0%m] != s[1][t1%m]) continue;
//         if (s[0][t0%m] != s[2][t2%m]) continue;

//         ans = min(ans, max({t0, t1, t2}));
//     }
//     if (ans == LINF) print(-1);
//     else print(ans);
// }

int main() {
    int t = 1;
    while (t--) solve();
    return 0;
}

// mycode WA
// void solve() {
//     int M; vs S(3);
//     read(M);
//     rep(i, 3) read(S[i]);

//     int ans = INF;
//     for (char n = '0'; n <= '9'; n++) {
//         vvi v(3, vi(M, INF));
//         rep(i, M) {
//             rep(j, 3) {
//                 if (S[j][i] == n) v[j][i] = i;
//                 if (i + 1 < M) v[j][i + 1] = v[j][i];
//             }
//         }
        
//         if (v[0][M-1] == INF || v[1][M-1] == INF || v[2][M-1] == INF) continue;

//         vi dp(1 << 3, INF);
//         dp[0] = 0;
//         rep(i, M) rep(j, 3) {
//             chmin(dp[1 << j], v[j][i]);
//         }
//         print(dp);
//         print(v);
//     }

//     if (ans == INF) print(-1);
//     else print(ans);
// }

// int main() {
//     int t = 1;
//     while (t--) solve();
//     return 0;
// }