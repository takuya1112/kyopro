// warshall(graph)の形で使用し
// 重み付きグラフで,すべての2頂点の最小コストを求める(dist[i][j])
// graphはINF初期化の隣接行列で持つ (dist[i][j] = w)
// dist[i][j] == INF(4e18) だった場合は到達不可能
// dist[i][j] != INFだったら場合はiからjへの最小コスト
// O(N**3)


#pragma once
#include <vector>

const long long INF = 4e18;

void warshall(std::vector<std::vector<long long>>& dist) {
    int N = dist.size();
    for (int i = 0; i < N; i++) dist[i][i] = 0;

    for (int k = 0; k < N; k++) {
        for (int i = 0; i < N; i++) {
            if (dist[i][k] == INF) continue;
            for (int j = 0; j < N; j++) {
                if (dist[k][j] == INF) continue;
                dist[i][j] = std::min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
}