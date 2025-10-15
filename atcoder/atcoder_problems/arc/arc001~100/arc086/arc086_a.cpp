#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, K; 
    cin >> N >> K;
    vector<int> A(N, 0);
    for (int _ = 0; _ < N; _++){
        int a;
        cin >> a;
        A[a - 1] += 1;
    }

    sort(A.begin(), A.end());
    
    int ans = 0;
    for (int i = 0; i < A.size() - K; i++){
        ans += A[i];
    }
    cout << ans << endl;
    return 0;
}





// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(){
//     int N, K; 
//     cin >> N >> K;
//     vector<int> A(N, 0);
//     for (int _ = 0; _ < N; _++){
//         int a;
//         cin >> a;
//         A[a - 1] += 1;
//     }

//     sort(A.begin(), A.end(), greater<int>());
    
//     int ans = 0;
//     for (int i = K; i < A.size(); i++){
//         ans += A[i];
//     }
//     cout << ans << endl;
//     return 0;
// }