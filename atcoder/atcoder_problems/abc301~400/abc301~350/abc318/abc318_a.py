N, M, P = map(int, input().split())
i = M
ans = 0
while i <= N:
    ans += 1
    i += P
print(ans)


# N, M, P = map(int, input().split())
# if M > N: print(0)
# else: print((N - M) // P + 1)


# N, M, P = map(int, input().split())
# ans = 0
# if N >= M:
#     ans += 1

# if N - M > 0: 
#     ans += (N - M) // P
# print(ans)