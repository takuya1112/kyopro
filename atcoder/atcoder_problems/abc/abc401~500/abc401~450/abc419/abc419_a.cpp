#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    string S;
    cin >> S;
    if (S == "red") cout <<  "SSS"<< endl;
    else if (S == "blue") cout << "FFF" << endl;
    else if (S == "green") cout << "MMM" << endl;
    else cout << "Unknown" << endl;
    return 0;
}