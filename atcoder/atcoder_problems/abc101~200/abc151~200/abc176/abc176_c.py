N = int(input())
A = list(map(int, input().split()))

res = 0
highest = 0
for i in range(N):
    a = A[i]
    if a < highest: res += highest - a
    highest = max(highest, a)
print(res)


# N = int(input())
# A = list(map(int, input().split()))

# ans = 0
# for i in range(1, N):
#     if A[i] < A[i-1]:
#         dif = A[i-1] - A[i]
#         A[i] += dif
#         ans += dif
# print(ans)