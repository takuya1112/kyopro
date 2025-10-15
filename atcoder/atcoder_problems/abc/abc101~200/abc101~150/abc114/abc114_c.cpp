#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2;

int N;
int ans = 0;

bool check(ll x) {
    if (x > N or x < 100) return false;
    set<int> st;
    while (x) {
        st.insert(x % 10);
        x /= 10;
    }
    
    if (st.size() == 3) return true;
    else return false;
}

void dfs(ll x) {
    if (check(x)) ans++;
    if (x <= pow(10, 9)) {
        dfs(10 * x + 3);
        dfs(10 * x + 5);
        dfs(10 * x + 7);
    }
}

int main() {
    cin >> N;
    dfs(0);
    cout << ans << endl;
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i = a; i >= b; i--)
// #define all(x) (x).begin(),(x).end()
// typedef long long ll;

// int N;
// const int ALL = (1 << 3) - 1; 
// int ans = 0;

// void f(ll x, int flag) {
//     if (x > N) return;
//     if (flag == ALL) ans++;
//     f(x * 10 + 3, flag | 1);
//     f(x * 10 + 5, flag | 1 << 1);
//     f(x * 10 + 7, flag | 1 << 2);
// }

// int main() {
//     cin >> N;
//     f(0, 0);
//     cout << ans << endl;
//     return 0;
// }