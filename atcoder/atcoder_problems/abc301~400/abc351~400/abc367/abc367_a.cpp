#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if ((a - b) * (b - c) * (c - a) > 0) cout << "Yes" << endl;
    else cout << "No" << endl;
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

// int main() {
//     int a, b, c; cin >> a >> b >> c;
//     if (b < c) {
//         if (b < a && a < c) cout << "No" << endl;
//         else cout << "Yes" << endl;
//     } else {
//         if (b > a && a > c) cout << "Yes" << endl;
//         else cout << "No" << endl;
//     }
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

// int main() {
//     int a, b, c; cin >> a >> b >> c;
//     while (b != c) {
//         if (b == a) {
//             cout << "No" << endl;
//             return 0;
//         }
//         b++;
//         b %= 24;
//     }
//     cout << "Yes" << endl;
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

// int main() {
//     int A, B, C; cin >> A >> B >> C;
//     if (B > C) {
//         if (A < B && C < A) cout << "Yes" << endl;
//         else cout << "No" << endl;
//     } else {
//         if (A < C && B < A) cout << "No" << endl;
//         else cout << "Yes" << endl;
//     }
//     return 0;
// }