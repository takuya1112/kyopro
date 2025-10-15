#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


vector<string> add_list = {"dream", "dreamer", "erase", "eraser"};

int main(){
    string S;
    cin >> S;
    reverse(S.begin(), S.end());

    for (int i = 0; i < 4; i++) reverse(add_list[i].begin(), add_list[i].end());

    bool can = true;
    for (int i = 0; i < S.size();){
        bool can2 = false;
        for (int j = 0; j < 4; j++){
            string d = add_list[j];
            if (S.substr(i, d.size()) == d){
                can2 = true;
                i += d.size();
            }
        }
        if (!can2){
            can = false;
            break;
        }
    }
    if (can) cout << "YES" << endl;
    else cout << "NO" << endl;
}



// int main(){
//     string S;
//     cin >> S;
//     vector<string> add_list = {"dream", "dreamer", "erase", "eraser"};
//     string s, T;
//     for (int i = S.size()-1; 0 <= i; i--){
//         s.insert(0, 1, S[i]);
//         auto check = find(add_list.begin(), add_list.end(), s);
//         if (check != add_list.end()){T = s + T; s = "";}
//     }

//     if (S == T)cout << "YES" << endl;
//     else cout << "NO" << endl;
    
//     return 0;
// }