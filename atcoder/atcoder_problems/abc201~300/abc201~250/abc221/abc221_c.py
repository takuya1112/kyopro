import itertools
n = int(input())

a = []
while n:
    a.append(n%10)
    n //= 10


a.sort()
k = len(a)
ans = 0
for perm in itertools.permutations(a):
    for i in range(1, k):
        if perm[0] == 0: continue
        if perm[i] == 0: continue
        l, r = 0, 0
        for j in range(i): l = l * 10 + perm[j]
        for j in range(i, k): r = r * 10 + perm[j]
        ans = max(ans, l*r)

print(ans)


# import itertools
# N = list(input())

# ans = 0
# for perm in itertools.permutations(N):
#     for i in range(1, len(perm)):
#         a = int("".join(perm[:i]))
#         b = int("".join(perm[i:]))
#         ans = max(ans, a * b)
# print(ans)