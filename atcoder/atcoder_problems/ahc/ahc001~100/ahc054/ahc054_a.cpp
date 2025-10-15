#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define pint pair<int, int>
typedef long long ll; const int inf = INT_MAX / 2;
enum Direction {UP, DOWN, LEFT, RIGHT, SIZE};

int N, ti, tj;
vector<string> b;
vector<vector<bool>> revealed;

const int MX = 6;
const int BEAM_WIDTH = 3, BEAM_DEPTH = 10;

struct Coord {
    int y_;
    int x_;
};

class ForestState {
    private:
        static constexpr int dy[4] = {-1, 1, 0, 0};
        static constexpr int dx[4] = {0, 0, -1, 1};
        
        vector<string> b_;
        vector<vector<bool>> revealed_;
        
    public:
    Coord player_;
    int game_socre_ = 0;
    int evaluated_score_ = 0;
    vector<int> first_action_ = vector<int>(SIZE, -1);

    ForestState(){}

    ForestState(int N, vector<string> b) {
      b_ = b;
      revealed_ = vector<vector<bool>>(N, vector<bool> (N, false));  
    }
    
    bool isDone() {
        int y = player_.y_, x = player_.x_; 
        return y == ti && x == tj;
    }

    bool inForest(int y, int x) {
        return (x < 0 || x >= N || y < 0 || y >= N); 
    }

    void evaluateScore() {
        this->evaluated_score_ = this->game_socre_;
    }

    void advance(vector<int> actions) {
        int y = this->player_.y_, x = this->player_.x_;
        rep(i, 0, SIZE) {
            if (actions[i] == 0) continue;
            int y2 = y + dy[i] * actions[i];
            int x2 = x + dx[i] * actions[i];
            this->b_[y2][x2] = 'T';
        }
        rep(i, 0, SIZE) {
            int y2 = y + dy[i];
            int x2 = x + dx[i];
            if (inForest(y2, x2)) continue;
            if (b_[y2][x2] == 'T') continue;
            this->player_.y_ = y2;
            this->player_.x_ = x2;
            break;
        }
    }

    void putTree (vector<int> tree, int action = 0) {
        int y = player_.y_, x = player_.x_;
        rep(i, 0, SIZE) {
            if (tree[i] == 0) continue;
            int y2 = y + dy[i] * tree[i], x2 = x + dx[i] * tree[i];
            if (action) b_[y2][x2] = 'T';
            else b_[y2][x2] = '.';
        }
    }

    int culuculate() {
        vector<vector<int>> visited(N, vector<int>(N));
        queue<pint> que;
        int y = player_.y_, x = player_.x_;
        visited[y][x] = 0;
        que.push({y, x});

        while (!que.empty()) {
            auto [y, x] = que.front(); que.pop();
            rep(i, 0, SIZE) {
                int y2 = y + dy[i], x2 = x + dx[i];
                if (inForest(y2, x2)) continue;
                if (visited[y2][x2]) continue;
                if (b_[y2][x2] == 'T') continue;
                visited[y2][x2] = visited[y][x] + 1;
                que.push({y2, x2});
            }
        }

        this->game_socre_ = visited[ti][tj];
        return visited[ti][tj];
    }

    vector<int> legalAction() {

        vector<int> actions(SIZE);
        vector<bool> done(SIZE, false);
        int cnt = 1;
        while (1) {
            bool ok = false;
            rep(i, 0, SIZE) {
                if (cnt == MX) continue;
                if (done[i]) continue;
                int y = player_.y_ + dy[i] * cnt, x = player_.x_ + dx[i] * cnt;
                if (inForest(y, x)) continue;
                ok = true;
                actions[i] ++;

                if (b_[y][x] == 'T' || revealed_[y][x]) {
                    actions[i] = cnt - 1;
                    done[i] = true;
                }
            }
            if (ok) cnt++;
            else break;
        }
        return actions;
    }


    void getInfo() {
        int n, pi, pj;
        cin >> pi >> pj >> n;
        player_.y_ = pi, player_.x_ = pj;
        rep(i, 0, n) {
            int y, x;
            cin >> y >> x;
            revealed_[y][x] = true;
        }
    }

    void print(vector<int> actions) {        
        int cnt = 0;
        rep(i, 0, actions.size()) if (actions[i] != 0) cnt++;
        cout << cnt;

        int y = this->player_.y_, x = this->player_.x_;
        rep(i, 0, SIZE) {
            if (actions[i] == 0) continue;
            cout << ' ' << y + actions[i] * dy[i] << ' ' << x + actions[i] * dx[i];
        }
        cout << '\n' << flush;

        b_[y][x] = 'P';
        rep(i, 0, N) {
            rep(j, 0, N) {
                cout << b_[i][j] << ' ';
            }
            cout << endl;
        }
        b_[y][x] = '.';
    }
};

bool operator<(const ForestState &maze_1, const ForestState &maze_2) {
    return maze_1.evaluated_score_ < maze_2.evaluated_score_;
}

vector<vector<int>> makePair(vector<int> legal_actions) {
    vector<vector<int>> pair;
    vector<int> move(SIZE, 0);
    auto f = [&] (auto f, int cnt) -> void {
        if (cnt == SIZE) {
            pair.push_back(move);
            return;
        }

        rep(i, 0, legal_actions[cnt] + 1) {
            move[cnt] = i;
            f(f, cnt + 1);
            move[cnt] = 0;
        }
    };
    f(f, 0);
    return pair;
}

vector<int> beamSerach(ForestState &state, int beam_width, int beam_depth) {
    priority_queue<ForestState> now_beam;
    ForestState best_state;
    
    now_beam.push(state);
    rep(t, 0, beam_depth) {
        priority_queue<ForestState> next_beam;
        rep (i, 0, beam_width) {
            if (now_beam.empty()) break;
            ForestState now_state = now_beam.top(); 
            now_beam.pop();
            
            vector<int> legal_actions = now_state.legalAction();
            vector<vector<int>> pair = makePair(legal_actions);
            rep(j, 0, pair.size()) {
                ForestState next_state = now_state;
                next_state.putTree(pair[j], 1);
                int cnt = next_state.culuculate();
                if (cnt == 0) continue;

                next_state.advance(pair[j]);
                next_state.evaluateScore();                
                if (t == 0) next_state.first_action_ = pair[j];
                next_beam.push(next_state);
            }
        }

        now_beam = next_beam;
        best_state = now_beam.top();

        if (best_state.isDone()) {
            break;
        }
    }
    vector<int> v = best_state.first_action_;
    rep(i, 0, SIZE) {
        cout << v[i] << ' ';
    } cout << endl;
    return best_state.first_action_;
}

void solve() {
    auto state = ForestState(N, b);
    while(!state.isDone()) {
        state.getInfo();
        state.print(beamSerach(state, BEAM_WIDTH, BEAM_DEPTH));
    }
}


int main() {
    cin >> N >> ti >> tj;
    b.resize(N);
    rep(i, 0, N) cin >> b[i];
    revealed.resize(N, vector<bool>(N));

    solve();
    return 0;
}