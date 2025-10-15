N = int(input())
X_Y_H = [list(map(int, input().split())) for _ in range(N)]


for cx in range(101):
    for cy in range(101):
        H = 1
        
        for x, y, h in X_Y_H:
            if h > 0:
                H = h + abs(cx - x) + abs(cy - y)
            ok = True
            for x2, y2, h2 in X_Y_H:
                if max(H - abs(x2 - cx) - abs(y2 - cy), 0) != h2:
                    ok = False
            if ok:
                print(cx, cy, H)
                exit()
             
