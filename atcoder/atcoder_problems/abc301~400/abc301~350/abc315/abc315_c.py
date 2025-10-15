N = int(input())
A = [[] for _ in range(N)]

for i in range(N):
    f, s = map(int, input().split())
    A[f-1].append(s)

ans = 0
for i in range(N):
    A[i].sort(reverse=True)
    if len(A[i]) < 2: continue
    now = A[i][0] + A[i][1] // 2
    ans = max(ans, now)

B = []
for i in range(N):
    if len(A[i]) == 0: continue
    B.append(A[i][0])

B.sort(reverse=True)
if len(B) >= 2: ans = max(ans, B[0] + B[1])

print(ans)

# N = int(input())
# F = []
# S = []
# for _ in range(N):
#     f, s = map(int, input().split())
#     F.append(f)
#     S.append(s)

# SF = []
# for i in range(N):
#     SF.append([S[i], F[i]])

# SF.sort(reverse=True)

# ans = 0
# s1 = SF[0][0]
# f1 = SF[0][1]
# for i in range(1, N):
#     s2 = SF[i][0]
#     f2 = SF[i][1]
#     if f1 == f2:
#         s2 //= 2
#     ans = max(s1+ s2, ans)
    
# print(ans)