#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

const string atcoder = "atcoder";

int main() {
    string S;
    cin >> S;

    queue<string> que;
    map<string, int> dist;

    que.push(S);
    dist[S] = 0;

    while (!que.empty()) {
        string v = que.front(); 
        que.pop();

        for (int i = 0; i+1 < atcoder.size(); ++i) {
            string v2 = v;
            swap(v2[i], v2[i+1]);
            if (!dist.count(v2)) {
                que.push(v2);
                dist[v2] = dist[v]+1;
            }
        }
    }
    cout << dist[atcoder] << endl;
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

// const string Target = "atcoder";

// int main() {
//     string S;
//     cin >> S;
//     int idx = 0;
//     int ans = 0;
//     while (S != Target) {
//         if (S[idx] != Target[idx]) {
//             rep(i, idx, S.size()) {
//                 if (S[i] == Target[idx]) {
//                     rrep(j, i, idx+1) {
//                         swap(S[j], S[j-1]);
//                         ans++;
//                     }
//                 }
//             }
//         }
//         idx ++;
//         if (idx >= S.size()) break;
//     }
//     cout << ans << endl;
//     return 0;
// }