N, X = map(int, input().split())
A = list(map(int, input().split()))

X -= 1
for i in range(N):
    A[i] -= 1

know = [False] * N
ans = 0
while not know[X]:
    know[X] = True
    X = A[X]
    ans += 1

print(ans)

# N, X = map(int, input().split())
# A = list(map(int, input().split()))
# X -= 1
# know = [False] * N

# nxt = X
# while True:
#     if know[nxt]:
#         break
#     know[nxt] = True
#     nxt = A[nxt] -1

# ans = 0
# for i in range(N):
#     if know[i]:
#         ans += 1

# print(ans)