# N, M, Q = map(int, input().split())

# graph = [[False] * N for _ in range(N)]
# for i in range(M):
#     vi, vj = map(int, input().split())
#     vi -= 1
#     vj -= 1
#     graph[vi][vj] = True
#     graph[vj][vi] = True

# c = list(map(int, input().split()))

# for i in range(Q):
#     s = list(map(int, input().split()))
#     n = s[0]
#     x = s[1] - 1

#     if n == 1:
#         print(c[x])
#         for j in range(N):
#             if graph[x][j]:
#                 c[j] = c[x]


#     elif n == 2:
#         y = s[2]
#         print(c[x])
#         c[x] = y


N, M, Q = map(int, input().split())

graph = [[] for _ in range(N)]
for i in range(M):
    vi, vj = map(int, input().split())
    vi -= 1
    vj -= 1
    graph[vi].append(vj)
    graph[vj].append(vi)


c = list(map(int, input().split()))

for i in range(Q):
    s = list(map(int, input().split()))
    n = s[0]
    x = s[1] - 1

    if n == 1:
        print(c[x])
        for j in graph[x]:
            c[j] = c[x]

    
    elif n == 2:
        y = s[2]
        print(c[x])
        c[x] = y
