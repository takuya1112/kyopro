#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define pint pair<int, int>
#define dint pair<double, int>
typedef long long ll; const int inf = INT_MAX / 2;

struct cord{
    int x;
    int y;
    int idx;
};

const cord entrance = {0, 5000, 0};

int N, M, K;
vector<cord> processor, sorter;
vector<vector<double>> P;

vector<tuple<double, int, int>> bestSorter;
vector<vector<int>> euclideanSorter;
vector<tuple<int, int, int>> clockwise;
vector<tuple<int, int, int>> counterClockwise;

int S;
vector<int> orderProcessor;
vector<tuple<int, int, int>> result;

// 多分もう少し修正が必要かな
// もらったvectorからｖ1に入れている処理装置のスコア（自分の意思で行こうとした処理装置）だけを計算し同じ分別器に2回入るとinfを返す
// 通り道に1つでも－1があったら処理できないからinfを返す
int calculateScore(int s, vector<tuple<int, int, int>> v) {
    vector<double> res(N, 1.0);
    vector<bool> visited_sorter(N);
    vector<bool> visited(N + M);
    int pre = s;
    while (pre > N) {
        int k = get<0>(v[pre - N]);
        int v1 = get<1>(v[pre - N]); 
        int v2 = get<2>(v[pre - N]);
        if (k == -1 || v1 == -1 || v2 == -1) return inf;
        if (visited_sorter[v1] != true)visited_sorter[v1] = true;
        if (visited[pre]) return inf;
        visited[pre] = true;
        if (v1 < N) {
            res[v1] *= 1.0 - P[k][v1];
        } 
        if (v2 < N) {
            res[v2] *= 1.0 - P[k][v2];
        } 
        if (v1 < N) pre = v2;
        else pre = v1;
    }

    double sum_score = 0.0;
    rep(i, 0, N) {
        if (visited_sorter[i]) {
            double score_i = 1.0 - res[i];
            sum_score += 1.0 - score_i;
        } else {
            sum_score += 1.0;
        }
    }

    double ave_score = sum_score / (double)N;
    double n = round(pow(10, 9) * ave_score);
    return n;
}

// 2本の線が共有点を持ってるかどうかを調べる
int sign(int x) {
    if (x > 0) return 1;
    if (x < 0) return -1;
    return 0;
}

int orientation(cord a, cord b, cord c) {
    int cross = (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);
    return sign(cross);
}

bool segments_intersect(cord p1, cord p2, cord q1, cord q2) {
    if (max(p1.x, p2.x) < min(q1.x, q2.x) ||
        max(q1.x, q2.x) < min(p1.x, p2.x) ||
        max(p1.y, p2.y) < min(q1.y, q2.y) ||
        max(q1.y, q2.y) < min(p1.y, p2.y)
    ) return false;
    int o1 = orientation(p1, p2, q1);
    int o2 = orientation(p1, p2, q2);
    int o3 = orientation(q1, q2, p1);
    int o4 = orientation(q1, q2, p2);
    return (o1 * o2 <= 0) and (o3 * o4 <= 0);
}

// 2つの点のユークリッド距離を計算する
double euclidean(const cord& a, const cord& b) {
    int dx = a.x - b.x;
    int dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}

// 分別器を1番近い処理装置にeuclideanSorterの変数にまとめる
void makeSorter() {
    rep(i, 0, M) {
        int res = -1; 
        double res_dis = inf;
        rep(j, 0, N) {
            double dis = euclidean(sorter[i], processor[j]);
            if (res_dis > dis) {
                res = j;
                res_dis = dis;
            }
        }
        euclideanSorter[res].push_back(i+N);
    }
}

// 角度順にソートする
void angleSort() {
    rep(i, 0, N) {
        int cx = processor[i].x;
        int cy = processor[i].y;
        auto customSort = [&] (int n, int m) {
            cord a = sorter[n - N];
            cord b = sorter[m - N];
            double angleA = atan2(a.y - cy, a.x - cx);
            double angleB = atan2(b.y - cy, b.x - cx);
            return angleA > angleB;
        };
        sort(all(euclideanSorter[i]), customSort);
    }
}


