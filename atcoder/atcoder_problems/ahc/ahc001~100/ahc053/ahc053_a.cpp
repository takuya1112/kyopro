#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
typedef long long ll; const int inf = INT_MAX / 2;

const ll BASE = pow(10, 15) - 2 * pow(10, 12);
const ll MAX = pow(10, 15) + 2 * pow(10, 12); 


void print(vector<ll> a) {
    rep(i, 0, a.size()) {
        cout << a[i] << ' ';
    }
}

int main() {
    ll N, M, L, U;
    cin >> N >> M >> L >> U;


    vector<ll> A(M);
    rep(i, 0, M) A[i] = BASE;

    int num_div = 450;
    vector<ll> B(num_div);
    ll plus = 4 * pow(10, 12) / num_div;
    B[0] = 1;
    rep(i, 1, num_div) {
        B[i] = B[i - 1] + plus;
    }

    print(A);
    print(B);
    cout << '\n';


    vector<ll> C(M);
    rep(i, 0, M) cin >> C[i];


    vector<ll> Sum(M);
    vector<ll> ans(N);
    rep(i, 0, 50) {
       ans[i] = i + 1;
       Sum[i] = C[i] - BASE;
    } 

    vector<bool> visited(num_div);
    rep(i, 0, M) {
        ll E = LONG_LONG_MAX;
        ll S = 0;
        vector<int> idx;
        rrep(j, num_div, 0) {
            if (visited[j] == true) continue;
            if (abs(Sum[i] - (S + B[j])) < E) {
                S += B[j];
                E = abs(Sum[i] - (S + B[j]));
                idx.push_back(j + 1);
            }
        }
        for(int j : idx) {
            visited[j] = true;
            ans[j + 50] = i + 1;
        }
    }

    print(ans);
    cout << '\n';
    return 0;
}