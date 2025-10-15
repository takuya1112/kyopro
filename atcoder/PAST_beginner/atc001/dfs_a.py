import sys
sys.setrecursionlimit(1000000)

H, W = map(int, input().split())
c = [input() for _ in range(H)]

s = 0,0
g = 0,0

for i in range(H):
    for j in range(W):
        if c[i][j] == "s":
            s = i,j
        if c[i][j] == "g":
            g = i,j

visited = [[False] * W for _ in range(H)]

direction = [1,0], [-1,0], [0,1], [0,-1]

def dfs(y1,x1):
    visited[y1][x1] = True
    for y2, x2 in direction:
        y = y1 + y2
        x = x1 + x2
        if 0 <= y < H and 0 <= x < W and c[y][x] != "#":
            if not visited[y][x]:
                dfs(y,x)

dfs(s[0], s[1])

print(visited)
if visited[g[0]][g[1]]:
    print("Yes")
else:
    print("No")




# import sys 
# sys.setrecursionlimit(1000000)


# H, W = list(map(int, input().split()))
# S = [input() for i in range(H)]


# for i in range(H):
#     for j in range(W):
#         if S[i][j] == "s":
#             si, sj = i, j
        
#         if S[i][j] == "g":
#             gi, gj = i, j


# visited = [[False]*W for i in range(H)]


# def dfs(i, j):
#     visited[i][j] = True

#     for i2, j2 in [[i+1, j], [i-1, j], [i, j+1], [i, j-1]]:
#         if not (0<= i2 < H and 0 <= j2 < W):
#             continue

#         if S[i2][j2] == "#":
#             continue

#         if not visited[i2][j2]:
#             dfs(i2, j2)

# dfs(si, sj)

# if visited[gi][gj]:
#     print("Yes")
# else:
#     print("No")