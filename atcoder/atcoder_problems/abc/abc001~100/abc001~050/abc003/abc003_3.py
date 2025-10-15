N, K = map(int, input().split())
R = sorted(list(map(int, input().split())))
R = R[N - min(N, K):]

ans = 0
for r in R:
    ans += r
    ans /= 2

print(ans)


# N, K = map(int, input().split())
# R = list(map(int, input().split()))

# R.sort()

# ans = 0
# for i in range(N -K, N):
#     ans = (ans + R[i]) / 2

# print(ans)