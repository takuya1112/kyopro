N = int(input())
g = [[[]for i in range(15)] for j in range(15)]
for i in range(N):
    for j in range(N):
        g[i][j] = -1

for i in range(N):
    m = int(input())
    for j in range(m):
        x, y = map(int, input().split())
        x -= 1
        g[i][x] = y

ans = 0
for i in range(1 << N):
    d = [0] * N
    for j in range(N):
        if i >> j & 1:
            d[j] = 1
    ok = True
    for j in range(N):
        if d[j]:
            for k in range(N):
                if g[j][k] == -1: continue
                if g[j][k] != d[k]: ok = False

    if ok:
        ans = max(ans, i.bit_count())

print(ans)



# N = int(input())
# A = []
# for _ in range(N):
#     a = int(input())
#     testimony_list = []
#     for i in range(a):
#         testimony_list.append(list(map(int, input().split())))
#     A.append(testimony_list)
# print(A)

# ans = 0
# for bit in range(1 << N):
#     liear = 0
#     for i in range(N):
#         if bit >> i & 1:
#             honest = A[i]
#             for h in honest:
#                 x = h[0]
#                 y = h[1]
#                 if y == 0:
#                     liear |= x
#     print(liear)

