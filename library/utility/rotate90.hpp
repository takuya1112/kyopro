#pragma once
#include <vector>
#include <string>

template<typename T>
std::vector<std::vector<T>> right_rot90(const std::vector<std::vector<T>>& array) {
    int H = array.size();
    int W = array[0].size();
    std::vector<std::vector<T>> nxt(W, std::vector<T>(H));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            nxt[j][H - 1 - i] = array[i][j];
        }
    }
    return nxt;
}

std::vector<std::string> right_rot90(const std::vector<std::string>& array) {
    int H = array.size();
    int W = array[0].size();

    std::vector<std::string> nxt(W, std::string(H, ' '));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            nxt[j][H - 1 - i] = array[i][j];
        }
    }
    return nxt;
}


/** 
 * right rotate 90
 * 
 * 配列を右に90度回転させる
 * 
 * Verified: 
 * - https://atcoder.jp/contests/adt_medium_20251224_1/tasks/abc298_b
 * - https://atcoder.jp/contests/abc404/tasks/abc404_b
 * 
 * Operations:
 * - right_rot90(array): 配列を右に90度回転させて返す
*/


//------------------------------//
// Usage Examples
//------------------------------//

// Example 1: Basic Usage
// int main() {
    // 配列の構造
    // 0 1 1 0 
    // 1 0 0 1 
    // 0 1 0 0 
    // vector<vector<int>> array(3, vector<int>(4));
    // array[0] = {0, 1, 1, 0};
    // array[1] = {1, 0, 0, 1};
    // array[2] = {0, 1, 0, 0};

    // array = right_rot90(array);
    // for (int i = 0; i < array.size(); i++) {
    //     for (int j = 0; j < array[i].size(); j++) {
    //         cout << array[i][j] << ' ';
    //     } cout << endl;
    // }
    // 0 1 0 
    // 1 0 1 
    // 0 0 1 
    // 0 1 0 
// }

// Example 2: Atcoder abc298_b
// https://atcoder.jp/contests/adt_medium_20251224_1/tasks/abc298_b
// int main() {
//     int N;
//     cin >> N;

//     vector<vector<int>> A(N, vector<int>(N)), B(N, vector<int>(N));
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             cin >> A[i][j];
//         }
//     }

//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             cin >> B[i][j];
//         }
//     }

//     for (int qi = 0; qi < 4; qi++) {
//         bool ok = true;;
//         for (int i = 0; i < N; i++) {
//             for (int j = 0; j < N; j++) {
//                 if (A[i][j] == 1 && B[i][j] == 0) {
//                     ok = false;
//                 }
//             }
//         }

//         if (ok) {
//             cout << "Yes" << endl;
//             return 0;
//         }

//         A = right_rot90(A);
//     }
//     cout << "No" << endl;
// }