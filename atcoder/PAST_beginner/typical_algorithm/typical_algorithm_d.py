import heapq
N, M = map(int, input().split())

G = [[] for _ in range(N)]

for _ in range(M):
    u, v, c = map(int, input().split())
    G[u].append((v, c))


Q = []
heapq.heappush(Q, (0, 0))


dist = [-1 for _ in range(N)]
dist[0] = 0


done = [False] * N


while len(Q) > 0:
    d, i = heapq.heappop(Q)

    if done[i]: continue
    done[i] = True

    for j, c in G[i]:
        if dist[j] == -1 or dist[j] > dist[i] + c:
            dist[j] = dist[i] + c
            heapq.heappush(Q, (dist[j], j))

print(dist[N-1])




# import heapq
# N, M = map(int, input().split())
# V = [[] for _ in range(N)]

# for i in range(M):
#     v1, v2, c = map(int, input().split())
#     V[v1].append([v2, c])


# Q = []
# heapq.heappush(Q, (0, 0))

# Time = [-1 for _ in range(N)]
# Time[0] = 0

# done = [False] * N


# while len(Q) > 0:
#     t, i = heapq.heappop(Q)
#     if done[i]: continue
#     done[i] = True

#     for j, c in V[i]:
#         if Time[j] == -1 or Time[j] > Time[i] + c:
#             Time[j] = Time[i] + c
#             heapq.heappush(Q, (Time[j], j))


# print(Time[N-1])