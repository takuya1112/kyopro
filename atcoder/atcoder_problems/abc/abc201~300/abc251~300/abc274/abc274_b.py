H, W = map(int, input().split())
C = [input() for _ in range(H)]

for i in range(W):
    sum_num = 0
    for j in range(H):
        if C[j][i] == "#":
            sum_num += 1
    print(sum_num, end=" ")

print()