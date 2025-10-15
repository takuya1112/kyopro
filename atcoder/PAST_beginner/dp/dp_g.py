import sys
sys.setrecursionlimit(1010101)

N, M = map(int, input().split())
G = [[] for _ in range(N)]
dp = [-1] * N

for i in range(M):
    x, y = map(int, input().split())
    x -= 1
    y -= 1
    G[x].append(y)


def rec(v):
    if dp[v] != -1: return dp[v]

    res = 0
    for nv in G[v]:
        res = max(res, rec(nv) + 1)
    
    dp[v] = res
    return res


res = 0
for v in range(N):
    res = max(res, rec(v))

print(res)


# import sys
# sys.setrecursionlimit(1010101)

# N, M = map(int, input().split())
# edges = [[] for _ in range(N)]

# indeg = [0] * N

# for i in range(M):
#     x, y = map(int, input().split())
#     edges[x-1].append(y-1)
#     indeg[y-1] += 1

# print(edges)
# print(indeg)

# length = [0] * N
# done = [False] * N

# def rec(i):
#     if done[i]:
#         return length[i]
    
#     length[i] = 0
#     for j in edges[i]:
#         length[i] = max(length[i], rec(j) + 1)
    
#     done[i] = True
#     return length[i]


# for i in range(N):
#     if indeg[i] == 0:
#         rec(i)

# print(length)
# print(max(length))



#wrong ans
# import sys
# sys.setrecursionlimit(1010101)

# N, M = map(int, input().split())
# P = [[] for _ in range(N)]

# for i in range(N):
#     x, y = map(int, input().split())
#     x -= 1
#     y -= 1
#     P[x].append(y)


# def dfs(i, count):
#     if len(P[i]) == 0:
#         return count +1
#     else:
#         c = dfs(i, count+1)
#         return c
        


# ans = 0
# for p in P:
#     for i in p:
#         ans = max(ans, dfs(i, 0))