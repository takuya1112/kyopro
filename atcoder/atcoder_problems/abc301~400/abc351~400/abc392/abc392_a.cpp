#include <iostream>

using namespace std;

int main(){
    int A1, A2, A3;
    cin >> A1 >> A2 >> A3;
    if (A1 * A2 == A3 or A2 * A3 == A1 or A1 * A3 == A2){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}