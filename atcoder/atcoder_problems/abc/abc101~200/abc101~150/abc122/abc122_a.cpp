#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    char c, res;
    cin >> c;
    if (c == 'A') res = 'T';
    else if (c == 'T') res = 'A';
    else if (c == 'C') res = 'G';
    else res = 'C';
    cout << res << endl;
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,n) for (int i = 0; i < (n); ++i)

// int main() {
//     char b;
//     cin >> b;
//     if (b == 'A') cout << 'T' << endl;
//     if (b == 'T') cout << 'A' << endl;

//     if (b == 'C') cout << 'G' << endl;
//     if (b == 'G') cout << 'C' << endl;

//     return 0;
// }