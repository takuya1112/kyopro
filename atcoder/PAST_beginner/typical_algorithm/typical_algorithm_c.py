N = int(input())
A = [list(map(int, input().split())) for _ in range(N)]


INF = 10 ** 100
ALL = 1 << N
cost = [[INF] * N for _ in range(ALL)]
cost[0][0] = 0

def has_bit(n, i):
    return (n & (1 << i) > 0)


for n in range(ALL):
    for i in range(N):
        for j in range(N):
            if has_bit(n, j) or i == j:
                continue
            cost[n|(1<<j)][j] = min(cost[n|(1<<j)][j], cost[n][i] + A[i][j])

print(A)
print(cost)
print(cost[ALL-1][0])


#wrong ans
# import sys
# sys.setrecursionlimit(1001001)

# N = int(input())
# A = [list(map(int, input().split())) for _ in range(N)]



# def dfs(a, s, visited, cost, pre):

#     visited |=  1 << s
#     cost += A[pre][s+1]
    
#     if visited == (1 << (N -1)) -1:
#         print(cost)
#         return cost
    
#     for i, a in enumerate(A[s][1:]):
#         dfs(a, i, visited, cost, s)



# visited = 0
# for i, a in enumerate(A[0][1:]):
#     dfs(a, i, visited, 0, 0)
