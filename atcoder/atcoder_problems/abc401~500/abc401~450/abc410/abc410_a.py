N = int(input())
A = list(map(int, input().split()))
K = int(input())

res = 0
for a in A:
    if K <= a: res += 1

print(res)

# N = int(input())
# A = list(map(int, input().split()))
# K = int(input())

# count = 0
# for i in range(N):
#     if K <= A[i]:
#         count += 1

# print(count)