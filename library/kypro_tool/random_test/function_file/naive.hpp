// ナイーブ(愚直解法)のコード

#pragma once
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#include "data.hpp"

int H, W, best;
vector<string> grid;
vector<vector<bool>> used;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void dfs(int sx, int sy, int gx, int gy, int d) {
    if (d >= best) return;
    if (sx == gx && sy == gy) {
        best = min(best, d);
        return;
    }

    used[sx][sy] = true;
    for (int i = 0; i < 4; i++) {
        int x = sx + dx[i];
        int y = sy + dy[i];
        if (x < 0 || x >= H || y < 0 || y >= W) continue;
        if (grid[x][y] == '#') continue;
        if (used[x][y]) continue;
        dfs(x, y, gx, gy, d + 1);
    } 
    used[sx][sy] = false;
}

int naive(const TestCase &tc) {
    H = tc.h, W = tc.w;
    grid = tc.grid;
    best = 1e9;
    used.assign(H, vector<bool> (W, false));
    dfs(0, 0, H - 1, W - 1, 0);
    if (best == 1e9) return -1;
    else return best;
}
