N, K = map(int, input().split())

i = []
ans = 0
while N > 0:
    i.append(N % K)
    N //= K
    ans += 1

i.reverse()
print(i)

print(ans)
