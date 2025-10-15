#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>> c(3, vector<int>(3));
    for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) cin >> c[i][j];

    
    vector<int> a(3);
    vector<int> b(3);
    a[0] = 0;
    for (int i = 0; i < 3; i++) b[i] = c[0][i] - a[0];
    for (int i = 0; i < 3; i++) a[i] = c[i][0] - b[0];

    bool check = true;
    for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++){
        if (a[i] + b[j] != c[i][j]) check = false;
    }

    if (check) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}

// int main(){
//     vector <vector<int>> c_list(3, vector<int>(3));
//     for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) cin >> c_list[i][j];

//     bool check = true;
//     for (int i = 0; i < 2; i++){
//         vector<int> row;
//         vector<int> column;
//         for (int j = 0; j < 3; j++){
//             row.push_back(c_list[j][i] - c_list[j][i+1]);
//             column.push_back(c_list[i][j] - c_list[i+1][j]);
//         }
//         if (row[0] != row[1] or row[1] != row[2]) check = false;
//         if (column[0] != column[1] or column[1] != column[2]) check = false;
//     }

    
//     if (check) cout << "Yes" << endl;
//     else cout << "No" << endl;
//     return 0;
// }