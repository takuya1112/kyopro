N = int(input())
a = [list(map(int, input().split())) for _ in range(N)]

dp = [[0, 0, 0] for _ in range(N+1)]


for i in range(N):
    for j in range(3):
        for k in range(3):
            if j == k:
                continue
            dp[i + 1][k] = max(dp[i + 1][k], dp[i][j] + a[i][k])


ans = max(dp[N][0], dp[N][1], dp[N][2])
print(ans)

