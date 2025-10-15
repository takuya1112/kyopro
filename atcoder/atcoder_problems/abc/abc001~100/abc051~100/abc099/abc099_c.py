N = int(input())
dp = [float("INF")] * 100010
dp[0] = 0

for n in range(1,100001):
    power = 1
    while power <= n:
        dp[n] = min(dp[n], dp[n-power] +1)
        power *= 6
    
    power = 1
    while power <= n:
        dp[n] = min(dp[n], dp[n-power] +1)
        power *= 9

print(dp)
print(dp[N])