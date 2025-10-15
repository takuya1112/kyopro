N, M = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

A.sort()
B.sort()

ai, bi = 0, 0

ans = 1001001001
while ai < N and bi < M:
    ans = min(ans, abs(A[ai] - B[bi]))
    if A[ai] < B[bi]: ai += 1
    else: bi += 1

print(ans)

# N, M = map(int, input().split())
# A = list(map(int, input().split()))
# B = list(map(int, input().split()))

# ans = float("INF")

# for i in range(N):
#     for j in range(M):
#         ans = min(ans, abs(A[i] - B[j]))

# print(ans)