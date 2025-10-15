#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define ll long long

const char mother_tongue[5] = {'a', 'i', 'u', 'e', 'o'};

int main() {
    string W;
    cin >> W;
    string result = "";
    rep(i, W.size()) {
        bool ok = true;
        rep(j, 5) {
            if (W[i] == mother_tongue[j])  ok = false;
        }
        if (ok) result += W[i];
    }
    cout << result << endl;
    return 0;
}