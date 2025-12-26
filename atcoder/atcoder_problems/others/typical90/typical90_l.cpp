#ifdef LOCAL
#define _GLIBCXX_DEBUG
#endif

#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>; using pll = pair<long long, long long>;
using dint = array<int, 2>; using dll = array<long long, 2>;
using tint = array<int, 3>; using tll = array<long long, 3>;
using fint = array<int, 4>; using fll = array<long long, 4>;
using qint = array<int, 5>; using qll = array<long long, 5>;
using vi = vector<int>; using vvi = vector<vi>; using vvvi = vector<vvi>; using vvvvi = vector<vvvi>;
using vll = vector<long long>; using vvll = vector<vll>; using vvvll = vector<vvll>; using vvvvll = vector<vvvll>;
using vd = vector<double>; using vvd = vector<vd>; using vvvd = vector<vvd>; using vvvvd = vector<vvvd>;
using vld = vector<long double>; using vvld = vector<vld>; using vvvld = vector<vvld>; using vvvvld = vector<vvvld>;
using vpii = vector<pii>; using vvpii = vector<vpii>; using vvvpii = vector<vvpii>;
using vpll = vector<pll>; using vvpll = vector<vpll>; using vvvpll = vector<vvpll>;
using vc = vector<char>; using vvc = vector<vc>;
using vs = vector<string>; using vvs = vector<vs>;
using si = set<int>; using sll = set<long long>;
using spii = set<pii>; using spll = set<pll>;
using ss = set<string>; using sc = set<char>;
using ll = long long; using ull = unsigned long long;
using uint = unsigned int; using ld = long double;
using i128 = __int128_t; using u128 = __uint128_t;
template <class T> using pq = priority_queue<T, vector<T>>;
template <class T> using pq_min = priority_queue<T, vector<T>, greater<T>>;
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
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
const string abc = "abcdefghijklmnopqrstuvwxyz";
const string ABC = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const string num = "0123456789";
const ll MOD = 1000000007;
const ll mod = 998244353;
const ld PI = 3.1415926535897932384626;


template<class S, class T> inline bool chmax(S &a, T b) { return (a < b ? a = b, 1 : 0); }
template<class S, class T> inline bool chmin(S &a, T b) { return (a > b ? a = b, 1 : 0); }

template<typename T> int popcnt(T x) {
    return __builtin_popcountll((unsigned long long)x);
}
template<typename T> int bsf(T x) {
    if (x == 0) return -1;
    return __builtin_ctzll((unsigned long long)x);
}

template<typename T> T floor_div(T a, T b) {
    if (b < 0) a = -a, b = -b;
    if (a >= 0) return a / b;
    else return -((-a) / b) - 1;
}
template<typename T> T ceil_div(T a, T b) {
    return -floor_div(-a, b);
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
const int dx4[4] = {1, 0, -1, 0};
const int dy4[4] = {0, 1, 0, -1};
const int dx8[8] = {1, 0, -1, 0, 1, -1, 1, -1};
const int dy8[8] = {0, 1, 0, -1, 1, 1, -1, -1};

// ========================================
//                  solve
// ========================================

int H, W, Q;

bool used[2009][2009];

void solve() {
    read(H, W, Q);
    dsu d(H * W);

    rep2(i, 1, Q + 1) { 
        int ty;
        cin >> ty;
        if (ty == 1) {
            int x, y;
            cin >> x >> y;
            rep(i, 4) {
                int sx = x + dx4[i], sy = y + dy4[i]; 
                if (used[sx][sy] == false) continue;
                int hash1 = (x - 1) * W + (y - 1);
                int hash2 = (sx - 1) * W + (sy - 1);
                d.merge(hash1, hash2);
            }
            used[x][y] = true;
        }
        if (ty == 2) {
            int xa, xb, ya, yb;
            cin >> xa >> ya >> xb >> yb;
            if (used[xa][ya] == false && used[xb][yb] == false) {
                print("No");
                continue;
            }

            int hash1 = (xa - 1) * W + (ya - 1);
            int hash2 = (xb - 1) * W + (yb - 1);
            if (d.same(hash1, hash2)) print("Yes");
            else print("No");
        }
    }
}

int main() {
    int t = 1;
    while (t--) solve();
}

// mycode AC
// struct dsu {
//     std::vector<int> parent, rank;

//     dsu(int n) : parent(n), rank(n, 0) {
//         for (int i = 0; i < n; i++) parent[i] = i;
//     }

//     int find(int x) {
//         if (parent[x] == x) return x;
//         else return parent[x] = find(parent[x]);
//     }

//     void unite(int x, int y) {
//         x = find(x);
//         y = find(y);
//         if (x == y) return;

//         if (rank[x] < rank[y]) {
//             parent[x] = y;
//         } else {
//             parent[y] = x;
//             if (rank[x] == rank[y]) rank[x]++;
//         }
//     }

//     bool same(int x, int y) {
//         return find(x) == find(y);
//     }
// };


// void solve() {
//     int H, W;
//     read(H, W);

//     vs grid(H, string(W, '#'));
//     dsu d(H * W);

//     int Q;
//     read(Q);

//     rep(qi, Q) {
//         int com;
//         read(com);
//         if (com == 1) {
//             int r, c;
//             read(r, c);
//             r--; c--;
//             grid[r][c] = '.';

//             int idx = W * r + c;
//             rep(i, 4) {
//                 int nx = r + dx4[i], ny = c + dy4[i];
//                 if (nx < 0 || nx >= H || ny < 0 || ny >= W) continue;
//                 if (grid[nx][ny] == '.') {
//                     int nidx = W * nx + ny;
//                     d.unite(idx, nidx);
//                 }
//             }

//         } else if (com == 2) {
//             int ra, ca, rb, cb;
//             read(ra, ca, rb, cb);
//             ra--; ca--; rb--; cb--; 
//             int idx1 = W * ra + ca, idx2 = W * rb + cb;
//             if (d.same(idx1, idx2) && grid[ra][ca] != '#') print("Yes");
//             else print("No");
//         }
//     }
// }

// int main() {
//     int t = 1;
//     while (t--) solve();
//     return 0;
// }