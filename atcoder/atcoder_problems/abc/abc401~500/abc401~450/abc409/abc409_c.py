N, L = map(int, input().split())
D = list(map(int, input().split()))

x = [0] * N
for i in range(N-1):
    d = D[i]
    x[i+1] = (x[i] + d) % L

count = [0] * L
for i in range(N):
    count[x[i]] += 1

if L % 3 != 0:
    print(0)
    exit()

r = L // 3
print(x)
print(count)
ans = 0
for a in range(N):
    x1 = (x[a]+r) %L
    x2 = (x1+r) %L
    ans += count[x1] * count[x2]

ans //= 3
print(ans)



# N, L = map(int, input().split())
# D = list(map(int, input().split()))
# D_list = [0] * N

# for i in range(N-1):
#     D_list[i+1] = D_list[i] + D[i]
#     if D_list[i+1] >= L:
#         D_list[i+1] -= L


# ans_list = [0] * L
# for d in D_list:
#     ans_list[d] += 1

# ans = 0
# if L % 3 == 0:
#     for i in range(L//3):
#         count = 1
#         for j in range(i, L, L//3):
#             count *= ans_list[j]
#         ans += count

# print(ans)