#include <vector>
#include <queue>

template <class T>
std::vector<long long> dijkstra(int s, const std::vector<std::vector<std::pair<int, T>>>& graph) {
    const long long INF = 4e18;

    int N = graph.size();
    std::vector<long long> dist(N, INF);
    dist[s] = 0;

    std::priority_queue<
        std::pair<long long, int>, 
        std::vector<std::pair<long long, int>>,
        std::greater<std::pair<long long, int>>
    > pq;
    pq.push({0, s});

    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();
        if (dist[u] < d) continue;
        for (auto [v, c] : graph[u]) {
            long long nc = d + c;
            if (dist[v] > nc) {
                dist[v] = nc;
                pq.push({nc, v});
            }
        }
    }
    return dist;
}