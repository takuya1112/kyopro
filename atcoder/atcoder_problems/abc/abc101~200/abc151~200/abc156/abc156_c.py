N = int(input())
X = list(map(int, input().split()))
P = round(sum(X) / len(X))

ans = 0
for i in range(N):
    ans += (X[i] - P) ** 2

print(ans)