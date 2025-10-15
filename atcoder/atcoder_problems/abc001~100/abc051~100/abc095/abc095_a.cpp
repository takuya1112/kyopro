#include <iostream>
using namespace std;

int main(){
    string S;
    cin >> S;
    int ans = 700;
    for (int i = 0; i < 3; ++i){
        if (S[i] == 'o') ans += 100;
    }
    cout << ans << endl;
    return 0;
}