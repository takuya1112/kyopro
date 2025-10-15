#include <iostream>
using namespace std;

int main(){
    int N, Y;
    cin >> N >> Y;
    for (int x = 0; x <= N; x++){
        for (int y = 0; y <= N; y++){
            int z = N - x - y;
            if (z >= 0){
                long long total = x * 10000LL + y * 5000LL + z * 1000LL;
                if (total == Y){
                    cout << x << " " << y << " " << z << endl;
                    return 0;
                } 
            }
        }
    }
    cout << "-1 -1 -1" << endl;
    return 0;
}


// int main (){
//     int N, Y;
//     cin >> N >> Y;
//     Y /= 1000;
//     for (int y = 0; y <= Y/5; y++){
//         for (int x = 0; x <= Y/10; x++){
//             int z = Y - ((10 * x) + (5 * y));
//             if (x + y + z == N and z >= 0) {
//                 cout << x << " " << y << " " << z << endl; 
//                 return 0;
//             }
//         }
//     }
//     cout << "-1 -1 -1" << endl;
//     return 0;
// }