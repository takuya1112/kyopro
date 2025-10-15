H, W = map(int, input().split())
S = [input() for _ in range(H)]

check = [1,-1]


for y in range(H):
    for x in range(W):
        if S[y][x] == "#":
            check_list = []
            for k in check:
                yy = y + k
                xx = x + k

                if 0 <= yy < H:
                    if S[yy][x] == "#":
                        check_list.append(True)

                if 0 <= xx < W:
                    if S[y][xx] == "#":
                        check_list.append(True)

            if True not in check_list:
                print("No")
                exit()

print("Yes")