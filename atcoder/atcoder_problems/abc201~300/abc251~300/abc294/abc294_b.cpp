#include <iostream>
#include <string>
using namespace std;

int main(){
    int H, W;
    cin >> H >> W;
    for (int i = 0; i < H; i++){
        string S(W, '.');
        for (int j = 0; j < W; j++){
            int x;
            cin >> x;
            if (x != 0) S[j] = 'A' + x - 1;
        }
        cout << S << endl;
    }
    return 0;
}