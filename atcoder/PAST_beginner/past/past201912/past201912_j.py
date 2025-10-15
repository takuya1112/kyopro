import heapq
H, W = map(int, input().split())
A = [list(map(int, input().split())) for _ in range(H)]

def grid_dijkstra(si, sj):
    dist = [[10 ** 100] * W for _ in range(H)]
    que = []
    heapq.heapify(que)
    dist[si][sj] = 0
    que.append([0, si, sj])
    while len(que):
        d, i, j = heapq.heappop(que)
        if d > dist[i][j]: continue
        for i2, j2 in [[i+1, j], [i-1, j], [i, j+1], [i, j-1]]:
            if 0 <= i2 < H and 0 <= j2 < W and d + A[i2][j2] < dist[i2][j2]:
                dist[i2][j2] = d + A[i2][j2]
                heapq.heappush(que, [dist[i2][j2], i2, j2])
    return dist

dist1 = grid_dijkstra(H-1, 0)
dist2 = grid_dijkstra(H-1, W-1)
dist3 = grid_dijkstra(0, W-1)

ans = 10 ** 100
for i in range(H):
    for j in range(W):
        res = dist1[i][j] + dist2[i][j] + dist3[i][j] - 2 * A[i][j]
        ans = min(ans, res)

print(ans)



#mycode worng ans
# from collections import deque
# H, W = map(int, input().split())
# A = [list(map(int, input().split())) for _ in range(H)]
# YX = [[-1, 0], [1, 0], [0, -1] ,[0, 1]]

# INF = float("INF")
# dp = [[INF] * W for _ in range(H)]
# dp[H-1][0] = 0

# S = [H-1, 0]
# Q = deque()
# Q.append(S)

# while len(Q):
#     s = Q.popleft()
#     for y, x in YX:
#         Y = s[0] + y
#         X = s[1] + x
#         if 0 > Y or Y >= H or 0 > X or X >= W: continue
#         dp[Y][X] = min(dp[Y][X], dp[s[0]][s[1]] + A[Y][X])
#         if 1 <= Y < H-1:
#             for y, x in YX[:2]:
#                 Y1 = Y + y
#                 X1 = X + x
#             if dp[Y1][X1] > dp[Y][X] + A[Y1][X1]:
#                 Q.append([Y, X])
#         if 1 <= X < W-1:
#             for y, x in YX[2:]:
#                 Y1 = Y + y
#                 X1 = X + x
#             if dp[Y1][X1] > dp[Y][X] + A[Y1][X1]:
#                 Q.append([Y, X])

# print(dp[0][W-1] + dp[H-1][W-1])