// 処理装置に属する中で一番近い分別器を共有点を持たないように時計回りと反時計回りにvectorでまとめる
void connectInside() {
    rep(i, 0, N) {
        rep(j, 0, euclideanSorter[i].size()) {
            int n = euclideanSorter[i][j];
            int m = euclideanSorter[i][j + 1];
            int e = euclideanSorter[i][j - 1];
            if (j == euclideanSorter[i].size() - 1) m = euclideanSorter[i][0];
            if (j == 0) e = euclideanSorter[i][euclideanSorter[i].size() - 1];
            if (segments_intersect(sorter[n - N], sorter[m - N], sorter[e - N], processor[i])) continue; 
            
            get<0>(clockwise[n - N]) = get<2>(bestSorter[orderProcessor[i]]);
            get<1>(clockwise[n - N]) = i;
            get<2>(clockwise[n - N]) = m; 

            get<0>(counterClockwise[m - N]) = get<2>(bestSorter[orderProcessor[i]]);
            get<1>(counterClockwise[m - N]) = i;
            get<2>(counterClockwise[m - N]) = n; 
        }

    }
}


// ユークリッド距離で近い処理装置を探して、それに近い分別器かつ、ごみ搬入口から共有点を持たない点をvectorで返す
vector<int> calculateStart() {
    int close_p = -1; 
    double p_dis = inf;
    rep(i, 0, N) {
        double dis = euclidean(entrance, processor[i]);
        if (p_dis > dis) {
            close_p = processor[i].idx;
            p_dis = dis;
        } 
    }

    vector<int> candidate;
    rep(i, 0, euclideanSorter[close_p].size()) {
        bool ok = true;
        rep(j, 0, euclideanSorter[close_p].size()) {
            if (i == j) continue;
            cord a = sorter[euclideanSorter[close_p][j] - N];
            cord b = sorter[euclideanSorter[close_p][j + 1] - N];
            if (j == euclideanSorter[close_p].size() - 1) b = sorter[euclideanSorter[close_p][0] - N];
            if (segments_intersect(entrance, sorter[euclideanSorter[close_p][i] - N],  processor[close_p], a)) ok = false;

            if (sorter[euclideanSorter[close_p][i] - N].idx == b.idx) continue;
            if (segments_intersect(entrance, sorter[euclideanSorter[close_p][i] - N], a, b)) ok = false;
        }   
        if (ok) candidate.push_back(euclideanSorter[close_p][i]);
    }

    return candidate;
}

void print(vector<tuple<int, int, int>> v) {
    for (const auto& [x, y, z] : v) {
        if (x == -1) cout << -1 << '\n';
        else cout << x << " " << y << " " << z << '\n';
    }
}


