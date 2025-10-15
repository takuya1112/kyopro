N = int(input())
a = list(map(int, input().split()))

W = 100000
dp = [[False] * (W + 1) for _ in range(N+1)]
dp[0][0] = True

for i in range(N):
    for j in range(W+1):
        if not dp[i][j]:
            continue
        dp[i+1][j] = True
        if j + a[i] <= W:
            dp[i+1][j+a[i]] = True

ans = 0
for j in range(W+1):
    if dp[N][j]:
        ans += 1

print(ans)



# N = int(input())

# ps = [0] + list(map(int, input().split()))

# P = sum(ps)

# exist = []
# for i in range(N+1):
#     exist.append([False]*(P+1))


# exist[0][0] = True

# for i in range(1, N+1):
#     for s in range(P+1):
#         if exist[i-1][s]:
#             exist[i][s] = True
#         if s >= ps[i] and exist[i-1][s-ps[i]]:
#             exist[i][s] = True

# ans = 0
# for s in range(P+1):
#     if exist[N][s]:
#         ans += 1


# print(ans)



# N = int(input())
# P = list(map(int, input().split()))

# dp = [[-10**18] * (sum(P)+1) for _ in range(N+1)]
# dp[0][0] = 0

# for i in range(N):
#     for sum_p in range(sum(P)+1):

#         if sum_p - P[i] >= 0:
#             dp[i+1][sum_p] = max(dp[i+1][sum_p], dp[i][sum_p - P[i]] + P[i]) 

#         dp[i+1][sum_p] = max(dp[i][sum_p], dp[i+1][sum_p])


# ans = 0
# for i in dp[N]:
#     if i >= 0:
#         ans += 1
# print(ans)