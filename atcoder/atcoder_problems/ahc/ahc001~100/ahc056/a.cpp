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

int wx[4] = {0, 0, -1, 0};
int wy[4] = {0, 0, 0, -1};

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
const int NMAX = 21;
const int KMAX = 21 * 21;

// ========================================
//                  solve
// ========================================
int N, K, T;
vs v(NMAX), h(NMAX);
vector<pint> targets(KMAX);

struct Rule {
    int c;
    int q;
    int A;
    int S;
    char D;
};

bool can_move(int i, int j, int d) {
    // 0 : "D", 1 : "R", 2 : "U", 3 : "L" 
    int nx = i + dx[d], ny = j + dy[d];
    if (0 > nx || nx >= N || 0 > ny || ny >= N) return false;
    if (d % 2 == 1) return v[i + wx[d]][j + wy[d]] == '0';
    else return h[i + wx[d]][j + wy[d]] == '0'; 
}

vector<vint> bfs(int si, int sj, int gi, int gj) {
    vector<vint> v(N, vint(N));
    queue<pint> que;

    v[si][sj] = 1;
    que.push({si, sj});

    while (!que.empty()) {
        auto [x, y] = que.front(); 
        que.pop();
        rep(i, 4) {
            if (!can_move(x, y, i)) continue;
            int nx = x + dx[i], ny = y + dy[i];
            if (v[nx][ny] != 0) continue;
            v[nx][ny] = v[x][y] + 1;
            que.push({nx, ny});
        }
    }
    return v;
}

vector<pint> restore_path(int si, int sj, int gi, int gj, vector<vint> v) {
    vector<pint> path;

    int x = gi, y = gj;
    if (v[x][y] == 0) return {};

    path.pb({x, y});
    while (!(x == si && y == sj)) {
        rep(i, 4) {
            int nx = x - dx[i];
            int ny = y - dy[i];

            if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
            if (v[nx][ny] == v[x][y] - 1) {
                x = nx; y = ny;
                path.pb({x, y});
                break;
            }
        }
    }
    reverse(all(path));
    return path;
}

vector<pint> make_path() {
    vector<pint> path;
    rep(i, K - 1) {
        auto [si, sj] = targets[i];
        auto [gi, gj] = targets[i + 1];
        vector<vint> d =  bfs(si, sj, gi, gj);
        vector<pint> p = restore_path(si, sj, gi, gj, d);
        rep(j, p.size() - 1) path.push_back(p[j]);
    } 
    
    path.push_back(targets[K-1]);
    return path;
}

int main() {
    cin >> N >> K >> T;
    rep(i, N) cin >> v[i];
    rep(i, N - 1) cin >> h[i];
    rep(i, K) {
        int x, y;
        cin >> x >> y;
        targets[i] = {x, y};
    }

    vector<pint> path = make_path();
    int n = path.size();
    cout << path << endl;

    int C = 0, Q = 0, M = 0;
    vector s(N, vint(N));

    int RMAX = 4 * 4 + 4;
    vector<Rule> rules(RMAX);
    vector<bool> rule_used(RMAX);

    rep(i, 4) {
        rep(j, 4) {
            rules[i * 4 + j].c = i;
            rules[i * 4 + j].A = j;
            if (i == 0) rules[i * 4 + j].D = 'D';
            if (i == 1) rules[i * 4 + j].D = 'R';
            if (i == 2) rules[i * 4 + j].D = 'U';
            if (i == 3) rules[i * 4 + j].D = 'L';
        }
    }

    rep(i, RMAX) {
        cout << rules[i].c << ' ';
        cout << rules[i].q << ' ';
        cout << rules[i].A << ' ';
        cout << rules[i].S << ' ';
        cout << rules[i].D << endl;
    }
    return 0;
}