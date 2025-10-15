from collections import deque

N, X, Y = map(int, input().split())
X += 201
Y += 201
grid = [["."] * (403) for _ in range(403)]



for _ in range(N):
    x, y = map(int, input().split())
    x += 201
    y += 201
    grid[y][x] = "#"



dist = [[-1] * (403) for _ in range(403)]
Q = deque()
Q.append([201,201])
dist[201][201] = 0

direction = [1,1], [1,0], [1,-1], [0,1], [0,-1], [-1,0]

while len(Q) > 0:
    y1, x1 = Q.popleft()
    for y2, x2 in direction:
        y = y1 + y2
        x = x1 + x2
        if 0 <= y < 403 and 0 <= x < 403:
            if dist[y][x] == -1 and grid[y][x] == ".":
                dist[y][x] = dist[y1][x1] +1
                Q.append([y,x])


print(dist[Y][X])





# from collections import deque

# N, X, Y = list(map(int, input().split()))
# X += 201
# Y += 201

# SX = 201
# SY = 201


# S = [list("." * 403) for i in range(403)]


# for i in range(N):
#     s = list(map(int, input().split()))
#     x = s[0] + 201
#     y = s[1] + 201

#     S[y][x] = "#"


# dist = [[-1] * 403 for i in range(403)]


# Q = deque()
# Q.append([SY, SX])
# dist[SY][SX] = 0


# while len(Q) > 0:
#     i1, j1 = Q.popleft()

#     for i2, j2 in [i1 +1, j1 +1], [i1 +1, j1], [i1 +1, j1 -1], [i1, j1 +1], [i1, j1 -1], [i1 -1, j1]:
#         if not (0 <= i2 <= 402 and 0 <= j2 <= 402):
#             continue

#         if S[i2][j2] == "#":
#             continue

#         if dist[i2][j2] == -1:
#             dist[i2][j2] = dist[i1][j1] + 1
#             Q.append([i2, j2])
        


# print(dist[Y][X])



