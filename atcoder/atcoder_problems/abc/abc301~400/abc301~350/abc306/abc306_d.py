n = int(input())
x = []
y = []
for i in range(n):
    i, j = map(int, input().split())
    x.append(i)
    y.append(j)

INF = 1e18
dp = [[-INF] * 2 for i in range(n+1)]
dp[0][0] = 0
print(dp)

for i in range(n):
    dp[i+1][0] = max(dp[i+1][0], dp[i][0])
    dp[i+1][1] = max(dp[i+1][1], dp[i][1])

    if x[i] == 0:
        dp[i+1][0] = max(dp[i+1][0], dp[i][0] + y[i])
        dp[i+1][0] = max(dp[i+1][0], dp[i][1] + y[i])
    else:
        dp[i+1][1] = max(dp[i+1][1], dp[i][0] + y[i])

print(dp)
ans = max(dp[n][0], dp[n][1])
print(ans)


# N = int(input())
# X = []
# Y = []
# for i in range(N):
#     x, y = map(int, input().split())
#     X.append(x)
#     Y.append(y)

# INF = 10 ** 10
# dp = [[-INF] * 2 for _ in range(N+1)]
# dp[0][0] = 0

# for i in range(N):
#     dp[i+1][0] = max(dp[i][0], dp[i+1][0])
#     dp[i+1][1] = max(dp[i][1], dp[i+1][1])

#     if X[i] == 0:
#         dp[i+1][0] = max(dp[i][0] + Y[i], dp[i+1][0])
#         dp[i+1][0] = max(dp[i][1] + Y[i], dp[i+1][0])
    
#     if X[i] == 1:
#         dp[i+1][1] = max(dp[i][0] + Y[i], dp[i+1][1])
# print(max(dp[N][0], dp[N][1]))



#mycode wrong ans
# N = int(input())
# dishes = []
# for _ in range(N):
#     x, y = map(int, input().split())
#     dishes.append([x, y])

# dp = [[[0, 0] for i in range(3)] for _ in range(N+1)]
# print(dp)

# for i in range(N):
#     x, y = dishes[i]
#     dp[i+1][0] = dp[i][0]
#     if x == 1:
#         for j in range(2):
#             dp[i+1][j+1][0] = dp[i][j][0] + 1
#             dp[i+1][j+1][1] = max(dp[i][j][1] + y, dp[i+1][j][1])
#     if x == 2:
#         for j in range(2):
#             dp[i+1][j+1][0] = dp[i][j][0] - 1
#             dp[i+1][j+1][1] = max(dp[i][j][1] + y, dp[i+1][j][1])

# print(dp)
