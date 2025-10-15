N, M = map(int, input().split())
S = [0] * M
for i in range(M):
    c = int(input())
    s = list(map(int, input().split()))
    for j in range(c):
        a = s[j] -1
        S[i] |= 1 << a

ans = 0
for i in range(1 << M):
    t = 0
    for j in range(M):
        if i >> j & 1:
            t |= S[j]
    if t == (1 << N) -1:
        ans += 1
print(ans)


# N, M = map(int, input().split())
# n = (1 << N) -1

# S = [0] * M
# for i in range(M):
#     c = int(input())
#     s = list(map(int, input().split()))
#     for j in range(c):
#         S[i] |= 1 << (s[j]-1)

# ans = 0

# for bit in range(1 << M):
#     a = 0
#     for i in range(M):
#         if bit >> i & 1:
#             a |= S[i]
#     if n == a:
#         ans += 1

# print(ans)