N = int(input())
W = list(map(int, input().split()))

ans = sum(W)
for i in range(N):
    S1 = sum(W[:i])
    S2 = sum(W[i:])
    ans = min(ans,abs(S1-S2))

print(ans)