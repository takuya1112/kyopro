#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main (){
    int H, W; 
    cin >> H >> W;
    int Si, Sj; 
    cin >> Si >> Sj;
    Si--; Sj--;
    vector<vector<char>> C(H, vector<char>(W));
    for (int i = 0; i < H; i++) for (int j = 0; j < W; j++) cin >> C[i][j];
    string X; 
    cin >> X;
    for (char o : X){
        int ni = Si, nj = Sj;
        if (o == 'L') nj--;
        else if (o == 'R') nj++;
        else if (o == 'U') ni--;
        else ni++;
        if (0 <= ni and ni < H and 0 <= nj and nj < W and C[ni][nj] == '.'){
            Si = ni; Sj = nj;
        }
    }
    cout << Si +1 << " " << Sj + 1 << endl;
    return 0;
}