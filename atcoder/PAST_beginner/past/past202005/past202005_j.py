import bisect

N, M = map(int, input().split())
A = list(map(int, input().split()))

B = [0] * N
for a in A:
    K = bisect.bisect_right(B, -a)
    if K == N:
        print(-1)
    else:
        print(K+1)
        B[K] = -a


#mycode worng ans
# import heapq
# N, M = map(int, input().split())
# A = list(map(int, input().split()))

# child = []
# for i in range(1, N + 1):
#     heapq.heappush(child, (0, i))
# for i in range(M):
#     print(child)
#     if A[i] > child[0][0]:
#         x, j = heapq.heappop(child)
#         print(j)
#         heapq.heappush(child, (A[i], j))
#     else:
#         print(-1)