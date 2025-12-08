// ナイーブ(愚直解法)のコード

#pragma once
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#include "data.hpp"


template <class T>
long long prim(const std::vector<std::vector<std::pair<int, T>>>& graph) {
    const long long INF = 4e18;

    int N = graph.size();
    std::vector<int> used(N, 0);

    int cnt = 0;
    long long res = 0;

    std::priority_queue<
        std::pair<long long, int>, 
        std::vector<std::pair<long long, int>>,
        std::greater<std::pair<long long, int>>
    > pq;

    for (auto [v, c] : graph[0]) pq.push({c, v});
    used[0] = 1;
    cnt++;

    while (cnt < N) {
        auto [c, v] = pq.top();
        pq.pop();

        if (used[v]) continue;

        used[v] = 1;
        cnt++;
        res += c;

        for (auto [u, d] : graph[v]) {
            if (used[u]) continue;
            pq.push({d, u});
        } 
    }
    return res;
}

long long naive(const TestCase &tc) {
    int N = tc.n, M = tc.m;
    vector<Edge> edges = tc.edges;

    vector<vector<pair<int, long long>>> graph(N);
    for (int i = 0; i < M; i++) {
        Edge e = edges[i];
        graph[e.u].push_back({e.v, e.w});
        graph[e.v].push_back({e.u, e.w});
    }
    return prim(graph);
}
