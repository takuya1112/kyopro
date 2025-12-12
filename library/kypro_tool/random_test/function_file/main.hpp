// 試したいコード

#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "data.hpp"

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

Result fast(const TestCase &tc) {
    Result out;
    int N = tc.n, M = tc.m;
    vector<vector<int>> graph(N, vector<int>(N, 1e9));
    for (int i = 0; i < M; i++) {
        auto [u, v, c] = tc.graph[i];
        graph[u][v] = c;
    }

    out.res = warshall(graph);
    return out;
}