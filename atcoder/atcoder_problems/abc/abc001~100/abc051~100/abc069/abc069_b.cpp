#include <iostream>
using namespace std;

int main(){
    string S, ans;
    cin >> S;
    int N = S.size();
    cout << S[0] << N - 2 << S.back() << endl;
}