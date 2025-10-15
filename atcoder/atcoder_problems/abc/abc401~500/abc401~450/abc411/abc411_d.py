N , Q = map(int, input().split())
op = [0] * Q
p = [0] * Q
s = [[] for _ in range(Q)]

for i in range(Q):
    query = input().split()
    op[i] = int(query[0])
    p[i] = int(query[1])
    if op[i] == 2:
        s[i] += query[2]
        s[i].reverse()

ans = []
i = 0
for t in range(Q-1, -1, -1):
    if op[t] == 1:
        if i == p[t]:
            i = 0
    elif op[t] == 2:
        if i == p[t]:
            ans += s[t]
    else:
        if i == 0:
            i = p[t]


ans.reverse()
ans = "".join(ans)
print(ans)


#mycode
# import copy
# N , Q = map(int, input().split())
# queries = [input().split() for _ in range(Q)]

# server = []
# pc = [[] for _ in range(N)]
# for i in range(Q):
#     query = queries[i]
#     n = int(query[0])
#     p = int(query[1])-1
#     if n == 1:
#         pc[p] = server.copy()
#     if n == 2:
#         pc[p] += query[2]
#     if n == 3:
#         server = pc[p].copy()

# ans = "".join(server)
# print(ans)