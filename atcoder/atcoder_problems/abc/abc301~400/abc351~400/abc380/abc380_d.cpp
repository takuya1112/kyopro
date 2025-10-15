#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int f(ll l, ll r, ll k) {
    if (l + 1 >= r) {
        return 0;
    }
    ll c = (l + r) / 2;
    if (k < c) return f(l, c, k);
    else return f(c, r, k) + 1;
}

char flip(char c) {
    if (islower(c)) return c - 'a' + 'A';
    return c - 'A' + 'a';
}


int main() {
    string S; cin >> S;
    int N = S.size();
    int Q; cin >> Q;

    rep(qi, 0, Q) {
        if (qi) cout << ' ';
        ll k; cin >> k;
        k--;
        int si = k % N;
        k /= N;

        char ans = S[si];
        int cnt = f(0, 1LL << 60, k);
        if (cnt % 2) ans = flip(ans);
        cout << ans;
    } 
    cout << '\n';
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i = a; i >= b; i--)
// #define all(x) (x).begin(),(x).end()
// typedef long long ll; const int inf = INT_MAX / 2;

// char flip(char c) {
//     if ('a' <= c && c <= 'z') {
//         return (c - 'a') + 'A';
//     } else {
//         return (c - 'A') + 'a';
//     }
// }

// int main() {
//     string S; cin >> S;
//     int Q; cin >> Q;
//     rep(qi, 0, Q) {
//         if (qi) cout << " ";
//         ll k; cin >> k;
//         k--;
//         ll blk = k / S.size();
//         ll pt = k % S.size();
//         if (__builtin_popcountll(blk) % 2) {
//             cout << flip(S[pt]);
//         } 
//         else {
//             cout << S[pt];
//         }
//     } cout << '\n';
//     return 0;
// }

// mycode worng ans
// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i = a; i >= b; i--)
// #define all(x) (x).begin(),(x).end()
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     string S; cin >> S;
//     int Q; cin >> Q;
//     int N = S.size();

//     function<int(ll, ll)> f = [&] (ll k, int cnt) {
//         if (k < S.size()) { 
//             return cnt;
//         }
//         return f(k / 2, cnt + 1);
//     };

//     auto g = [&](ll k) -> char {
//         int cnt = f(k, 0);
//         char c = S[k % N];
//         if (k < N) return c;

//         if (cnt == 1) {
//             if (islower(c)) c = toupper(c);
//             else c = tolower(c);
//         }
//         return c;
//     };

//     rep(qi, 0, Q) {
//         ll k; cin >> k;
//         k --;
//         // cout << f(k, 0) << endl;
//         g(k);
//     } cout << '\n';
//     return 0;
// }