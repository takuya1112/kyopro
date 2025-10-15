#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int N; cin >> N;
    vector <ll> d(N);
    rep(i, N) cin >> d[i];
    sort(d.begin(), d.end());
    ll left = d[N/2 -1];
    ll right = d[N/2];
    cout << right - left << endl;
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)
 
// int main() {
//     int N;
//     cin >> N;
//     vector<int> D(N);
//     rep(i, N) cin >> D[i];
//     sort(D.begin(), D.end());
//     int m = N / 2;
//     cout << D[m] - D[m-1] << endl;
//     return 0;
// }