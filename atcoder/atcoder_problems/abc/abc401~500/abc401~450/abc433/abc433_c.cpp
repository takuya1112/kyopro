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

// --- bit operations ---
int popcnt(int x) { return __builtin_popcount(x); }
int popcnt(unsigned int x) { return __builtin_popcount(x); }
int popcnt(long long x) { return __builtin_popcountll(x); }
int popcnt(unsigned long long x) { return __builtin_popcountll(x); }

int bsf(int x) { return __builtin_ctz(x); }
int bsf(unsigned int x) { return __builtin_ctz(x); }
int bsf(long long x) { return __builtin_ctzll(x); }
int bsf(unsigned long long x) { return __builtin_ctzll(x); }

// --- modular ---
// using mint = modint998244353;
// using mint = modint1000000007;

// --- constants ---
const int INF = 1e9;
const ll LINF = 4e18;

// ========================================
//                  solve
// ========================================

int main() {
    string s;
    cin >> s;
    int n = s.size();

    vector<pair<char, int>> d;
    for (char c : s) {
        if (d.size() && d.back().first == c) d.back().second++;
        else d.eb(c, 1);
    }

    int ans = 0;
    rep(i, d.size() - 1) {
        if (d[i].first + 1 != d[i + 1].first) continue;
        ans += min(d[i].second, d[i + 1].second);
    }
    cout << ans << endl;
    return 0;
}

// int main() {
//     string s;
//     cin >> s;
//     int n = s.size();
//     int ans = 0;
//     rep(i, n - 1) {
//         if (s[i] + 1 == s[i + 1]) {
//             int l = i, r = i + 1;
//             ans++;
//             while (1 <= l && r + 1 < n) {
//                 if (s[l] != s[l - 1]) break;
//                 if (s[r] != s[r + 1]) break;
//                 l--; r++;
//                 ans++;
//             }
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }

// int main() {
//     string S;
//     cin >> S;

//     int ans = 0;
//     char c = S[0]; int cnt = 0;
//     vector<pint> s;
//     for (int i = 0; i < S.size(); i++) {
//         if (c == S[i]) cnt++;
//         else {
//             s.pb({c - '0', cnt});
//             c = S[i];
//             cnt = 1;
//         }
//     }
//     s.pb({c - '0', cnt});
//     rep(i, s.size() - 1) {
//         auto& [c1, cnt1] = s[i];
//         auto& [c2, cnt2] = s[i + 1];
//         if (c1 + 1 == c2) {
//             ans += min(cnt1, cnt2);
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }