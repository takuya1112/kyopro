#include <iostream>
#include <vector>
using namespace std;

int main (){
    int N, M;
    cin >> N >> M;
    vector<int> A_B_roads(N, 0);

    for (int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;
        A_B_roads[a - 1] += 1;
        A_B_roads[b - 1] += 1;
    }
    for (int i = 0; i < N; i++) cout << A_B_roads[i] << endl;
    return 0; 
}