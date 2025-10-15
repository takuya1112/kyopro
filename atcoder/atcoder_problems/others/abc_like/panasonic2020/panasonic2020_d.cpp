#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int n;
void dfs(string s, char mx) {
    if (s.size() == n) {
        cout << s << endl;
        return;
    }

    for (char c = 'a'; c <= mx + 1; c++) {
        string t = s;
        t += c;
        dfs(t, max(mx, c));
    }
}

int main() {
    cin >> n;
    dfs("", 'a' - 1);
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

// int main() {
//     int N;
//     cin >> N;

//     auto f = [&](auto f, string s, char c) {
//         if (s.size() == N) {
//             cout << s << endl;
//             return;
//         }

//         rep(i, 0, s.size() + 1) {
//             char a = 'a' + i;
//             if (c + 1 < a) continue;
//             f(f, s + a, a > c ? a : c); 
//         }
//     };

//     f(f, "a", 'a');
//     return 0;
// }