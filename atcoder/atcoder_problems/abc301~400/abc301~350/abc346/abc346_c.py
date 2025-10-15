N, K = map(int, input().split())
A = list(map(int, input().split()))
ans = (K+1) * K // 2
S = set(A)
for s in S:
    if s <= K:
        ans -= s

print(ans)

#mycode
# N, K = map(int, input().split())
# A = list(map(int, input().split()))
# A = set(A)
# A = list(A)


# ans = sum(range(1, K+1))
# minus = 0
# for i in range(len(A)):
#     if K < A[i]:
#         continue
#     minus += A[i]


# print(ans - minus)