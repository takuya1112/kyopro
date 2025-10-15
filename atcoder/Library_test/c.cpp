#include <bits/stdc++.h>
#include <atcoder/math>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long N, M, A, B;
        cin >> N >> M >> A >> B;
        cout << atcoder::floor_sum(N, M, A, B) << endl;
    }
}