N, M = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

A.sort()
B.sort()

ans = 0
ai = 0
for i in range(M):
    while ai < N and A[ai] < B[i]: ai += 1
    if ai == N:
        print(-1)
        exit()
    ans += A[ai]
    ai += 1
print(ans)

# N, M = map(int, input().split())
# A = list(map(int, input().split()))
# B = list(map(int, input().split()))

# A.sort()
# B.sort()

# idx = 0
# ans = 0
# for i in range(N):
#     if B[idx] <= A[i]:
#         idx += 1
#         ans += A[i]
#     if idx >= M:
#         print(ans)
#         exit()
#         break

# print(-1)