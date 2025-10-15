N, W = map(int, input().split())
AB = []
for i in range(N):
    a, b = map(int, input().split())
    AB.append([a, b])

AB.sort(reverse=True)
ans = 0
for i in range(N):
    a, b = AB[i][0], AB[i][1]
    x = min(W, b)
    ans += a * x
    W -= x

print(ans)



# N, W = map(int, input().split())
# AB = []
# for i in range(N):
#     a, b = map(int, input().split())
#     AB.append([a, b])

# AB.sort(reverse=True)

# ans = 0
# for i in range(N):
#     a, b = AB[i]
#     if W - b >= 0:
#         ans += a * b
#     elif W > 0:
#         ans += a * W
#     W -= b

# print(ans)