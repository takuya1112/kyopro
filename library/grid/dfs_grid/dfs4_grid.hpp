// dfs4(sx, sy, gx, gy, grid, dist) の形で使用し
// 座標{sx, sy} から 座標{gx, gy}に上下左右の移動で到達可能か調べる
// gridは＃なら壁, .なら通行可能マス
// dist[i] == -1 なら到達不可、dist[i] != -1 なら到達可能

#pragma once
#include <vector>
#include <string>

std::vector<std::vector<int>> dfs4(int sx, int sy, int gx, int gy, const std::vector<std::string>& grid) {
    int H = grid.size();
    int W = grid[0].size();

    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};

    std::vector<std::vector<int>> dist(H, std::vector<int> (W, -1));
    dist[sx][sy] = 0;

    auto dfs = [&](auto& self, int x, int y) -> bool {
        if (x == gx && y == gy) return true; 

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || nx >= H || ny < 0 || ny >= W) continue;
            if (grid[nx][ny] == '#') continue;
            if (dist[nx][ny] != -1) continue;
            dist[nx][ny] = dist[x][y] + 1;
            if (self(self, nx, ny)) return true;
        }
        return false;
    };
    dfs(dfs, sx, sy);
    return dist;
}