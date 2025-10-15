# N, C, K = map(int, input().split())
# T = [int(input()) for _ in range(N)]
# T.sort()

# ans = 0
# i = 0
# while i < N:
#     for j in range(1, C+1):
#         if i + j >= N:
#             break
#         if T[i]+ K < T[i+j]:
#             break

#     ans += 1
#     i += j
# print(ans)

# N, C, K = map(int, input().split())
# T = [int(input()) for _ in range(N)]
# T.append(10 ** 10)
# T.sort()

# c = 0
# t = 0
# ans = 0
# for i in range(N):
#     if c == 0: 
#         t = T[i] + K
#     c += 1
#     if c == C or t < T[i+1]:
#         ans += 1
#         c = 0
# print(ans)


N, C, K = map(int, input().split())
T = [int(input()) for _ in range(N)]
T.sort()
ans = 0
i = 0
while i < N:
    for j in range(1, C+1):
        if i + j >= N:
            break
        if T[i]+ K < T[i+j]:
            break
    ans += 1
    i += j
print(ans)