// 未完成
// ごみ搬入口から1番近い処理装置から近い共有点を持たない分別器から実際にvectorを作ってスコアを計算して1番いいものをだす
void connectOutside() {
    vector<int> from = calculateStart();
    vector<tuple<int, int, int>> best(M, tuple(-1, -1, -1));

    int best_action, best_score = inf;
    for (int s : from) {
        vector<tuple<int, int, int>> v(M, tuple(-1, -1, -1));
        vector<bool> visited_processor(N);
        vector<bool> visited(N + M);
        int pre = -1, now = s;
        int counter = 0;
        while (!visited[now]) {
            visited[now] = true;
            int k = 0, v1 = 0, v2 = 0;
            if (counter) {
                k = get<0>(counterClockwise[now - N]);
                v1 = get<1>(counterClockwise[now - N]);
                v2 = get<2>(counterClockwise[now - N]);
            } else {
                k = get<0>(clockwise[now - N]);
                v1 = get<1>(clockwise[now - N]);
                v2 = get<2>(clockwise[now - N]);
            }

            get<0>(v[now - N]) = k;
            get<1>(v[now - N]) = v1;
            get<2>(v[now - N]) = v2;
            // cout << pre << ' ' << now << ' ' << v2 << endl;
            if (k != -1 && !visited_processor[v1]) visited_processor[v1] = true;
            if (k == -1 || visited[v2]) {
                vector<cord> copy_processor = processor;
                sort(all(copy_processor), [&](const cord& a, const cord& b) {
                    return euclidean(a, sorter[now - N]) < euclidean(b, sorter[now - N]);
                });

                rep(i, 1, N) {
                    if (visited_processor[copy_processor[i].idx]) continue;
                    vector<cord> copy_sorter(euclideanSorter[copy_processor[i].idx].size());
                    rep(j, 0, euclideanSorter[copy_processor[i].idx].size()) {
                        copy_sorter[j] = sorter[euclideanSorter[copy_processor[i].idx][j] - N];
                    }

                    sort(all(copy_sorter), [&](const cord& a, const cord& b) {
                        return euclidean(a, sorter[now - N]) < euclidean(b, sorter[now - N]);
                    });

                    bool ok = false;
                    rep(j, 0, copy_sorter.size()) {
                        if (k == -1) {
                            if (segments_intersect(sorter[now - N], copy_sorter[j], sorter[pre - N], processor[get<0>(v[pre])])) continue;
                        }
                        else {
                            if (segments_intersect(sorter[now - N], copy_sorter[j], sorter[v2 - N], processor[v1])) continue;
                            else if  (segments_intersect(sorter[now - N], copy_sorter[j], sorter[pre - N], processor[v1])) continue;
                        }


                        if (get<0>(counterClockwise[copy_sorter[j].idx - N]) == -1 && counter) counter ^= 1;  
                        else if (get<0>(clockwise[copy_sorter[j].idx - N]) == -1 && !counter) counter ^= 1; 
                    
                        if (counter) {
                            get<0>(v[now - N]) = get<0>(counterClockwise[pre - N]); 
                            get<1>(v[now - N]) = get<1>(counterClockwise[pre - N]);
                            get<2>(v[now - N]) = copy_sorter[j].idx;
                        }
                        else {
                            get<0>(v[now - N]) = get<0>(clockwise[pre - N]); 
                            get<1>(v[now - N]) = get<1>(clockwise[pre - N]);
                            get<2>(v[now - N]) = copy_sorter[j].idx;
                        }

                        pre = now;
                        now = copy_sorter[j].idx; 
                        ok = true;
                        break;
                        }
                        if (ok) break;
                        else {
                            get<0>(v[now - N]) = get<0>(v[pre - N]);
                            get<1>(v[now - N]) = get<1>(v[pre - N]);
                            get<2>(v[now - N]) = get<1>(v[pre - N]);
                            pre = now;
                        }
                    } 
                } else {
                    pre = now;
                    now = v2;
                }
        }
        // rep(i, 0, N) cout << orderProcessor[i] << " ";
        // cout << '\n';
        // cout << s << endl;
        // print(v);
        
        int score = calculateScore(s, v);
        // cout << score << endl;
        if (score < best_score) {
            best_action = s;
            best_score = score;
            best = v;
        }
    }
    S = best_action;
    result = best;
}


// 処理装置から近い分別器の数に応じて処理装置をどこに配置するかきめる
void choiceOrder() {
    vector<pint> edges_sort(N);
    vector<dint> sorter_sort(N);
    rep(i, 0, N) {
        edges_sort[i].first = euclideanSorter[i].size();
        edges_sort[i].second = i;
        sorter_sort[i].first = get<0>(bestSorter[i]);
        sorter_sort[i].second = get<1>(bestSorter[i]);
    }

    sort(all(edges_sort));
    sort(rall(sorter_sort));
    rep(i, 0, N) {
        orderProcessor[edges_sort[i].second] = sorter_sort[i].second;
    }
}


int main() {
    cin >> N >> M >> K;
    processor = vector<cord>(N);
    sorter = vector<cord>(M);
    rep(i, 0, N) {
       cin >> processor[i].x >> processor[i].y;
       processor[i].idx = i;
    } 

    rep(i, 0, M) {
        cin >> sorter[i].x >> sorter[i].y;
        sorter[i].idx = i + N;
    } 


    P = vector<vector<double>> (K, vector<double>(N));
    bestSorter = vector<tuple<double, int, int>> (K, tuple(0, 0, 0));
    rep(i, 0, K) {
      rep(j, 0, N) {
        cin >> P[i][j];
        if (P[i][j] > get<0>(bestSorter[j])) {
            get<0>(bestSorter[j]) = P[i][j];
            get<1>(bestSorter[j]) = j;
            get<2>(bestSorter[j]) = i;
        }
      } 
    }


    euclideanSorter = vector<vector<int>>(N);
    makeSorter();
    angleSort();


    orderProcessor = vector<int>(N); 
    choiceOrder();


    clockwise = vector<tuple<int, int, int>> (M, tuple(-1, -1, -1));
    counterClockwise = vector<tuple<int, int, int>> (M, tuple(-1, -1, -1));
    connectInside();


    result = vector<tuple<int, int, int>> (M, tuple(-1, -1, -1));
    connectOutside();
    

    // --------- ans---------- 
    rep(i, 0, N) cout << orderProcessor[i] << " ";
    cout << '\n';
    cout << S << endl;
    print(result);
    return 0;
}