// cycle_detection(s, graph)の形で使用し
// サイクルを1個見つけて,そのサイクルに含まれている各要素を判定する
// graph は隣接リストで持つ

#pragma once
#include <vector>
#include <stack>

std::vector<int> cycle_detection(int s, const std::vector<std::vector<int>>& graph) {
    int N = graph.size();
    std::vector<int> seen(N), finished(N);

    int pos = -1;
    std::stack<int> hist;

    auto dfs = [&](auto self, int v, int p) {
        seen[v] = 1;
        hist.push(v);
        for (int nv : graph[v]) {
            if (nv == p) continue;
            if (finished[nv]) continue;
            if (seen[nv] && !finished[nv]) {
                pos = nv;
                return;
            }
            self(self, nv, v);
            if (pos != -1) return;
        }
        hist.pop();
        finished[v] = 1;
    };

    dfs(dfs, s, -1);

    std::vector<int> cycle(N);
    while (!hist.empty()) {
        int t = hist.top();
        cycle[t] = 1;
        hist.pop();
        if (t == pos) break;
    }
    return cycle;
}