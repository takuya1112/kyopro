N = int(input())
S = " " + input()
C = [0] + list(map(int, input().split()))
D = [0] + list(map(int, input().split()))

INF = float("INF")
cost = [[INF] * (N+1) for _ in range(N+1)]
cost[0][0] = 0

for i in range(1, N+1):
    for j in range(i):
        if S[i] == "(":
            cost[i][j+1] = min(cost[i][j+1], cost[i-1][j])
            if j > 0:
                cost[i][j-1] = min(cost[i][j-1], cost[i-1][j] + C[i])
        else:
            if j > 0:
                cost[i][j-1] = min(cost[i][j-1], cost[i-1][j])
            cost[i][j+1] = min(cost[i][j+1], cost[i-1][j] + C[i])

        cost[i][j] = min(cost[i][j], cost[i-1][j] + D[i])
print(cost)
print(cost[N][0])




#mycode worng ans
# N = int(input())
# S = input()
# C = list(map(int, input().split()))
# D = list(map(int, input().split()))
# INF = float("INF")

# dp = [INF] * N
# for i in range(0, N-1, 2):
#     print(S[i])
#     print(S[i+1])
