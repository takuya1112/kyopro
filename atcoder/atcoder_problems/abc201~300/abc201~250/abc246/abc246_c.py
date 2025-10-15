N, K, X = map(int, input().split())
A = list(map(int, input().split()))
B = [0] * N
C = 0
S = sum(A)

for i in range(N):
    B[i] = A[i] % X
    C += A[i] // X  

if C >= K:
    S -= X * K
else:
    S -= X * C
    K -= C
    K = min(K, N)
    B.sort(reverse=True)
    for i in range(K):
        S -= B[i]

print(S)


# N, K, X = map(int, input().split())
# A = list(map(int, input().split()))

# for i in range(N):
#     if K <= 0:continue
#     n = A[i] // X
#     if n <= K:
#         A[i] -= X * n
#         K -= n

#     else:
#         A[i] -= X * K
#         K = 0

# A.sort(reverse=True)

# for i in range(N):
#     if K <= 0: break
#     A[i] = max(A[i] - X, 0)
#     K -= 1

# S = sum(A)
# print(S)