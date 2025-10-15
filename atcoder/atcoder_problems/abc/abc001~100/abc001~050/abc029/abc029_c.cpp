#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll;

void f(int rest, string s) {
    if (rest == 0) {
        cout << s << endl;
    } else {
        for (char c = 'a'; c <= 'c'; c++) {
            f(rest - 1, s + c);
        }
    }
}

int main() {
    int N; cin >> N;
    f(N, "");
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

// int N;
// char abc[3] = {'a', 'b', 'c'};

// void make_password(string password, int cnt) {
//     if (cnt == N) {
//         cout << password << endl;
//         return;
//     }
//     rep(i, 0, 3) {
//         make_password(password + abc[i], cnt +1);
//     }

// }

// int main() {
//     cin >> N;
//     make_password("", 0);
//     return 0;
// }