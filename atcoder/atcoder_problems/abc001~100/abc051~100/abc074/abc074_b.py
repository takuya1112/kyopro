N = int(input())
K = int(input())
x = list(map(int, input().split()))

ans = 0
for i in range(N):
    ans += 2 * (min(x[i], K-x[i]))

print(ans)



# N = int(input())
# K = int(input())
# x = list(map(int, input().split()))

# ans = 0
# for i in range(N):
#     n = abs(0 - x[i])
#     k = abs(K - x[i])
#     if n > k:
#         ans += (k*2)
#     else:
#         ans += (n*2)

# print(ans)