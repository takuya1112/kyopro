N, D, P = map(int, input().split())
F = list(map(int, input().split()))
F.sort()

ans = 0
for i in range(N): ans += F[i]
while len(F):
    s = 0
    for _ in range(min(D, len(F))):
        f = F.pop()
        s += f
    if s < P: break
    ans -= s - P
print(ans)


# N, D, P = map(int, input().split())
# F = list(map(int, input().split()))
# F.sort()

# S = [0] * (N+1)
# for i in range(N):
#     S[i+1] = S[i] + F[i]

# ans = 1e18
# for i in range(int(1e9)):
#     r = max(0, N - i * D)
#     now = S[r] + P*i
#     print(now)
#     ans = min(ans, now)
#     if r == 0: break
    
# print(ans)



# N, D, P = map(int, input().split())
# F = list(map(int, input().split()))

# F.sort(reverse=True)

# ans = 0
# for i in range(0, N, D):
#     cnt = sum(F[i:i+D])
#     if cnt > P:
#         ans += P
#     else:
#         ans += cnt
    
# print(ans)