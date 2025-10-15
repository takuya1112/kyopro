#include <iostream>
#include <string>
using namespace std;


int main(){
    string S;
    cin >> S;
    bool check[26];
    for (int i = 0; i < 26; i++) check[i] = false;

    for (int i = 0; i < S.size(); i++){
        check[S[i] - 'a'] = true;
    }
    for (int i = 0; i < 26; i++){
        if (!check[i]){
            char j = i + 'a';
            cout << j << endl;
            return 0; 
        }
    }
    cout << "None" << endl;
    return 0;
}

// int main(){
//     string S;
//     cin >> S;
//     int S_list[26] = {0};

//     for (int i = 0; i < S.size(); i++){
//         int j = S[i] - 'a';
//         S_list[j] += 1;
//     }
//     for (int i = 0; i < 26; i++){
//         if (S_list[i] == 0) {
//             char j = i + 'a';
//             cout << j << endl;
//             return 0;
//         }
//     }
//     cout << "None" << endl;
//     return 0;
// }