H, W = map(int, input().split())
S = [list(input()) for _ in range(H)]
check_list = [-1, 0, 1]

for i in range(H):
    for j in range(W):
        count = 0
        if S[i][j] == ".":
            Si = i
            Sj = j
            for n in check_list:
                if Si - 1 >= 0 and 0 <= Sj + n < W and S[Si-1][Sj + n] == "#":
                    count += 1

            for m in check_list:
                if 0 <= Sj + m < W and S[Si][Sj + m] == "#":
                    count += 1

            for k in check_list:
                if Si + 1 < H and 0 <= Sj + k < W and S[Si+1][Sj + k] == "#":
                    count += 1

            S[i][j] = str(count)

for s in S:
    print("".join(s))