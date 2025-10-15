from collections import deque
N, M = map(int, input().split())

edges = [[] for _ in range(N)]
for i in range(M):
    u, v = map(int, input().split())
    u -= 1
    v -= 1
    edges[u].append(v)
    edges[v].append(u)

S = int(input())
S -= 1
K = int(input())
T = list(map(int, input().split()))
for i in range(K):
    T[i] -= 1

T.append(S)

Dist = []
for t1 in T:
    INF = float("INF")
    dist = [INF] * N
    que = deque()
    que.append(t1)
    dist[t1] = 0
    while len(que):
        i = que.popleft()
        for j in edges[i]:
            if dist[j] == INF:
                dist[j] = dist[i] + 1
                que.append(j)
    print(dist)
    res = []
    for t2 in T:
        res.append(dist[t2])
    Dist.append(res)
print(Dist)

ALL = 1 << K
cost = [[INF] * K for _ in range(ALL)]

for i in range(K):
    cost[1 << i][i] = Dist[K][i]
print(cost)

# def has_bit(n, i):
#     return (n & (1 << i) > 0)

for n in range(ALL):
    for i in range(K):
        for j in range(K):
            if (n >> j) & 1 or i == j: continue
            cost[n|(1 << j)][j] = min(cost[n|(1 << j)][j], cost[n][i] + Dist[i][j])

print(cost)
print(min(cost[ALL-1]))


# from collections import deque
# N, M = map(int, input().split())
# G = [[] for _ in range(N)]
# for _ in range(M):
#     u, v = map(int, input().split())
#     u -= 1
#     v -= 1
#     G[u].append(v)
#     G[v].append(u)
# S = int(input())
# S -= 1
# K = int(input())
# T = set()
# t = list(map(int, input().split()))
# for i in range(K):
#     T.add(t[i]-1)

# def go(s):
#     dist = [-1] * N
#     Q = deque()
#     Q.append(s)
#     dist[s] = 0
#     while len(Q):
#         i = Q.popleft()
#         for j in G[i]:
#             if dist[j] == -1:
#                 dist[j] = dist[i] + 1
#                 Q.append(j)
#     idx = -1
#     min_dist = float("INF")
#     for t in T:
#         if dist[t] < min_dist:
#             idx = t
#             min_dist = dist[t]
#     return [idx, min_dist]


# ans = 0
# for i in range(K):
#     s, dis = go(S)
#     S = s
#     T.remove(s)
#     ans += dis

# print(ans)