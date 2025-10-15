N = int(input())
D = {}
for i in range(N):
    a, c = map(int, input().split())
    if c not in D: D[c] = a
    else: D[c] = min(D[c], a)

ans = 0
for c in D:
    ans = max(ans, D[c])

print(ans)


# N = int(input())
# Map = {}
# for _ in range(N):
#     a, c = map(int, input().split())
#     if c not in Map:
#         Map[c] = a
#     else:
#         if Map[c] > a:
#             Map[c] = a

# ans = -1
# for c in Map:
#     ans = max(ans, Map[c])

# print(ans)