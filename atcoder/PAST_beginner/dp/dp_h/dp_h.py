H, W = map(int, input().split())
A = [input() for _ in range(H)]

cnt = [[0] * W for _ in range(H)]
cnt[0][0] = 1

MOD = 10 ** 9 + 7

for i in range(H):
    for j in range(W):
        if A[i][j] == "#": continue
        if i > 0:
            cnt[i][j] += cnt[i-1][j]
        if j > 0:
            cnt[i][j] += cnt[i][j-1]
        cnt[i][j] %= MOD

print(cnt[H-1][W-1])


# H, W = map(int, input().split())
# A = [input() for _ in range(H)]

# MOD = 10 ** 9 + 7

# dp = [[0] * W for _ in range(H)]
# dp[0][0] = 1


# for i in range(H):
#     for j in range(W):
#         if i == 0 and j == 0: continue
#         if A[i][j] == "#": continue
#         if i == 0:
#             dp[i][j] = (dp[i][j] + dp[i][j-1]) % MOD
#         elif j == 0:
#             dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD
#         else: 
#             dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % MOD

# print(dp[H-1][W-1])