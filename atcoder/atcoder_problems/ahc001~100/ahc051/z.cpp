#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rrep(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
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
vector<tuple<double, int, int>> best_sorter;


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

bool customSort(const cord &a, const cord &b) {
    static const pair<int, int> range[] = {
        {0, 1000}, {1001, 2000}, {2001, 3000}, {3001, 4000},
        {4001, 5000}, {5001, 6000}, {6001, 7000}, {7001, 8000}, 
        {8001, 9000}, {9001, 10000}
    };

    auto bucket = [&](int x) {
        rep(i, 0, 10) {
            if (range[i].first <= x && x <= range[i].second) return i;
        }
        return -1;
    };
    
    auto inCase1 = [&] (const cord& v) {
        return 0 <= v.x && v.x <= 1000 && 0 <= v.y && v.y < 5000;
    };

    auto inCase2 = [&] (const cord& v) {
        return  0 <= v.y && v.y < 1000;
    };

    bool case1a = inCase1(a), case1b = inCase1(b);
    if (case1a && case1b) return a.y < b.y;
    else if (case1a != case1b) return case1b;


    bool case2a = inCase2(a), case2b = inCase2(b);
    if (case2a && case2b) return a.x > b.x;
    else if (case2a != case2b) return case2b;
    
    int ba = bucket(a.x), bb = bucket(b.x);
    if (ba >= 0 && bb >= 0) {
        if (ba == bb) {
            bool asc = (ba % 2 == 0);
            return asc ? (a.y < b.y) : (a.y > b.y);
        }
        return ba < bb;
    }
    return a.x < b.x;
}

void print(vector<tuple<int, int, int>> v) {
    for (const auto& [x, y, z] : v) {
        if (x == -1) cout << -1 << '\n';
        else cout << x << " " << y << " " << z << '\n';
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
    best_sorter = vector<tuple<double, int, int>> (K, tuple(0, 0, 0));
    rep(i, 0, K) {
      rep(j, 0, N) {
        cin >> P[i][j];
        if (P[i][j] > get<0>(best_sorter[j])) {
            get<0>(best_sorter[j]) = P[i][j];
            get<1>(best_sorter[j]) = j;
            get<2>(best_sorter[j]) = i;
        }
      } 
    }

    sort(rall(best_sorter));
    sort(all(processor), customSort);
    sort(all(sorter), customSort);

    rep(i, 0, N) cout << processor[i].x << " " << processor[i].y << " " << processor[i].idx << '\n';
    cout << '\n';
    rep(i, 0, M) cout << sorter[i].x << " " << sorter[i].y << " "  << sorter[i].idx << '\n';
    cout << '\n';
    rep(i, 0, N) {
        cout << get<0>(best_sorter[i]) << " ";
        cout << get<1>(best_sorter[i]) << " ";
        cout << get<2>(best_sorter[i]) << endl;
    }

    vector<int> order(N);
    rep(i, 0, N) {
        order[processor[i].idx] = get<1>(best_sorter[i]); 
    }

    cout << "_____ans______" <<'\n';
    rep(i, 0, N) {
        if (i) cout << " ";
        cout << order[i];
    } cout << "\n";

    cout << 35 << '\n';


    vector<tuple<int, int, int>> result(M, tuple(-1, -1, -1));
    // int n = 0;
    // rep(i, 0, M) {
    //     if (i == 0) {
    //         get<0>(result[sorter[i].idx - N]) = get<2>(best_sorter[i]);
            
    //     }
    // }


    print(result);
    return 0;
}