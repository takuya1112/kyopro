H, W, N = map(int, input().split())
row = [set() for _ in range(H)]
col = [set() for _ in range(W)]

for i in range(N):
    x, y = map(int, input().split())
    x -= 1
    y -= 1
    row[x].add(y)
    col[y].add(x)


Q = int(input())
for _ in range(Q):
    querry = list(map(int, input().split()))
    n = querry[0]
    i = querry[1]
    i -= 1

    ans = 0
    if n == 1:
        ans = len(row[i])
        for j in row[i]:
            col[j].discard(i)
        row[i] = set()

    else:
        ans = len(col[i])
        for j in col[i]:
            row[j].discard(i)
        col[i] = set()
    
    print(ans)





# H, W, N = map(int, input().split())
# grid = [[False] * W for _ in range(H)]

# for _ in range(N):
#     y, x = map(int, input().split())
#     y -= 1
#     x -= 1
#     grid[y][x] = True


# Q = int(input())

# for _ in range(Q):
#     query = list(map(int, input().split()))
#     n = query[0]
#     if n == 1:
#         count = 0
#         y = query[1] -1
#         for i in range(W):
#             if grid[y][i]:
#                 count += 1
#                 grid[y][i] = False
#         print(count)

#     elif n == 2:
#         count = 0
#         x = query[1] -1
#         for i in range(H):
#             if grid[i][x]:
#                 count += 1
#                 grid[i][x] = False
#         print(count)
