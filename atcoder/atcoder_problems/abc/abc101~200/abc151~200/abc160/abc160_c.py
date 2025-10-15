K, N = list(map(int, input().split()))
A = list(map(int, input().split()))

A.append(K+A[0])
l = 0

for i in range(N):
    l= max(l, A[i + 1] - A[i])

print(K - l)





# K, N = list(map(int, input().split()))
# A = list(map(int, input().split()))

# length = []


# for i in range(N-1):
#     length.append(A[i + 1] - A[i])
# length.append(K - A[N-1] + A[0])


# print(K - max(length))
