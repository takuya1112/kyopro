N = int(input())
ans = 0
for _ in range(N):
    a, b = map(int, input().split())
    if a < b:
        ans += 1

print(ans)




# N = int(input())
# A = []
# B = []
# for _ in range(N):
#     a, b = map(int, input().split())
#     A.append(a)
#     B.append(b)

# ans = 0
# for i in range(N):
#     if A[i] < B[i]:
#         ans += 1
# print(ans)