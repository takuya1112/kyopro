#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll;

int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> as;
    as.push_back({});
    rep(i, 0, n) {
        vector<vector<int>> nxt;
        for (vector<int> a : as) {
            int sx = 1;
            if (a.size() > 0) sx = a.back() + 1;
            a.push_back(sx);
            while (a.back() <= m) {
                nxt.push_back(a);
                a.back()++;
            }
        }
        swap(as,nxt);
    }
    for (vector<int> a : as) {
        rep(i, 0, n) {
            printf("%d%c", a[i], i==n-1 ? '\n' : ' ');
        }
    }
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i=a;i>=b;i--)
// #define all(x) (x).begin(),(x).end()
// typedef long long ll;

// int n, m; 

// void output(vector<int> a) {
//     rep(i, 0, n) {
//         printf("%d%c", a[i], i==n-1 ? '\n' : ' ');
//     }
// }

// void f(vector<int> a) {
//     if (a.size() == n) {
//         output(a);
//         return;
//     }
//     int sx = 1;
//     if (a.size() > 0) {
//         sx = a.back() + 1;
//     }
//     a.push_back(sx);
//     while (a.back() <= m) {
//         f(a);
//         a.back()++;
//     }
// }

// int main() {
//     cin >> n >> m;
//     f({});
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i=a;i>=b;i--)
// #define all(x) (x).begin(),(x).end()
// typedef long long ll;
// int N, M;

// void f(int cnt, int pre, string s) {
//     if (cnt == N) {
//         rep(i, 0, s.size()) {
//             cout << s[i];
//         }
//         cout << endl;
//     } else {
//         rep(i, pre+1, M+1) {
//             if (s == "") f(cnt+1, i, to_string(i));
//             else f(cnt+1, i, s + " " + to_string(i));
//         }
//     }
// }

// int main() {
//     cin >> N >> M;
//     f(0, 0, "");
//     return 0;
// }