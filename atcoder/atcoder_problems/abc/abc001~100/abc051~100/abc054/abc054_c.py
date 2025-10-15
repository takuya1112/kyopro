N, M = map(int, input().split())
G = [[] for _ in range(N)]
seen = [False] * N
res = 0

for _ in range(M):
    a, b = map(int, input().split())
    a -= 1
    b -= 1
    G[a].append(b)
    G[b].append(a)

def dfs (v, seen):
    global res
    end = True
    for i in range(len(seen)):
        if not seen[i] and i != v:
            end = False
    
    if end:
        res += 1
        return

    seen[v] = True
    for nv in G[v]:
        if seen[nv]:
            continue
        dfs(nv, seen)
    seen[v] = False

dfs(0, seen)
print(res)


# import itertools
# N, M = map(int, input().split())
# G = [[False] * 10 for _ in range(10)]

# for _ in range(M):
#     a, b = map(int, input().split())
#     a -= 1 
#     b -= 1
#     G[a][b] = True
#     G[b][a] = True

# order = list(range(N))
# perms = itertools.permutations(order)
# res = 0
# for p in perms:
#     if p[0] != 0:
#         break
#     ok = True
#     for i in range(N-1):
#         fr = p[i]
#         to = p[i+1]
#         if not G[fr][to]:
#             ok = False
        
#     if ok:
#         res += 1

# print(res)



#wrong ans
# from collections import deque

# N, M = map(int, input().split())
# sides = [set() for _ in range(N)]


# for i in range(M):
#     A, B = map(int, input().split())
#     A -= 1
#     B -= 1
#     sides[A].add(B)
#     sides[B].add(A)
# print(sides)
# ans = 0
# flag = 1

# for i in range(N):
#     flag |= 1 << i


# Q = deque()
# for d in sides[0]:
#     Q.append([d, 1])

# print(Q)

# def check(n, used):
#     global ans
#     used |= 1 << n
#     if used == flag:
#         ans += 1
#     for d in sides[n]:
#         Q.append([d, used])
#     return used


# while len(Q) > 0:
#     n, used = Q.popleft()
#     used = check(n, used)
#     print(Q)
#     if used == flag:
#         ans += 1

# print(ans)