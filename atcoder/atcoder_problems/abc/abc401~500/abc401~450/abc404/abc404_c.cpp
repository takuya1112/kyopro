#include <iostream>
#include <vector>
#include <atcoder/all>
using namespace atcoder;
using namespace std;

int main(){
    int n, m; 
    cin >> n >> m;
    vector<int> deg(n);
    dsu uf(n);
    for (int i = 0; i < m; i++){
        int a, b; 
        cin >> a >> b;
        --a; --b;
        deg[a]++;
        deg[b]++;
        uf.merge(a,b);
    }

    if (deg == vector<int>(n,2) and uf.size(0) == n){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}