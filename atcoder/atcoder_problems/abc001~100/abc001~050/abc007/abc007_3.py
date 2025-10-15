from collections import deque

R, C = map(int, input().split())
sy, sx =  map(int, input().split())
gy, gx = map(int, input().split())
c = [input() for _ in range(R)]

sy -= 1
sx -= 1
gy -= 1
gx -= 1

direciton = [0,1], [0,-1], [1,0], [-1,0]

visited = [[-1] * C for _ in range(R)]

Q = deque()
Q.append([sy,sx])
visited[sy][sx] = 0

while len(Q) > 0:
    y1, x1 = Q.popleft()
    for y2, x2 in direciton:
        y = y1 + y2
        x = x1 + x2
        if c[y][x] == "." and visited[y][x] == -1:
            visited[y][x] = visited[y1][x1] +1
            Q.append([y,x])

print(visited[gy][gx])


# mycode 
# from collections import deque

# R, C = map(int, input().split())
# sy, sx = map(int, input().split())
# gy, gx = map(int, input().split())
# move = [[1,0], [-1,0], [0,1], [0,-1]]

# M = [input() for i in range(R)]
# Check = [[-1] * C for i in range(R)]


# sy -= 1
# sx -= 1
# gy -= 1
# gx -= 1


# Q = deque()
# Q.append([sy, sx])

# Check[sy][sx]= 0

# while len(Q) > 0:
#     i , j = Q.popleft()

#     for m1, m2 in move:
#         i2, j2 = i + m1, j + m2
#         if not (0 < i2 < R -1 and 0 < j2 < C -1):
#             continue

#         if M[i2][j2] == "#":
#             continue

#         if Check[i2][j2] == -1:
#             Q.append([i2, j2])
#             Check[i2][j2] = Check[i][j] + 1


# print(Check[gy][gx])