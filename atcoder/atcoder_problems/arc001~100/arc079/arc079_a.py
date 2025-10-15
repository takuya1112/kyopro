import heapq

N, M = map(int, input().split())

G = [[] for _ in range(N)]

for _ in range(M):
    a, b = map(int, input().split())
    a -= 1
    b -= 1
    G[a].append(b)
    G[b].append(a)

dist = [-1 for _ in range(N)]

Q = []
heapq.heappush(Q, (0, 0))
dist[0] = 0

done = [False] * N

while len(Q) > 0:
    d, i = heapq.heappop(Q)
    if done[i]: continue
    done[i] = True
    for j in G[i]:
        x = 1
        if dist[j] == -1 or dist[j] > dist[i] + x:
            dist[j] = dist[i] + x
            heapq.heappush(Q, (dist[j], j))

if dist[N-1] == 2:
    print("POSSIBLE")
else:
    print("IMPOSSIBLE")



#  from collections import deque

# N, M = map(int, input().split())

# G = [[] for _ in range(N)]

# for _ in range(M):
#     a, b = map(int, input().split())
#     a -= 1
#     b -= 1
#     G[a].append(b)
#     G[b].append(a)

# dist = [-1 for _ in range(N)]

# Q = deque()
# Q.append(0)
# dist[0] = 0

# while len(Q) > 0:
#     i = Q.popleft()
#     for j in G[i]:
#         if dist[j] == -1:
#             dist[j] = dist[i] + 1
#             Q.append(j)

# if dist[N-1] == 2:
#     print("POSSIBLE")
# else:
#     print("IMPOSSIBLE")




# from collections import deque
# N, M = map(int, input().split())
# A = []
# B = []
# for i in range(M):
#     a, b = map(int, input().split())
#     A.append(a-1)
#     B.append(b-1)

# C = {i:[] for i in range(N)}
# for i in range(M):
#     C[A[i]].append(B[i])
#     C[B[i]].append(A[i])



# visited = [False] * N

# Q = deque()
# Q.append([0,0])
# visited[0] = True
# while len(Q) > 0:
#     n, m = Q.popleft()
#     if n >= 2: 
#         continue
#     for j in C[m]:
#         if not visited[j]:
#             visited[j] = True
#             Q.append([n+1, j])

# if visited[N-1]:
#     print("POSSIBLE")
# else:
#     print("IMPOSSIBLE")
