#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
typedef long long ll; const int inf = INT_MAX / 2;
#define pint pair<int, int>

const int dy[4] = {0, 0, -1, 1};
const int dx[4] = {1, -1, 0, 0};
struct Coord {
    int dir[4] = {0};
};

enum Direction {RIGHT, LEFT, UP, DOWN, SIZE};

int N, ti, tj;
vector<string> b;
vector<vector<bool>> revealed;

int canReach(int pi, int pj) {
    vector<vector<int>> visited(N, vector<int>(N, -1));
    queue<pint> que;
    visited[pi][pj] = 0;
    que.push({pi, pj});

    while (!que.empty()) {
        auto [y, x] = que.front(); que.pop();
        if (y == ti && x == tj) return visited[y][x];
        rep(i, 0, 4) {
            int y2 = y + dy[i], x2 = x + dx[i];
            if (y2 < 0 || y2 >= N || x2 < 0 || x2 >= N) continue;
            if (b[y2][x2] == 'T') continue;
            if (visited[y2][x2] != -1) continue;
            visited[y2][x2] = visited[y][x] + 1;
            que.push({y2, x2});
        }
    }
    return 0;
}

Coord count(int pi, int pj) {
    Coord cnt;
    vector<bool> done(4, false);
    int m = 1;
    while (1) {
        bool ok = false;
        rep(i, 0, SIZE) {
            if (done[i]) continue;
            int y = pi + (dy[i] * m), x = pj + (dx[i] * m);
            if (y < 0 || y >= N || x < 0 || x >= N) continue; 

            ok = true;
            cnt.dir[i]++;
            if (b[y][x] == 'T' || revealed[y][x]) {
                cnt.dir[i] = m - 1;
                done[i] = true;
            } 
        }
        if (ok) m ++;
        else break;
    }
    return cnt;
}


int main() {
    cin >> N >> ti >> tj;

    b.resize(N);
    rep(i, 0, N) cin >> b[i];
    revealed.resize(N, vector<bool>(N));
    

    int n, pi, pj;
    auto getInfo = [&]() -> void {
        cin >> pi >> pj >> n;
        rep(i, 0, n) {
            int y, x;
            cin >> y >> x;
            revealed[y][x] = true;
        }
    };


    auto makeBarrier = [&]() -> vector<pint> {
        Coord cnt = count(pi, pj);
        vector<pair<int, pint>> res;
        rep(i, 0, SIZE) {
            int dist = cnt.dir[i];
            int best = 0;
            pint a = {-1, -1}; 
            if (dist <= 1) continue;
            rep(m, 1, min(3, dist + 1)) {
                int y = pi + (dy[i] * m), x = pj + (dx[i] * m);
                b[y][x] = 'T';
                int c = canReach(pi, pj);
                b[y][x] = '.';
                if (c > best) {
                    a = {y, x}; 
                    best = c;
                } 
            }
            if (a.first != -1) res.push_back({best, a});
        }

        sort(rall(res));
        vector<pint> ans;
        rep(i, 0, res.size()) {
            pint a = res[i].second;
            int y = a.first, x = a.second;
            b[y][x] = 'T';
            if (canReach(pi, pj)) {
                ans.push_back(a);  
            } else b[y][x] = '.';
        }

        // b[pi][pj] = 'P';
        // rep(i, 0, N) {
        //     rep(j, 0, N) {
        //         cout << b[i][j] << ' ';
        //     }
        //     cout << endl;
        // }
        // b[pi][pj] = '.';
        return ans;
    };

    int cnt = 0;
    while (1) {
        getInfo();
        if (pi == ti && pj == tj) break;

        vector<pint> ans = makeBarrier(); 
        if (cnt == 0) {
            rep(i, 0, 4) {
                int y = dy[i] + ti, x = dx[i] + tj;
                if (y < 0 || y >= N || x < 0 || x >= N) continue;
                if (b[y][x] == 'T') continue;
                b[y][x] = 'T';
                if (canReach(pi, pj)) ans.push_back({y, x});
                else b[y][x] = '.';
            }
        }
        if (!ans.empty()) {
            cout << ans.size();
            rep(i, 0, ans.size()) cout << ' ' << ans[i].first << ' ' << ans[i].second;
        } else cout << 0;
        cout << '\n' << flush;
        cnt++;
    }
    return 0;
}