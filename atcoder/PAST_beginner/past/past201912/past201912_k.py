import sys
sys.setrecursionlimit(100100100)

N = int(input())
R = -1
edges = [[] for _ in range(N)]

for i in range(N):
    p = int(input())
    if p == -1:
        R = i
    else:
        edges[p-1].append(i)

queries = [[] for _ in range(N)]

Q = int(input())
for q in range(Q):
    a, b = map(int, input().split())
    queries[a-1].append([q, b-1])

ans = [False] * Q
boss = [False] * N


def dfs(i):
    for q, b in queries[i]:
        ans[q] = boss[b]
    boss[i] = True
    for j in edges[i]:
        dfs(j)
    boss[i] = False

dfs(R)
for q in range(Q):
    if ans[q]:
        print("Yes")
    else:
        print("No")

# import sys
# sys.setrecursionlimit(1001001001)
# N = int(input())
# P = [int(input()) for _ in range(N)]
# for i in range(1, N):
#     P[i] -= 1

# def check(p1, p2):
#     p1 = P[p1]
#     if p1 == p2:
#         return True
#     if p1 == -1 and p2 != 0:
#         return False
#     if check(p1, p2):
#         return True

# Q = int(input())
# for i in range(Q):
#     a, b = map(int, input().split())
#     a -= 1
#     b -= 1
#     if a == b or check(a, b):
#         print("Yes")
#     else:
#         print("No")