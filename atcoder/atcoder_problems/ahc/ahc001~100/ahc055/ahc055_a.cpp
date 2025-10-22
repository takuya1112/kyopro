#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int N;
    cin >> N;

    vector<int> H(N), C(N);
    rep(i, 0, N) cin >> H[i];
    rep(i, 0, N) cin >> C[i];

    vector<vector<int>> A(N, vector<int>(N));
    rep(i, 0, N) rep(j, 0, N) cin >> A[i][j];

    auto lowHP = [&]() {
        int mn = inf;
        int idx = -1;
        rep(i, 0, N) {
            if (H[i] <= 0) continue;
            if (H[i] < mn) {
                mn = H[i];
                idx = i;
            }
        }
        return idx;
    };

    auto attckBox = [&](int weapon) {
        double mx = 0;
        int idx = -1;
        rep(i, 0, N) {
            if (H[i] <= 0) continue;

            int Sdamage = 0, h = H[i], a = A[weapon][i];
            int n = min((h + a - 1) / a, C[weapon]);

            Sdamage += a * (n - 1);
            Sdamage += min(a, h - a * (n - 1));

            double ave = (double)Sdamage / n;
            if (mx < ave) {
                mx = ave;
                idx = i;
            }
        }
        return idx;
    };

    queue<int> Swords;

    while (1) {
        int sword = -1, target;
        if (!Swords.empty()) {
            sword = Swords.front();
            target = attckBox(sword);
        } else {
            target = lowHP();
        }

        if (target == -1) break;
        int n, h = H[target], a;

        if (sword != -1) a = A[sword][target];
        else a = 1;

        if (sword == -1) n = H[target];
        else  n = min((h + a - 1) / a, C[sword]);
        rep(i, 0, n) {
            cout << sword << ' ' << target << endl;
            if (sword == -1) H[target]--;
            else {
                H[target] -= a;  
                C[sword]--; 
            } 
        }

        if (sword != -1 && C[sword] <= 0) Swords.pop();
        if (H[target] <= 0) Swords.push(target);
    }
    return 0;
}