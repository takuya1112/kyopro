import heapq
import math

N, M = map(int, input().split())
xyc_large = [list(map(int, input().split())) for _ in range(N)]
xyc_small = [list(map(int, input().split())) for _ in range(M)]

def has_bit(n, i):
    return (n & (1 << i) > 0)

def calc_edge_cost(xyc1, xyc2):
    x1, y1, c1 = xyc1
    x2, y2, c2 = xyc2
    cost = math.hypot(x1-x2, y1-y2)
    if c1 != c2:
        cost *= 10
    return cost

ans = 10.0 ** 100

for b in range(1 << M):
    xyc_use = []
    for xyc in xyc_large:
        xyc_use.append(xyc)
    
    for i in range(M):
        if has_bit(b, i):
            xyc_use.append(xyc_small[i])

    sz = len(xyc_use)
    que = []
    heapq.heapify(que)
    used = [False] * sz
    que.append([0.0, 0])
    res = 0.0

    while len(que):
        cost, i = heapq.heappop(que)
        if not used[i]:
            res += cost
            used[i] = True
            for j in range(sz):
                if not used[j]:
                    cost = calc_edge_cost(xyc_use[i], xyc_use[j])
                    heapq.heappush(que, [cost, j])
    
    ans = min(ans, res)
print(ans)
 


# mycode
# import math
# import heapq
# N, M = map(int, input().split())
# XYC1 = [list(map(int, input().split())) for _ in range(N)]
# XYC2 = [list(map(int, input().split())) for _ in range(M)]
# INF = float("INF")

# ans = INF
# for i in range(1 << M):
#     visit = []
#     for j in range(N):
#         visit.append(XYC1[j])
    
#     for j in range(M):
#         if i >> j & 1:
#             visit.append(XYC2[j])
    
#     marked = [False] * (len(visit))
#     marked_count = 0

#     marked[0] = True
#     marked_count += 1

#     Q = []
#     for j in range(1, len(visit)):
#         if visit[0][2] == visit[j][2]:
#             heapq.heappush(Q, (math.sqrt((visit[j][0] - visit[0][0]) ** 2  + (visit[j][1] - visit[0][1]) ** 2), j))
#         else:
#             heapq.heappush(Q, ((math.sqrt((visit[j][0] - visit[0][0]) ** 2  + (visit[j][1] - visit[0][1]) ** 2)) * 10, j))

#     res = 0
#     while marked_count < len(visit):
#         c, j = heapq.heappop(Q)
#         if marked[j]: continue
#         marked[j] = True
#         marked_count += 1
#         res += c
#         for k in range(len(marked)):
#             if marked[k]: continue
#             if visit[j][2] == visit[k][2]:
#                 heapq.heappush(Q, (math.sqrt((visit[j][0] - visit[k][0]) ** 2  + (visit[j][1] - visit[k][1]) ** 2), k))
#             else:
#                 heapq.heappush(Q, ((math.sqrt((visit[j][0] - visit[k][0]) ** 2  + (visit[j][1] - visit[k][1]) ** 2)) * 10, k))
#     ans = min(ans, res)
# print(ans)
        