N, M = map(int, input().split())
A = []
B = []
for i in range(N):
    a, b = map(int, input().split())
    A.append(a)
    B.append(b)

AB = []
for i in range(N):
    AB.append([A[i], B[i]])
AB.sort()

ans = 0
for i in range(N):
    buy = min(M, AB[i][1])
    ans += buy * AB[i][0]
    M -= buy

print(ans)

# N, M = map(int, input().split())
# cost = []
# for i in range(N):
#     a, b = map(int, input().split())
#     cost.append([a, b])
# cost.sort()


# ans = 0
# for i in range(N):
#     a, b = cost[i]
#     if M - b >= 0:
#         ans += a * b
#         M -= b
#     elif M > 0:
#         ans += M * a
#         M -= b

# print(ans)
