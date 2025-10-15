#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N, mx = 0, mn = 1000000000;
    cin >> N;
    int A[200];
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < N; i++){
        if (A[i] > mx) mx = A[i];
        if (A[i] < mn) mn = A[i];
    }
    cout << mx - mn << endl;
    return 0;
}