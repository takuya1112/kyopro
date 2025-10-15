#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    int N, M;
    cin >> N;
    string S[101], T[101];
    for (int i = 0; i < N; i++) cin >> S[i];
    cin >> M;
    for (int i = 0; i < M; i++) cin >> T[i];
    
    int ans = 0;
    for (int j = 0; j < N; j++){
        int point = 0;
        for (int i = 0; i < N; i++) if (S[i] == S[j]) point ++;
        for (int i = 0; i < M; i++) if (T[i] == S[j]) point --;
        ans = max(ans, point);
    }
    cout << ans << endl;
    return 0;
}


// int main(){
//     int N;
//     cin >> N;
//     map <string, int> blue_cards;
//     for (int _ = 0; _ < N; _++){
//         string s;
//         cin >> s;
//         blue_cards[s] ++;
//     }
    
//     int M;
//     cin >> M;
//     map <string, int> red_cards;
//     for (int _ = 0; _ < M; _++){
//         string t;
//         cin >> t;
//         red_cards[t] ++;
//     }

//     int ans = 0;
//     for (const auto& pair : blue_cards){
//         int b_num = blue_cards[pair.first];
//         int r_num = red_cards[pair.first];
//         if (b_num - r_num > ans) ans = b_num - r_num;
//     }
//     cout << ans << endl;
//     return 0;
// }