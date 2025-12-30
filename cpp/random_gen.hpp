#pragma once
#include <bits/stdc++.h>
using namespace std;

struct Edge { int u, v, w; };

struct RandomGen {
    // ランダム生成
    mt19937_64 rng;
    RandomGen() : rng(chrono::steady_clock::now().time_since_epoch().count()) {}

    // 基本
    long long rll(const long long& left, const long long& right) {
        uniform_int_distribution<long long> dist(left, right);
        return dist(rng);
    }

    int ri(const int& left, const int& right) {
        return (int)rll(left, right);
    }

    // ランダムグリッド(迷路)
    vector<vector<int>> random_grid(const int& height, const int& width) {
        // 迷路アルゴリズムの制約上、高さ５以上、幅５以上の奇数にする
        int maze_height = (height / 2) * 2 + 1;
        int maze_width = (width / 2) * 2 + 1;

        vector<vector<int>> grid(maze_height, vector<int> (maze_width, 1));

        auto dfs = [&](auto self, int x, int y) -> void {
            grid[x][y] = 0;
          
            vector<pair<int, int>> dirs = {{2, 0}, {0, 2}, {-2, 0}, {0, -2}};
            shuffle(dirs.begin(), dirs.end(), rng);

            for (auto [dir_x, dir_y] : dirs) {
                int new_x = x + dir_x; 
                int new_y = y + dir_y;
                if (new_x <= 0 || new_x >= maze_height - 1 || new_y <= 0 || new_y >= maze_width - 1) continue;
                if (grid[new_x][new_y] == 0) continue;
                grid[x + dir_x / 2][y + dir_y / 2] = 0;
                self(self, new_x, new_y);
            }
        };

        dfs(dfs, 1, 1);
        return grid;
    }
};