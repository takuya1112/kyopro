N, M = map(int, input().split())
A = []
C = []

for i in range(M):
    a, b = map(int, input().split())
    s = 0
    l = list(map(int, input().split()))
    for j in range(b):
        c = l[j]
        c -= 1
        s |= 1 << c
    A.append(a)
    C.append(s)


INF = 1001001001
dp = [INF for _ in range(1 << N)]
dp[0] = 0


for s in range(1 << N):
    for i in range(M):
        t = s | C[i]
        cost = dp[s] + A[i]
        dp[t] = min(dp[t], cost)


ans = dp[-1]
if ans != INF:
    print(ans)
    exit()
print(-1)


# N, M = map(int, input().split())
# A = [0]
# C = [0]

# for _ in range(M):
#     a, b = map(int, input().split())
#     c = list(map(int, input().split()))
#     A.append(a)
#     bit = 0
#     for i in range(b):
#         bit += 1 << (c[i]-1)
#     C.append(bit)


# ALL = 1 << N
# INF = 10 ** 100
# cost = [[INF] * ALL for _ in range(M+1)]
# cost[0][0] = 0



# for i in range(1,M+1):
#     for j in range(ALL):
#         cost[i][j] = min(cost[i][j], cost[i-1][j])
#         cost[i][j|C[i]] = min(cost[i][j|C[i]], cost[i-1][j]+ A[i])


# if cost[M][ALL-1] != INF:
#     print(cost[M][ALL-1])
#     exit()
# print(-1)