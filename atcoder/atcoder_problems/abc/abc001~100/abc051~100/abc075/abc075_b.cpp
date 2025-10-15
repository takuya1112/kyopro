#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int H, W;
    cin >> H >> W;
    vector<string> S(H);
    for (int i = 0; i < H; i++) cin >> S[i];

    for (int y = 0; y < H; y++) for (int x = 0; x < W; x++){
        if (S[y][x] == '.'){
            int check = 0;
            for (int dx = -1; dx < 2; dx++) for (int dy = -1; dy < 2; dy++){
                if (dx == 0 and dy == 0) continue;
                int xx = x + dx;
                int yy = y + dy;
                if (0 <= xx and xx < W and 0 <= yy and yy < H){
                    if (S[yy][xx] == '#') check ++;
                }
            }
            S[y][x] = char('0' + check);
        }
    }
    for (int i = 0; i < H; i++) cout << S[i] << endl;
    return 0; 
}