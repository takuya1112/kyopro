#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    rep(i, 0, n) cin >> x[i] >> y[i];
    auto dist = [&](int i, int j) {
        double dx = x[i] - x[j];
        double dy = y[i] - y[j];
        return sqrt(dx * dx + dy * dy);
    };
    double len = 0;
    rep(i, 0, n) rep(j, 0, i) {
        len += dist(i, j);
    }
    int num = 2;
    rrep(i, n-1, 1) num *= i;

    int fact = 1;
    rrep(i, n, 1) fact *= i;

    double ans = (len * num) / fact;
    printf("%.10f\n", ans);
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i,n) for (int i = 0; i < (n); ++i)
// #define ll long long

// int main() {
//     int N; 
//     cin >> N;
//     vector<int> X(N), Y(N);
//     rep(i, N) cin >> X[i] >> Y[i];

//     vector<int> ord;
//     for(int i = 0; i < N; i++) ord.push_back(i);

//     long double sm = 0;
//     do {
//         rep(i, N-1) {
//             int a = ord[i];
//             int b = ord[i+1];

//             long double dx = X[a] - X[b];
//             long double dy = Y[a] - Y[b];

//             sm += sqrt(dx * dx + dy * dy);
//         }
//     } while (next_permutation(ord.begin(), ord.end()));

//     rep(i, N) sm /= (i + 1);
//     printf("%.10Lf\n", sm);
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i,n) for (int i = 0; i < (n); ++i)
// #define ll long long

// int main() {
//     int n;
//     cin >> n;
//     vector<int> x(n), y(n);
//     rep(i, n) cin >> x[i] >> y[i];
//     vector<int> city(n);
//     rep(i, n) city[i] = i;

//     double sum = 0, cnt = 0;

//     do {
//         for (int i = 0; i < n-1; i++) {
//             sum += sqrt((x[city[i]] - x[city[i+1]]) * (x[city[i]] - x[city[i+1]]) + (y[city[i]] - y[city[i+1]]) * (y[city[i]] - y[city[i+1]]));
//         }
//         cnt++;       
//     } while (next_permutation(city.begin(), city.end()));
//     printf("%.10lf\n", sum / cnt);
//     return 0;
// }