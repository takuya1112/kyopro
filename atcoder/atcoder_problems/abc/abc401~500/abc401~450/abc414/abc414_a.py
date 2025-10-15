N, L, R = map(int, input().split())

ans = 0
for i in range(N):
    x, y = map(int, input().split())
    if x <= L and R <= y: ans += 1

print(ans)

# N, L, R = map(int, input().split())
# X = []
# Y = []
# for i in range(N):
#     x, y = map(int, input().split())
#     X.append(x)
#     Y.append(y)

# ans = 0
# for i in range(N):
#     if X[i] <= L and Y[i] >= R:
#         ans += 1

# print(ans)