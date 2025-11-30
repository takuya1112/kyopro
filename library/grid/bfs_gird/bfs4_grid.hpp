// bfs4(sx, sy, grid, dist) の形で使用し
// 座標{sx, sy} から上下左右の４方向移動、
// 移動コスト均一での角マスへの最短距離を調べる
// gridは＃なら壁, .なら通行可能マス
// dist[i] == -1 なら到達不可、dist[i] != -1なら最短距離

#pragma once
#include <vector>
#include <queue>
#include <utility>
#include <string>

std::vector<std::vector<int>> bfs4(int sx, int sy, const std::vector<std::string>& grid) {
    int H = grid.size();
    int W = grid[0].size();

    const int dx[4] = {1, 0, -1, 0};
    const int dy[4] = {0, 1, 0, -1};

    std::queue<std::pair<int, int>> que;
    que.push({sx, sy});

    std::vector<std::vector<int>> dist(H, std::vector<int> (W, -1));
    dist[sx][sy] = 0;

    while(!que.empty()) {
        auto [x, y] = que.front();
        que.pop();
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || nx >= H || ny < 0 || ny >= W) continue;
            if (grid[nx][ny] == '#') continue;
            if (dist[nx][ny] != -1) continue;
            dist[nx][ny] = dist[x][y] + 1;
            que.push({nx, ny});
        }
    }
    return dist;
}