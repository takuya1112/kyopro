N = int(input())
S, T = list(map(str, input().split()))

ans = ""

for i in range(N):
    ans += S[i]
    ans += T[i]

print(ans)