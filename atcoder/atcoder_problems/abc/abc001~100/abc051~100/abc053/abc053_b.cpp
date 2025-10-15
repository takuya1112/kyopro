#include <iostream>
#include <string>
using namespace std;

int main(){
    string S;
    cin >> S;
    int A = 300000, Z = -1;
    for (int i = 0; i < S.size(); i++){
        if (S[i] == 'A' and i < A) A = i;
        else if (S[i] == 'Z' and i > Z) Z = i;
    }
    cout << Z - A + 1 << endl;
    return 0;
}