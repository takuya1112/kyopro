N, W = list(map(int, input().split()))

weight = []
value = []

for i in range(N):
    w, v = map(int, input().split())
    weight.append(w)
    value.append(v)

dp = [[0] * (W+1) for _ in range(N+1)]



for i in range(N):
    for sum_w in range(W+1):

        if sum_w - weight[i] >= 0:
            dp[i + 1][sum_w] =  max(dp[i + 1][sum_w], dp[i][sum_w - weight[i]] + value[i])
        
        dp[i + 1][sum_w] = max(dp[i + 1][sum_w], dp[i][sum_w])


print(dp[N][W])




# N, W = list(map(int, input().split()))

# ws = [0]
# vs = [0]

# for i in range(N):
#     w, v = list(map(int, input().split()))
#     ws.append(w)
#     vs.append(v)


# value = []
# for i in range(N + 1):
#     value.append([-10 ** 18] * (W+1))


# value[0][0] = 0

# for i in range(1, N+1):
#     for w in range(W+1):
#         value[i][w] = max(value[i][w], value[i-1][w])

#         if w - ws[i] >= 0:
#             value[i][w] = max(value[i][w], value[i-1][w-ws[i]]  + vs[i])


# ans = max(value[N])
# print(ans)