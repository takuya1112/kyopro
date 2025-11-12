N, K = map(int, input().split())
h = list(map(int, input().split()))

cost = [float("inf")] * N
cost[0] = 0

for i in range(N):
    for j in range(1,K+1):
        if i + j < N:
            cost[i+j] = min(cost[i+j] ,cost[i] + abs(h[i] - h[i+j]))

print(cost[-1])


# N, K = map(int, input().split())
# h = list(map(int, input().split()))

# cost = [float("inf")] * N
# cost[0] = 0

# for i in range(1,N):
#     for k in range(i-1,i-K-1,-1):
#         if k < 0:
#             break
#         cost[i] = min(cost[i], cost[k] + abs(h[i] - h[k]))
# print(cost[-1])



# N, K = map(int, input().split())
# h = list(map(int, input().split()))

# cost = [0] * N
# if K > N:
#     K = N

# cost[0] = 0

# cost[1] = cost[0] + abs(h[0] - h[1])

# kc = 0
# for i in range(2,K):
#     min = float("inf")
#     for j in range(i -1, -1, -1):
#         cal = cost[j] + abs(h[j] - h[i])
#         if cal < min:
#             min = cal
#     cost[i] = min
        


# for i in range(K,N):
#     min = float("inf")
#     for j in range(i-1, i-K -1 , -1):
#         cal = cost[j] + abs(h[j] - h[i])
#         if cal < min:
#             min = cal
    
#     cost[i] = min

# print(cost[-1])