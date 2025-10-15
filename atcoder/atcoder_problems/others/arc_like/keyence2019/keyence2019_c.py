N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

if sum(A) < sum(B):
    exit(print(-1))

ans = 0
diff = []
S = 0
for i in range(N):
    if A[i] < B[i]:
        ans += 1
        S += B[i] - A[i]
    elif A[i] > B[i]:
        diff.append(A[i] - B[i])

diff.sort(reverse=True)
idx = 0
while 1 <= S:
    ans += 1
    S -= diff[idx]
    idx += 1

print(ans)



# N = int(input())
# A = list(map(int, input().split()))
# B = list(map(int, input().split()))
# C = [0] * N
# ans = 0
# diff = 0
# for i in range(N):
#     if A[i] < B[i]:
#         ans += 1
#         diff += B[i] - A[i]
#     C[i] = max(A[i] - B[i], 0)

# C.sort(reverse=True)
# for i in range(N):
#     if diff == 0:
#         print(ans)
#         exit()
#     if C[i] == 0:
#         print(-1)
#         exit()
#     diff = max(diff-C[i], 0)
#     ans += 1

# print(ans)