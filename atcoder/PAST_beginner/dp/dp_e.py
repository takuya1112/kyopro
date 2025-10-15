N, W = map(int, input().split())

weight = []
Value = []

for _ in range(N):
    w, v = map(int, input().split())
    weight.append(w)
    Value.append(v)


dp = [[float("INF")] * 100100 for _ in range(110)]
dp[0][0] = 0


for i in range(N):
    for sum_v in range(100100):
        if sum_v - Value[i] >= 0:
            dp[i+1][sum_v] = min(dp[i+1][sum_v], dp[i][sum_v - Value[i]] + weight[i])

        dp[i+1][sum_v] = min(dp[i+1][sum_v], dp[i][sum_v])




ans = 0
for i in range(len(dp[N])):
    if dp[N][i] <= W:
        ans = i

print(ans)




# N, W = list(map(int, input().split()))

# ws = [0]
# vs = [0]

# for i in range(N):
#     w, v = list(map(int, input().split()))
#     ws.append(w)
#     vs.append(v)


# weight = []
# for i in range(N + 1):
#     weight.append([10 ** 18] * (sum(vs) + 1))


# weight[0][0] = 0

# for i in range(1, N+1):
#     for v in range(sum(vs) + 1):
#         weight[i][v] = min(weight[i][v], weight[i-1][v])

#         if v - vs[i] >= 0:
#             weight[i][v] = min(weight[i][v], weight[i-1][v-vs[i]] + ws[i])


# ans = 0
# for i in range(len(weight[N])):
#     if weight[N][i] <= W:
#         ans = i
# print(ans)