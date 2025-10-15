#include <iostream>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 == "fine"){
        if (s2 == "fine") cout << 4 << endl;
        else cout << 3 << endl;
    }else {
        if (s2 == "fine") cout << 2 << endl;
        else cout << 1 << endl;
    }
    return 0;
}



    // int main(){
    //     string S1, S2;
    //     cin >> S1 >> S2;
    //     if (S1 == "fine" and S2 == "fine"){
    //         cout << 4 << endl;
    //     }else if (S1 == "sick" and S2 == "sick"){
    //         cout << 1 << endl;
    //     }else if (S1 == "fine" and S2 == "sick"){
    //         cout << 3 << endl;
    //     }else{
    //         cout << 2 << endl;
    //     }
    //     return 0;
    // }