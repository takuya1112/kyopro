H, W, Y, X = map(int, input().split())
S = [list(input()) for _ in range(H)]

X -= 1
Y -= 1

dx = [0, 1, 0, -1]
dy = [-1, 0, 1, 0]

ans = 1

for d in range(4):
    x = X
    y = Y
    while True:
        x += dx[d]
        y += dy[d]

        if x < 0 or W <= x or y < 0 or H <= y:
            break

        if S[y][x] == "#":
            break

        ans += 1

print(ans)


# H, W, X, Y = map(int, input().split())
# S = [list(input()) for _ in range(H)]
# X -= 1
# Y -= 1

# ans = 0
# if S[X][Y] == ".":
#     ans += 1


# x = X
# y = Y
# while 0 <= x-1:
#     x -= 1
#     if S[x][y] == ".":
#         ans += 1
#     else:
#         break
    

# x = X
# y = Y
# while 0 <= y -1:
#     y -= 1
#     if S[x][y] == ".":
#         ans += 1
#     else:
#         break
    
# x = X
# y = Y
# while x + 1 < H:
#     x += 1
#     if S[x][y] == ".":
#         ans += 1
#     else:
#         break
    
# x = X
# y = Y
# while y + 1 < W:
#     y += 1
#     if S[x][y] == ".":
#         ans += 1
#     else:
#         break
    
# print(ans)
