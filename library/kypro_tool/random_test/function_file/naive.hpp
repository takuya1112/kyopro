// ナイーブ(愚直解法)のコード

#pragma once
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#include "data.hpp"

std::vector<long long> na_graph(int s, int g, const std::vector<std::vector<pair<int, int>>>& graph) {
    int N = graph.size();
    std::vector<long long> dist(N, 1e9);
    vector<bool> used(N);
    dist[s] = 0;

    for (int i = 0; i < N; i++) {
        int u = -1;
        for (int j = 0; j < N; j++) {
            if (!used[j] && (u == -1 || dist[j] < dist[u])) {
                u = j;
            }
        }

        if (u == -1) break;
        used[u] = true;

        for (auto [v, w] : graph[u]) {
            dist[v] = min(dist[v], dist[u] + w);
        }
    }
    return dist;
}

Result naive(const TestCase &tc) {
    Result out;
    int N = tc.n, M = tc.m;
    vector<vector<pair<int, int>>> graph(N);
    for (int i = 0; i < M; i++) {
        auto [u, v, c] = tc.graph[i];
        graph[u].push_back({v, c});
    }
    auto dist = na_graph(0, N - 1, graph);
    out.res = dist[N - 1];
    return out;
}
