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
using mint = modint1000000007;

// --- constants ---
const int INF = 1e9;
const ll LINF = 4e18;

// ========================================
//                  solve
// ========================================

const string T = "atcoder";

void solve() {
    int N; string S;
    read(N, S);
    
    vector<vector<mint>> dp(N + 1, vector<mint>(T.size() + 1, 0));
    dp[0][0] = 1;

    rep(i, N) {
        rep(j, T.size() + 1) {
            dp[i + 1][j] += dp[i][j];
            if (j < T.size() && S[i] == T[j]) {
                dp[i + 1][j + 1] += dp[i][j];
            }
        }
    }

    print(dp[N][T.size()].val());
}

int main() {
    int t = 1;
    while (t--) solve();
    return 0;
}

// mycode AC
// void solve() {
//     int N; string S;
//     read(N, S);

//     mint ans = 0;
//     vector<mint> v(N);
//     rep(i, N) if (S[i] == 'r') v[i] += 1;

//     string T = "atcoder";
//     reverse(all(T));

//     rep2(i, 1, 7) {
//         mint sum = 0;
//         rrep(j, N) {
//             if (T[i] == S[j]) {
//                 v[j] += sum;
//             }
//             if (T[i-1] == S[j]) sum += v[j]; 
//         }
//     }
//     rep(i, N) if (S[i] == 'a') ans += v[i];
//     print(ans.val());
// }

// int main() {
//     int t = 1;
//     while (t--) solve();
//     return 0;
// }