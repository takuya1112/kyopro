#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int L[N];
    for (int i = 0; i < N; i++) cin >> L[i];
    int ans = 0;
    for (int i = 0; i < N - 2; i++){
        for (int j = i + 1; j < N - 1; j++){
            for (int k = j + 1; k < N; k++){
                int a = L[i], b = L[j], c = L[k];
                if (a != b and a != c and b != c){
                    if (a < b + c and b < a + c and c < a + b) ans += 1;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}