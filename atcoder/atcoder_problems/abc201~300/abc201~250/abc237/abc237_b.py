H, W = map(int, input().split())
A = [list(map(int, input().split())) for _ in range(H)]

for x in range(W):
    for y in range(H):
        print(A[y][x], end=" ")
    print()