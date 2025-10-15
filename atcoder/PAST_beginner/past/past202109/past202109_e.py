N, K = map(int, input().split())
C = list(map(int, input().split()))
P = list(map(int, input().split()))

order = []
for i  in range(N):
    order.append([P[i], C[i]])
order.sort()

used = set()
ans = 0
for i in range(N):
    price = order[i][0]
    color = order[i][1]

    if color in used: continue
    ans += price
    used.add(color)
    if len(used) == K:
        print(ans)
        exit()

print(-1)


# N, K = map(int, input().split())
# C = list(map(int, input().split()))
# P = list(map(int, input().split()))

# min_price = {}
# for i in range(N):
#     c, p = C[i], P[i]
#     if c not in min_price:
#         min_price[c] = p
#     else:
#         min_price[c] = min(min_price[c], p)


# ans = []
# for c in min_price:
#     ans.append(min_price[c])

# ans.sort()
# if len(ans) < K:
#     print(-1)
# else:
#     print(sum(ans[:K]))