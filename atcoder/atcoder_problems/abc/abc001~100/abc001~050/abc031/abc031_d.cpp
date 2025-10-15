#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int k, n;
    cin >> k >> n;
    vector<string> v(n), w(n);
    rep(i, 0, n) cin >> v[i] >> w[i];

    int p = 1;
    rep(i, 0, k) p *= 3;

    rep(i, 0, p) {
        int tmp = i;
        vector<int> len(k);
        rep(j, 0, k) {
            len[j] = tmp % 3 + 1;
            tmp /= 3;
        }

        vector<string> ans(k, "");
        int flag = 1;
        rep(j, 0, n) {
            int l = 0;
            for (auto c : v[j]) l += len[c - '1'];
            if (l != w[j].size()) {
                flag = 0;
                continue;
            }

            l = 0;
            for (auto c : v[j]) {
                string s = w[j].substr(l, len[c - '1']);
                if (ans[c - '1'] != "" && ans[c - '1'] != s) flag = 0;
                ans[c - '1'] = s;
                l += len[c - '1'];
            }
        }

        if (flag) {
            for (auto s : ans) cout << s << endl;
            return 0;
        }
    }
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i = a; i >= b; i--)
// #define all(x) (x).begin(),(x).end()
// #define rall(x) (x).rbegin(),(x).rend()
// typedef long long ll; const int inf = INT_MAX / 2;

// vector<int> ternary(int x, int n) {
//     vector<int> B(n);
//     int k = 1;
//     rep(i, 0, n) {
//         B[i] = ((x / k) % 3) + 1;
//         k *= 3;
//     }
//     return B;
// }

// int main() {
//     int K, N;
//     cin >> K >> N;
//     vector<pair<string, string>> A(N);
//     rep(i, 0, N) cin >> A[i].first >> A[i].second;

//     vector<string> ans(K, "");
//     vector<string> res;

//     auto f = [&](auto f, int c) {
//         if (c == N) {
//             bool ok = true;
//             rep(i, 0, N) {
//                 string s = "";
//                 string v = A[i].first, w = A[i].second;
//                 for (auto j : v) {
//                     int num = j - '0' - 1;
//                     s += ans[num];
//                 }
//                 if (s != w) ok = false;
//             }
//             if (ok) res = ans;
//             return;
//         }

//         string v = A[c].first, w = A[c].second;
//         int n = v.size(), m = w.size();
//         if (n == 1) {
//             int num = v[0] - '0' - 1;
//             if (ans[num] != "" && ans[num] != w) return;
//             ans[num] = w;
//             f(f, c + 1);
//             ans[num] = "";
//             return;
//         }
        
//         rep(i, 0, pow(3, n)) {
            
//             vector<int> B = ternary(i, n);

//             int cnt = 0;
//             rep(j, 0, n) cnt += B[j];
//             if (cnt != m) continue;


//             bool ok = true;
//             cnt = 0;
//             vector<string> temp(K);
//             rep(j, 0, n) {
//                 string s = w.substr(cnt, B[j]);
//                 cnt += B[j];
//                 int num = v[j] - '0' - 1;
//                 if ((ans[num] != "" && ans[num] != s) || (temp[num] != "" && temp[num] != s)) ok = false;
//                 temp[num] = s;
//             }

//             if (ok) {
//                 rep(j, 0, n) {
//                     int num = v[j] - '0' - 1;
//                     string s = temp[num];
//                     ans[num] = s;
//                 }
//                 f(f, c + 1);
//                 rep(j, 0, n) {
//                     int num = v[j] - '0' - 1;
//                     ans[num] = "";
//                 }
//             } 
//         }
//     };

//     f(f, 0);
//     rep(i, 0, K) cout << res[i] << '\n';
//     return 0;
// }