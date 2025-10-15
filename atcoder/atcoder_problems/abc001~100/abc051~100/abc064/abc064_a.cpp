#include <iostream>
using namespace std;

int main(){
    int r, g, b, check;
    cin >> r >> g >> b;
    check = r * 100 + g * 10 + b;
    if (check % 4 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}




// #include <iostream>
// using namespace std;

// int main(){
//     string r, g, b;
//     int check;
//     cin >> r >> g >> b;
//     check = stoi(r + g + b);
//     if (check % 4 == 0) cout << "YES" << endl;
//     else cout << "NO" << endl;
//     return 0;
// }