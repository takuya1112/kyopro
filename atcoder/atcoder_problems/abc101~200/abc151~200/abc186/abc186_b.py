H, W = map(int, input().split())
A = [list(map(int, input().split())) for _ in range(H)]

most_min = 1000
for i in range(H):
    for j in range(W):
        most_min = min(most_min, A[i][j])

ans = 0
for i in range(H):
    for j in range(W):
        ans += abs(most_min - A[i][j])

print(ans)