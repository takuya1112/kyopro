N, Q = map(int, input().split())
T = list(map(int, input().split()))

teeth = [1 for _ in range(N)]

for i in range(Q):
    t = T[i] - 1
    teeth[t] ^= 1

print(sum(teeth))


# N, Q = map(int, input().split())
# T = list(map(int, input().split()))

# teeth = [True] * N
# for i in range(Q):
#     t = T[i] -1
#     if teeth[t]:
#         teeth[t] = False
#     else:
#         teeth[t] = True

# count = 0
# for i in range(N):
#     if teeth[i]:
#         count += 1

# print(count)