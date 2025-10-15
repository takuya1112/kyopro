W, H, N = map(int, input().split())
coordinates = [[True] * W for i in range(H)]

for _ in range(N):
    x, y, a = map(int, input().split())
    if a == 1:
        for i in range(H):
            for j in range(0, x):
                coordinates[i][j] = False
    
    elif a == 2:
        for i in range(H):
            for j in range(x,W):
                coordinates[i][j] = False

    elif a == 3:
        for i in range(y):
            for j in range(W):
                coordinates[i][j] = False
    
    elif a == 4:
        for i in range(y, H):
            for j in range(W):
                coordinates[i][j] = False

ans = 0
for i in range(H):
    for j in range(W):
        if coordinates[i][j]:
            ans += 1

print(ans)