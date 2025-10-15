N, M = list(map(int, input().split()))
A = [input() for _ in range(N)]

group = [[] for _ in range(11)]

for i in range(N):
    for j in range(M):
        if A[i][j] == "S":
            n = 0
        elif A[i][j] == "G":
            n = 10
        else:
            n = int(A[i][j])
        group[n].append([i,j])

print(group)

INF = 10 ** 100
cost = [[INF] * M for _ in range(N)]

si, sj = group[0][0]
cost[si][sj] = 0

for n in range(1, 11):
    for i, j in group[n]:
        for i2, j2 in group[n-1]:
            cost[i][j] = min(cost[i][j], cost[i2][j2] + abs(i-i2) + abs(j-j2))

print(cost)

gi, gj = group[10][0]
ans = cost[gi][gj]
if ans == INF:
    ans = -1

print(ans)
 

# from collections import deque

# N, M = map(int, input().split())
# A = [input() for _ in range(N)]

# destination = "123456789G" 
# direction = [1, 0], [-1, 0], [0, 1], [0, -1]

# Sx, Sy = 0, 0
# Gx, Gy = 0, 0

# for i in range(N):
#     for j in range(M):
#         if A[i][j] == "S":
#             Sx = j
#             Sy = i
#         if A[i][j] == "G":
#             Gx = j
#             Gy = i


# dp = [[-1] * M for _ in range(N)]
# dp[Sy][Sx] = 0

# Q = deque()
# Q.append([Sy, Sx])


# for d in destination:
#     count = 0
#     y1, x1 = Q.popleft()
#     while True:
#         for y2, x2 in direction:
#             y += y2
#             x += x2

#             if not (0 <= y < N and 0 <= x < M):
#                 continue

#             if A[y][x] == d:
#                 Q.append([y,x])
#                 dp[y][x] = dp[y1][x1] + count
#         count += 1








