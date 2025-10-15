#include <iostream>
#include <string>
using namespace std;

bool check (const string &S){
    int N = S.size();
    if (N % 2 == 1) return false;

    for (int i = 0; i < N / 2; i++){
        if (S[i] != S[i + N / 2]) return false;
    }
    return true;
}

int main(){
    string S;
    cin >> S;

    int ans = 0;
    for (int i = 1; i < S.size(); i++){
        string sub = S.substr(0,i);
        if (check(sub)) ans = max(ans, i);
    }
    cout << ans << endl;
    return 0;
}