N, M = map(int, input().split())

ok = [True] * (N+1)
for i in range(M):
    a = int(input())
    ok[a] = False

MOD = 10 ** 9 + 7

cnt = [0] * (N+1)
cnt[0] = 1

for i in range(1, N+1):
    if ok[i]:
        if i == 1:
            cnt[i] = cnt[i-1]
        else:
            cnt[i] = (cnt[i-1] + cnt[i-2]) % MOD

print(cnt[N])


# N, M = map(int, input().split())

# broken = [0] * (N+1)
# for i in range(M):
#     a = int(input())
#     broken[a] = 1

# dp = [0] * (N + 2)
# mod = 1000000007
# dp[N] = 1
# for i in range(N-1, -1, -1):
#     if broken[i] == 1:
#         dp[i] = 0
#         continue

#     dp[i] = (dp[i+1] + dp[i+2]) % mod 
    

# print(dp[0])

# N, M = map(int, input().split())
# broken = [0] * (N + 1)
# for i in range(M):
#     a = int(input())
#     broken[a] = 1

# dp = [0] * (N + 1)
# mod = 1000000007

# dp[0] = 1
# if broken[1] == 0:
#     dp[1] = 1

# for i in range(2, N+1):
#     if broken[i] == 1:
#         dp[i] = 0
#         continue

#     dp[i] = (dp[i-1] + dp[i-2]) % mod


# print(dp[-1])


#worng ans
# N, M = map(int, input().split())
# A = [0]

# for _ in range(M):
#     A.append(int(input()))
# A.append(N)

# ans = 1

# for i in range(len(A)-1):
#     absv = abs(A[i] - A[i+1]) -1
#     print(absv)
#     prev, curr = 1, 1
#     for i in range(absv):
#         temp = curr
#         curr = prev + curr
#         prev = temp
#     print(curr)
#     ans *= curr
#     ans %= 1000000007

# print(ans)

