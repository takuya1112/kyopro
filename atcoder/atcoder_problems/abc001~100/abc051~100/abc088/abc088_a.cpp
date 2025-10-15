#include <iostream>
using namespace std;

int main(){
    int N, A;
    cin >> N >> A;
    int check = N % 500;
    if (check > A) cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
}