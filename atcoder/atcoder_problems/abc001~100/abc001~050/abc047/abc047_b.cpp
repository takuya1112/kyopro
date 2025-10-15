#include <iostream>
#include <vector>
using namespace std;

int main(){
    int W, H, N, x, y, a;
    cin >> W >> H >> N;

    int left_x = 0, right_x = W, down_y = 0, up_y = H;
    for (int _ = 0; _ < N; _++){
        cin >> x >> y >> a;
        if (a == 1) left_x = max(left_x, x);
        else if (a == 2) right_x = min(right_x, x);
        else if (a == 3) down_y = max(down_y, y);
        else up_y = min(up_y, y);
    }
    if (right_x >= left_x and up_y >= down_y) cout << (right_x - left_x) * (up_y - down_y) << endl;
    else cout << 0 << endl;
    return 0;
}



// int main(){
//     int W, H, N;
//     cin >> W >> H >> N;
//     vector<vector<bool>> coordinates(H, vector<bool>(W, true));

//     for (int i = 0; i < N; i++){
//         int x, y, a;
//         cin >> x >> y >> a;
//         if (a == 1){
//             for (int j = 0; j < H; j++){
//                 for (int k = 0; k < x; k++) coordinates[j][k] = false;
//             }
//         }else if (a == 2){
//             for (int j = 0; j < H; j++){
//                 for (int k = x; k < W; k++) coordinates[j][k] = false;
//             }
//         }else if (a == 3){
//             for (int j = 0; j < y; j++){
//                 for (int k = 0; k < W; k++) coordinates[j][k] = false;
//             }
//         }else {
//             for (int j = y; j < H; j++){
//                 for (int k = 0; k < W; k++) coordinates[j][k] = false;
//             }
//         }
//     }
//     int ans = 0;
//     for (int i = 0; i < H; i++) for (int j = 0; j < W; j++){
//         if (coordinates[i][j]) ans ++;
//     }
//     cout << ans << endl;
//     return 0;
// }