from collections import deque

N, M = map(int, input().split())
W = 1 << 10

g = [[] for _ in range(N)]
for i in range(M):
    a, b, w = map(int, input().split())
    a -= 1
    b -= 1
    g[a].append([b, w])

visited = [False] * (N * W)
q = deque()
def push(v, x):
    vid = v * W + x
    if visited[vid]: return
    visited[vid] = True
    q.append(vid)

push(0,0)
while len(q):
    vid = q.popleft()
    v = vid // W
    x = vid % W
    for e in g[v]:
        push(e[0], x^(e[1]))

for x in range(W):
    if visited[(N-1) * W + x]:
        print(x)
        exit()

print(-1)







#mycode
# N, M = map(int, input().split())
# A = []
# B = []
# W = []

# for _ in range(M):
#     a, b, w = map(int, input().split())
#     A.append(a-1)
#     B.append(b-1)
#     W.append(w)


# P = [[] for _ in range(N)]
# for i in range(M):
#     a, b = A[i], B[i]
#     P[a].append(b)

# visited = [[False] * N]
