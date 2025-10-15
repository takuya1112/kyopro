#include <iostream>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    int ans = 0;
    for (int i = A; i <= B; i++){
        int first = i % 10;
        int second = i / 10 % 10;

        int fourth = i / 1000 % 10;
        int fifth = i / 10000 % 10;
        if (first == fifth and second == fourth) ans ++;
    }
    cout << ans << endl;
    return 0;
}




// int main (){
//     int A, B;
//     cin >> A >> B;
//     int ans = 0;
//     for (int i = A; i <= B; i++){
//         int j = i;
//         int LOOP_LIST[5];
//         for (int k = 0; k < 5; k++){
//             LOOP_LIST[k] = j % 10;
//             j /= 10;
//         }
//         if (LOOP_LIST[0] == LOOP_LIST[4] and LOOP_LIST[1] == LOOP_LIST[3]) ans++;
//     }
//     cout << ans << endl;
//     return 0;
// }