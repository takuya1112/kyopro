N = int(input())
A = list(map(int, input().split()))
W = list(map(int, input().split()))

box = [[] for _ in range(N)]
for i in range(N):
    box[A[i] -1].append(W[i])

ans = 0
for i in range(N):
    if len(box[i]) == 0: continue
    box[i].sort()
    for j in range(len(box[i]) -1):
        ans += box[i][j]

print(ans)


# N = int(input())
# A = list(map(int, input().split()))
# W = list(map(int, input().split()))

# ans = 0
# used = set()
# biggest = [0] * N

# for i in range(N):
#     if A[i] in used:
#         w = W[i]
#         w1 = biggest[A[i]-1]
#         ans += min(w, w1)
#         biggest[A[i]-1] = max(w, w1)
#     else:
#         biggest[A[i]-1] = W[i]
#     used.add(A[i])

# print(ans)


# N = int(input())
# A = list(map(int, input().split()))
# W = list(map(int, input().split()))

# AW = {i : [] for i in range(N)}
# for i in range(N):
#     AW[A[i]-1].append(W[i])
    

# ans = 0
# for a in AW:
#     if len(AW[a]) >= 2:
#         AW[a].sort()
#         ans += sum(AW[a][:-1])

# print(ans)