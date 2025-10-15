N, M = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

check_A = [False] * 101
check_B = [False] * 101

for i in range(N):
    check_A[A[i]] = True

for i in range(M):
    check_B[B[i]] = True


for i in range(1,101):
    if check_A[i] and check_B[i]:
        print(i)




# N, M = map(int, input().split())
# A = list(map(int, input().split()))
# B = list(map(int, input().split()))

# ans = set()
# for i in range(N):
#     for j in range(M):
#         if A[i] == B[j]:
#             ans.add(A[i])


# ans = sorted(ans)
# for i in range(len(ans)):
#     print(ans[i])