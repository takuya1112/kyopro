#include <vector>
#include <queue>
#include <utility>
#include "random_gen.hpp"
using namespace std;

const int MAZE_HEIGHT = 20;
const int MAZE_WIDTH = 30;

std::vector<std::vector<int>> bfs4(const int& sx, const int& sy, const std::vector<vector<int>>& grid) {
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
            if (grid[nx][ny] == 1) continue;
            if (dist[nx][ny] != -1) continue;
            dist[nx][ny] = dist[x][y] + 1;
            que.push({nx, ny});
        }
    }
    return dist;
}


int main() {
    RandomGen random_generater;
    std::vector<std::vector<int>> maze = random_generater.random_grid(MAZE_HEIGHT, MAZE_HEIGHT);
    vector<vector<int>> dist = bfs4(1, 1, maze);
    for (int row = 0; row < dist.size(); row++) {
        for (int col = 0; col < dist[row].size(); col++) {
            if (col) cout << " ";
            cout << dist[row][col];
        } cout << endl;
    }
}