#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    string s;
    cin >> s;
    string ans = "";
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '0') ans += '0';
        else if (s[i] == '1') ans += '1';
        else if (ans.size()) ans.pop_back();
    }
    cout << ans << endl;
    return 0;
}