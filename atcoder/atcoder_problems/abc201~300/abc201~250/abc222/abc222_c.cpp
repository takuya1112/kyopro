#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;
using P = pair<int, int>;

bool win(char a, char b) {
    if (a == 'G' && b == 'C') return true;
    if (a == 'C' && b == 'P') return true;
    if (a == 'P' && b == 'G') return true;
    return false;
}

int main() {
    int n, m; 
    cin >> n >> m;
    int n2 = n*2;
    vector<string> a(n2);
    rep(i, 0, n2) cin >> a[i];

    vector<P> d(n2);
    rep(i, 0, n2) d[i] = P(0, i);
    
    rep(mi, 0, m) {
        rep(ni, 0, n) {
            int i = ni * 2, j = ni * 2 + 1;
            int ai = d[i].second, aj = d[j].second;
            if(win(a[ai][mi], a[aj][mi])) d[i].first--;
            if(win(a[aj][mi], a[ai][mi])) d[j].first--;
        }
        sort(all(d));
    }
    rep(i, 0, n2) cout << d[i].second + 1 << endl;
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
//     int N, M;
//     cin >> N >> M;
//     vector<string> A(2 * N);
//     rep(i, 0, 2 * N) cin >> A[i];
    
//     vector<pair<int, int>> Rank(2 * N);
//     rep(i, 0, 2 * N) {
//         Rank[i].first = 0;
//         Rank[i].second = i*-1;
//     }

//     rep(i, 0, M) {
//         rep(j, 0, N) {
//             auto P1 = Rank[2 * j].second;
//             auto P2 = Rank[2 * j + 1].second;
//             char a1 = A[P1*-1][i], a2 = A[P2*-1][i];
//             if (a1 == a2) continue;
//             else if (a1 == 'G') {
//                 if (a2 == 'C') Rank[2 * j].first++; 
//                 else Rank[2 * j + 1].first++;
//             } else if (a1 == 'C') {
//                 if (a2 == 'P') Rank[2 * j].first++; 
//                 else Rank[2 * j + 1].first++;
//             } else {
//                 if (a2 == 'G') Rank[2 * j].first++;
//                 else Rank[2 * j + 1].first++;
//             }
//         }
//         sort(all(Rank), greater<>());
//     }
//     rep(i, 0, 2 * N) {
//         cout << (Rank[i].second * -1) + 1 << endl;
//     }
//     return 0;
// }