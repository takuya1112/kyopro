N, M = map(int, input().split())
C = list(input().split())
D = list(input().split())
P = list(map(int, input().split()))

ans = 0
for c in C:
    price = P[0]
    for i in range(M):
        if c == D[i]:
            price = P[i+1]
            break
    
    ans += price
print(ans)



# N, M = map(int, input().split())
# C = input().split()
# D = input().split()
# P = list(map(int, input().split()))

# dish_price = {}

# for i in range(M):
#     dish_price[D[i]] = P[i+1]

# for i in range(N):
#     if C[i] not in dish_price:
#         dish_price[C[i]] = P[0]


# ans = 0
# for i in range(N):
#     ans += dish_price[C[i]]

# print(ans)