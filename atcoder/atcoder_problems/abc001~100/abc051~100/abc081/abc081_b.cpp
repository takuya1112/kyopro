#include <iostream>
using namespace std;

int main(){
    int N, ans = 0;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) cin >> A[i];
    while(1){
        for (int i = 0; i < N; i++){
            if (A[i] % 2 == 0) A[i] /= 2;
            else{
                cout << ans << endl;
                return 0;
            }
        }
        ans += 1;
    }
}