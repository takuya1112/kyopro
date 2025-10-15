H, W = map(int, input().split())
A = [list(map(int, input().split())) for _ in range(H)]

ok = True
for y1 in range(H):
    for y2 in range(y1 + 1, H):
        for x1 in range(W):
            for x2 in range(x1 + 1, W):
                if A[y1][x1] + A[y2][x2] > A[y2][x1] + A[y1][x2]:
                    ok = False
                    break

if ok:
    print("Yes")
else:
    print("No")