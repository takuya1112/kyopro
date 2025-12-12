// warshall(graph)の形で使用し
// graphはINF初期化の隣接行列で持つ
// すべての2頂点の最短距離を求める
// O(N**3)


#pragma once
#include <vector>

template<class T>
long long warshall(std::vector<std::vector<T>>& graph) {
    int N = graph.size();

    for (int i = 0; i < N; i++) graph[i][i] = 0;

    for (int k = 0; k < N; k++) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                graph[i][j] = std::min(graph[i][j], graph[i][k] + graph[k][j]);
            }
        }
    }

    long long ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            ans += graph[i][j];
        }
    }

    return ans;
}