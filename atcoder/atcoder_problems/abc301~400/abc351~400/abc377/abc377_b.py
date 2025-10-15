S = [input() for _ in range(8)]
check = [[True] * 8 for _ in range(8)]

for i in range(8):
    for j in range(8):
        if S[i][j] == "#":
            for n in range(8):
                check[i][n] = False
                check[n][j] = False

ans = 0
for i in range(8):
    for j in range(8):
        if check[i][j] == True:
            ans += 1

print(ans)