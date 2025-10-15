N, W = map(int, input().split())
A = list(map(int, input().split()))

can = [False] * (W+1)
for i in range(N):
    if A[i] < W:
        can[A[i]] = True

for i in range(N):
    for j in range(i):
        s = A[i] + A[j]
        if s <= W:
            can[s] = True

for i in range(N):
    for j in range(i):
        for k in range(j):
            s = A[i] + A[j] + A[k]
            if s <= W:
                can[s] = True

ans = 0
for i in range(1, W+1):
    if can[i]:
        ans+= 1

print(ans) 

# N, W = map(int, input().split())
# A = list(map(int, input().split()))


# res = set()
# for i in range(N):
#     if A[i] <= W:
#         res.add(A[i])

# for i in range(N):
#     for j in range(i+1, N):
#         a = A[i]
#         b = A[j]
#         if a + b <= W:
#             res.add(a+b)

# for i in range(N):
#     for j in range(i+1, N):
#         for k in range(j+1, N):
#             a = A[i]
#             b = A[j]
#             c = A[k]
#             if a + b + c <= W:
#                 res.add(a+b+c)
# print(len(res))
