#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    string S;
    cin >> S;
    int n = S.size();
    vector<string> v(n);
    rep(i,n){
        v[i] = S.substr(i, n - i) + S.substr(0, i);
    }
    cout << *min_element(v.begin(), v.end()) << endl;
    cout << *max_element(v.begin(), v.end()) << endl;
}