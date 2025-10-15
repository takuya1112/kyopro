#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
typedef long long ll; const int inf = INT_MAX / 2;

int main() {
    int n, t;
    cin >> n >> t;
    vector<ll> s(n);

    unordered_map<ll, int> mp;
    mp[0] = n;

    auto add = [&](ll x, int num) {
        mp[x] += num;
        if (mp[x] == 0) mp.erase(x);
    };

    rep(i, 0, t) {
        int a, b;
        cin >> a >> b;
        a--;
        add(s[a], -1);
        s[a] += b;
        add(s[a], 1);
        cout << mp.size() << '\n';
    }
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
// #define rep(i,a,b) for(int i = a; i < b; i++)
// #define rrep(i,a,b) for(int i = a; i >= b; i--)
// #define all(x) (x).begin(),(x).end()
// #define rall(x) (x).rbegin(),(x).rend()
// typedef long long ll; const int inf = INT_MAX / 2;

// int main() {
//     int N, T;
//     cin >> N >> T;

//     vector<ll> S(N);

//     map<ll, int> mp;
//     rep(i, 0, N) mp[S[i]]++;

//     rep(i, 0, T) {
//         int a, b;
//         cin >> a >> b;
//         a--;
//         mp[S[a]]--;
//         if (mp[S[a]] == 0)mp.erase(S[a]);
//         S[a] += b;
//         mp[S[a]]++;
//         cout << mp.size() << endl;
//     }
//     return 0;
// }