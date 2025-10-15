#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int N, A[101];
    cin >> N;
    for (int i = 0; i < N; i++) cin >> A[i];
    sort(A, A + N, greater<int>());

    int v[2] = {0 , 0};
    for (int i = 0; i < N; i++){
        v[i % 2] += A[i];
    }
    int ans = v[0] - v[1];
    cout << ans << endl;
    return 0;
}





// int main (){
//     int N,a;
//     cin >> N;
//     vector<int> A;
//     for (int i = 0; i < N; i++){
//         cin >> a;
//         A.push_back(a);
//     };
//     sort(A.begin(), A.end());
//     reverse(A.begin(), A.end());

//     int Alice = 0, Bob = 0;
//     for (int i = 0; i < N; i++){
//         if (i % 2 == 0) Alice += A[i];
//         else Bob += A[i];
//     }
//     cout << Alice - Bob << endl;
//     return 0;
// }