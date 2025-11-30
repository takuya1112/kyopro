// dfs8(sx, sy, gx, gy, grid, dist) の形で使用し
// 座標{sx, sy} から上下左右斜めも合わせた８方向移動
// 斜め壁抜けなしで座標{gx, gy}に到達可能か調べる
// gridは＃なら壁, .なら通行可能マス
// dist[i] == -1 なら到達不可、dist[i] != -1 なら到達可能

#pragma once
#include <vector>
#include <string>

std::vector<std::vector<int>> dfs8(int sx, int sy, int gx, int gy, const std::vector<std::string>& grid) {
    int H = grid.size();
    int W = grid[0].size();

    const int dx[8] = {1, 0, -1, 0, 1, -1, 1, -1};
    const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};

    std::vector<std::vector<int>> dist(H, std::vector<int> (W, -1));
    dist[sx][sy] = 0;

    auto dfs = [&](auto& self, int x, int y) -> bool {
        if (x == gx && y == gy) return true; 

        for (int i = 0; i < 8; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || nx >= H || ny < 0 || ny >= W) continue;
            if (grid[nx][ny] == '#') continue;
            if (dist[nx][ny] != -1) continue;
            if (dx[i] != 0 && dy[i] != 0) {
                if (grid[x][ny] == '#' || grid[nx][y] == '#') continue;
            }
            dist[nx][ny] = dist[x][y] + 1;
            if (self(self, nx, ny)) return true;
        }
        return false;
    };
    dfs(dfs, sx, sy);
    return dist;
}