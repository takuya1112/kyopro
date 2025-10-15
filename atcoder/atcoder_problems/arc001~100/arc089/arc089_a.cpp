#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N; 
    cin >> N;
    vector <int> t(N+1), x(N+1), y(N+1);
    t[0] = x[0] = y[0] = 0;
    for (int i = 1; i <= N; i++) cin >> t[i] >> x[i] >> y[i];

    bool can_go = true;
    for (int i = 0; i < N; i++){
        int time_dif = t[i+1] - t[i];
        int go_to = abs(x[i] - x[i+1]) + abs(y[i] - y[i+1]);
        if (time_dif % 2 != go_to % 2 or go_to > time_dif) can_go = false;  
    }
    if (can_go) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}