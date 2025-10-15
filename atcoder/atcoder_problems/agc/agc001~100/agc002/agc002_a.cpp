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
    int a, b;
    cin >> a >> b;

    if (a <= 0 && 0 <= b) cout << "Zero" << endl;
    else if (0 < a) cout << "Positive" << endl;
    else if (b < 0) {
        int c = b - a + 1;
        if (c % 2 == 0) cout << "Positive" << endl;
        else cout << "Negative" << endl;
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

// int main() {
//     int a, b;
//     cin >> a >> b;

//     if ((a <= 0 && b > 0) || a == 0 || b == 0) {
//         cout << "Zero" << endl;
//     } else if (a > 0 && b > 0) {
//         cout << "Positive" << endl;
//     } else {
//         int c = abs(a - b) + 1;
//         if (c % 2) cout << "Negative" << endl;
//         else cout << "Positive" << endl;
//     }
//     return 0;
// }