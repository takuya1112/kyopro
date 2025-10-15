#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int x = x2, y = y2;
    int dx = x2 - x1;
    int dy = y2 - y1;
    rep(i, 0, 2) {
        swap(dx, dy);
        dx = -dx;
        x += dx;
        y += dy;
        cout << x << ' ' << y << ' ';
    } cout << '\n';
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
//     int x1, y1, x2, y2;
//     cin >> x1 >> y1 >> x2 >> y2;
//     int diff_x = x2 - x1, diff_y = y2 - y1;
//     cout << x2 - diff_y << ' ' << y2 + diff_x << ' ';
//     cout << x1 - diff_y << ' ' << y1 + diff_x << endl;
//     return 0;
// }