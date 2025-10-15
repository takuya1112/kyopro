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
    int D;
    cin >> D;
    printf("Christmas");
    int c = 25 - D;
    rep(i, 0, c) printf(" Eve");
    printf("\n");
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

// int main() {
//     int D;
//     cin >> D;

//     if (D == 25) cout << "Christmas" << endl;
//     else if (D == 24) cout << "Christmas Eve" << endl;
//     else if (D == 23) cout << "Christmas Eve Eve" << endl;
//     else if (D == 22) cout << "Christmas Eve Eve Eve" << endl;
//     return 0;
// }