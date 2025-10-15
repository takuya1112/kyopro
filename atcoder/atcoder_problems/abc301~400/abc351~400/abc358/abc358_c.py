N, M = map(int, input().split())
S = [input() for _ in range(N)]
b = [0] * N
for i in range(N):
    for j in range(M):
        if S[i][j] == "o":
            b[i] |= 1 << j

ans = N
for x in range(1 << N):
    sb = 0
    for j in range(N):
        if x >> j & 1:
            sb |= b[j]
    if sb == (1 << M) -1:
        ans = min(ans, x.bit_count())

print(ans)

# N, M = map(int, input().split())
# S = []
# for _ in range(N):
#     s = input()
#     p = 0
#     for i in range(M):
#         if s[i] == "o":
#             p |= 1 << i
#     S.append(p)


# ans = N
# for bit in range(1 << N):
#     candidate = 0
#     count = 0
#     for i in range(N):
#         if bit >> i & 1:
#             candidate |= S[i]
#             count += 1
#     ok = True
#     for j in range(M):
#         if not(candidate >> j & 1):
#             ok = False
#     if ok:
#         ans = min(ans, count)

# print(ans)
            