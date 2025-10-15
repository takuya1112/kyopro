N, M, X = map(int, input().split())
C = []
A = []

for _ in range(N):
    l = list(map(int, input().split()))
    C.append(l[0])
    A.append(l[1:])

ans = float("INF")
for s in range(1 << N):
    cost = 0
    d = [0] * M
    for i in range(N):
        if s >> i & 1:
            cost += C[i]
            for j in range(M):
                d[j] += A[i][j]

    ok = True
    for j in range(M):
        if d[j] < X: ok = False

    if ok: ans = min(ans, cost)

if ans == float("INF"):
    print(-1)
    exit()
print(ans)

# N, M, X = map(int ,input().split())
# C = []
# A = []

# for _ in range(N):
#     l = list(map(int, input().split()))
#     C.append(l[0])
#     A.append(l[1:])

# dp = [[0] * M for _ in range(1 << N)]


# for bit in range(1 << N):
#     for i in range(N):
#         if bit >> i & 1:
#             for j in range(M):
#                 dp[bit][j] += A[i][j]


# ans = -1
# for bit in range(1 << N):
#     ok = True
#     for i in range(M):
#         if dp[bit][i] < X:
#             ok = False
#     if ok:
#         total = 0
#         for i in range(N):
#             if bit >> i & 1:
#                 total += C[i]
#         if ans == -1:
#             ans = total
#         else:
#             ans = min(ans, total)


# print(ans)
